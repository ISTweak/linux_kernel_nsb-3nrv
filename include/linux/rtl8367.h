/*
 * Platform data definition for the Realtek RTL8367 ethernet switch driver
 *
 * Copyright (C) 2011 Gabor Juhos <juhosg@openwrt.org>
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License version 2 as published
 * by the Free Software Foundation.
 */

#ifndef _RTL8367_H
#define _RTL8367_H

#define RTL8367_DRIVER_NAME	"rtl8367"
#define RTL8367B_DRIVER_NAME	"rtl8367b"

enum rtl8367_port_speed {
	RTL8367_PORT_SPEED_10 = 0,
	RTL8367_PORT_SPEED_100,
	RTL8367_PORT_SPEED_1000,
};

struct rtl8367_port_ability {
	int force_mode;
	int nway;
	int txpause;
	int rxpause;
	int link;
	int duplex;
	enum rtl8367_port_speed speed;
};

enum rtl8367_extif_mode {
	RTL8367_EXTIF_MODE_DISABLED = 0,
	RTL8367_EXTIF_MODE_RGMII,
	RTL8367_EXTIF_MODE_MII_MAC,
	RTL8367_EXTIF_MODE_MII_PHY,
	RTL8367_EXTIF_MODE_TMII_MAC,
	RTL8367_EXTIF_MODE_TMII_PHY,
	RTL8367_EXTIF_MODE_GMII,
	RTL8367_EXTIF_MODE_RGMII_33V,
};

struct rtl8367_extif_config {
	unsigned int txdelay;
	unsigned int rxdelay;
	enum rtl8367_extif_mode mode;
	struct rtl8367_port_ability ability;
};

/*
 *      - Definition  LED Statuses      Description
 *      - 0000        LED_Off           LED pin Tri-State.
 *      - 0001        Dup/Col           Collision, Full duplex Indicator.
 *      - 0010        Link/Act          Link, Activity Indicator.
 *      - 0011        Spd1000           1000Mb/s Speed Indicator.
 *      - 0100        Spd100            100Mb/s Speed Indicator.
 *      - 0101        Spd10             10Mb/s Speed Indicator.
 *      - 0110        Spd1000/Act       1000Mb/s Speed/Activity Indicator.
 *      - 0111        Spd100/Act        100Mb/s Speed/Activity Indicator.
 *      - 1000        Spd10/Act         10Mb/s Speed/Activity Indicator.
 *      - 1001        Spd100 (10)/Act   10/100Mb/s Speed/Activity Indicator.
 *      - 1010        LoopDetect        LoopDetect Indicator.
 *      - 1011        EEE               EEE Indicator.
 *      - 1100        Link/Rx           Link, Activity Indicator.
 *      - 1101        Link/Tx           Link, Activity Indicator.
 *      - 1110        Master            Link on Master Indicator.
 *      - 1111        Act               Activity Indicator. Low for link established.
 */
enum rtl8367_led_mode {
	RTL8367_LED_MODE_OFF		= 0,
	RTL8367_LED_MODE_DUP_COL,
	RTL8367_LED_MODE_LINK_ACT,
	RTL8367_LED_MODE_SPD1000,
	RTL8367_LED_MODE_SPD100,
	RTL8367_LED_MODE_SPD10,
	RTL8367_LED_MODE_SPD1000_ACT,
	RTL8367_LED_MODE_SPD100_ACT,
	RTL8367_LED_MODE_SPD10_ACT,
	RTL8367_LED_MODE_SPD100_10_ACT,
	RTL8367_LED_MODE_LOOP_DETECT,
	RTL8367_LED_MODE_EEE,
	RTL8367_LED_MODE_LINK_RX,
	RTL8367_LED_MODE_LINK_TX,
	RTL8367_LED_MODE_MASTER,
	RTL8367_LED_MODE_ACT,
};

struct rtl8367_platform_data {
	unsigned gpio_sda;
	unsigned gpio_sck;
	void (*hw_reset)(bool active);
	char *mii_bus_name_id;	/* for MDIO bus interface */

	struct rtl8367_extif_config *extif0_cfg;
	struct rtl8367_extif_config *extif1_cfg;
	enum rtl8367_led_mode led_cfg0;
	enum rtl8367_led_mode led_cfg1;
	enum rtl8367_led_mode led_cfg2;
};

#endif /*  _RTL8367_H */
