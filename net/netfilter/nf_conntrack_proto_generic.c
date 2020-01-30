/* (C) 1999-2001 Paul `Rusty' Russell
 * (C) 2002-2004 Netfilter Core Team <coreteam@netfilter.org>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/types.h>
#include <linux/jiffies.h>
#include <linux/timer.h>
#include <linux/netfilter.h>
#include <net/netfilter/nf_conntrack_l4proto.h>

static unsigned int nf_ct_generic_timeout __read_mostly = 600*HZ;

#ifdef CONFIG_CORTINA_GKCI
#include <linux/export.h>
/* debug_Aaron on 2012/08/27 for turn on/off netfilter dynamically */
int nf_ct_generic_enabled=0;
EXPORT_SYMBOL(nf_ct_generic_enabled);
#endif

static bool generic_pkt_to_tuple(const struct sk_buff *skb,
				 unsigned int dataoff,
				 struct nf_conntrack_tuple *tuple)
{
	tuple->src.u.all = 0;
	tuple->dst.u.all = 0;

	return true;
}

static bool generic_invert_tuple(struct nf_conntrack_tuple *tuple,
				 const struct nf_conntrack_tuple *orig)
{
	tuple->src.u.all = 0;
	tuple->dst.u.all = 0;

	return true;
}

/* Print out the per-protocol part of the tuple. */
static int generic_print_tuple(struct seq_file *s,
			       const struct nf_conntrack_tuple *tuple)
{
	return 0;
}

static unsigned int *generic_get_timeouts(struct net *net)
{
	return &nf_ct_generic_timeout;
}

/* Returns verdict for packet, or -1 for invalid. */
static int generic_packet(struct nf_conn *ct,
			  const struct sk_buff *skb,
			  unsigned int dataoff,
			  enum ip_conntrack_info ctinfo,
			  u_int8_t pf,
			  unsigned int hooknum,
			  unsigned int *timeout)
{
	nf_ct_refresh_acct(ct, ctinfo, skb, *timeout);
	return NF_ACCEPT;
}

/* Called when a new connection for this protocol found. */
static bool generic_new(struct nf_conn *ct, const struct sk_buff *skb,
			unsigned int dataoff, unsigned int *timeouts)
{
	return true;
}

#if IS_ENABLED(CONFIG_NF_CT_NETLINK_TIMEOUT)

#include <linux/netfilter/nfnetlink.h>
#include <linux/netfilter/nfnetlink_cttimeout.h>

static int generic_timeout_nlattr_to_obj(struct nlattr *tb[], void *data)
{
	unsigned int *timeout = data;

	if (tb[CTA_TIMEOUT_GENERIC_TIMEOUT])
		*timeout =
		    ntohl(nla_get_be32(tb[CTA_TIMEOUT_GENERIC_TIMEOUT])) * HZ;
	else {
		/* Set default generic timeout. */
		*timeout = nf_ct_generic_timeout;
	}

	return 0;
}

static int
generic_timeout_obj_to_nlattr(struct sk_buff *skb, const void *data)
{
	const unsigned int *timeout = data;

	NLA_PUT_BE32(skb, CTA_TIMEOUT_GENERIC_TIMEOUT, htonl(*timeout / HZ));

	return 0;

nla_put_failure:
        return -ENOSPC;
}

static const struct nla_policy
generic_timeout_nla_policy[CTA_TIMEOUT_GENERIC_MAX+1] = {
	[CTA_TIMEOUT_GENERIC_TIMEOUT]	= { .type = NLA_U32 },
};
#endif /* CONFIG_NF_CT_NETLINK_TIMEOUT */

#ifdef CONFIG_SYSCTL
static struct ctl_table_header *generic_sysctl_header;
static struct ctl_table generic_sysctl_table[] = {
	{
		.procname	= "nf_conntrack_generic_timeout",
		.data		= &nf_ct_generic_timeout,
		.maxlen		= sizeof(unsigned int),
		.mode		= 0644,
		.proc_handler	= proc_dointvec_jiffies,
	},
#ifdef CONFIG_CORTINA_GKCI
	/* debug_Aaron on 2012/08/27 for turn on/off netfilter dynamically */
	{
                .procname       = "nf_conntrack_generic_enabled",
                .data           = &nf_ct_generic_enabled,
                .maxlen         = sizeof(unsigned int),
                .mode           = 0644,
                .proc_handler   = proc_dointvec_jiffies,
        },
#endif
	{ }
};
#ifdef CONFIG_NF_CONNTRACK_PROC_COMPAT
static struct ctl_table generic_compat_sysctl_table[] = {
	{
		.procname	= "ip_conntrack_generic_timeout",
		.data		= &nf_ct_generic_timeout,
		.maxlen		= sizeof(unsigned int),
		.mode		= 0644,
		.proc_handler	= proc_dointvec_jiffies,
	},
	{ }
};
#endif /* CONFIG_NF_CONNTRACK_PROC_COMPAT */
#endif /* CONFIG_SYSCTL */

struct nf_conntrack_l4proto nf_conntrack_l4proto_generic __read_mostly =
{
	.l3proto		= PF_UNSPEC,
	.l4proto		= 255,
	.name			= "unknown",
	.pkt_to_tuple		= generic_pkt_to_tuple,
	.invert_tuple		= generic_invert_tuple,
	.print_tuple		= generic_print_tuple,
	.packet			= generic_packet,
	.get_timeouts		= generic_get_timeouts,
	.new			= generic_new,
#if IS_ENABLED(CONFIG_NF_CT_NETLINK_TIMEOUT)
	.ctnl_timeout		= {
		.nlattr_to_obj	= generic_timeout_nlattr_to_obj,
		.obj_to_nlattr	= generic_timeout_obj_to_nlattr,
		.nlattr_max	= CTA_TIMEOUT_GENERIC_MAX,
		.obj_size	= sizeof(unsigned int),
		.nla_policy	= generic_timeout_nla_policy,
	},
#endif /* CONFIG_NF_CT_NETLINK_TIMEOUT */
#ifdef CONFIG_SYSCTL
	.ctl_table_header	= &generic_sysctl_header,
	.ctl_table		= generic_sysctl_table,
#ifdef CONFIG_NF_CONNTRACK_PROC_COMPAT
	.ctl_compat_table	= generic_compat_sysctl_table,
#endif
#endif
};
