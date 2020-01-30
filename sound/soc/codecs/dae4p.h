/*
 * File: sound/soc/codec/dae4p.h
 *
 *  Copyright (c) Cortina-Systems Limited 2012. All rights reserved.
 *
 *  Mostly copied from wm8750.h
 *
 *  This program is free software; you can redistribute  it and/or modify it
 *  under  the terms of  the GNU General  Public License as published by the
 *  Free Software Foundation;  either version 2 of the  License, or (at your
 *  option) any later version.
 */

#ifndef _DAE4P_H
#define _DAE4P_H

/* DAE4P register space */
#define DAE4P_MASTER_VOLUME		0x000000
#define DAE4P_OUT_VOLUME0		0x000001
#define DAE4P_OUT_VOLUME1		0x000002
#define DAE4P_OUT_VOLUME2		0x000003
#define DAE4P_OUT_VOLUME3		0x000004
#define DAE4P_OUT_VOLUME4		0x000005
#define DAE4P_ONE_VOLUME1		0x000006
#define DAE4P_ONE_VOLUME2		0x000007
#define DAE4P_TWO_VOLUME1		0x000008
#define DAE4P_TWO_VOLUME2		0x000009
#define DAE4P_ONE_TONE_LPA1		0x00000A
#define DAE4P_ONE_TONE_LPGN		0x00000B
#define DAE4P_ONE_TONE_HPA1		0x00000C
#define DAE4P_ONE_TONE_HPGN		0x00000D
#define DAE4P_TWO_TONE_LPA1		0x00000E
#define DAE4P_TWO_TONE_LPGN		0x00000F
#define DAE4P_TWO_TONE_HPA1		0x000010
#define DAE4P_TWO_TONE_HPGN		0x000011
#define DAE4P_ROUNTER			0x000012
#define DAE4P_ONE_COMP_IN3		0x000013
#define DAE4P_ONE_COMP_IN9		0x000014
#define DAE4P_ONE_COMP_IN10		0x000015
#define DAE4P_ONE_COMP_IN11		0x000016
#define DAE4P_ONE_COMP_IN12		0x000017
#define DAE4P_ONE_COMP_IN19		0x000018
#define DAE4P_TWO_COMP_IN3		0x000019
#define DAE4P_TWO_COMP_IN9		0x00001A
#define DAE4P_TWO_COMP_IN10		0x00001B
#define DAE4P_TWO_COMP_IN11		0x00001C
#define DAE4P_TWO_COMP_IN12		0x00001D
#define DAE4P_TWO_COMP_IN19		0x00001E
#define DAE4P_ONE_IN_PARAM1		0x00001F
#define DAE4P_ONE_IN_PARAM11		0x000020
#define DAE4P_ONE_IN_PARAM17		0x000021
#define DAE4P_ONE_IN_PARAM2		0x000022
#define DAE4P_ONE_IN_PARAM21		0x000023
#define DAE4P_ONE_IN_PARAM27		0x000024
#define DAE4P_ONE_IN_PARAM3		0x000025
#define DAE4P_ONE_IN_PARAM31		0x000026
#define DAE4P_ONE_IN_PARAM37		0x000027
#define DAE4P_ONE_IN_PARAM4		0x000028
#define DAE4P_ONE_IN_PARAM41		0x000029
#define DAE4P_ONE_IN_PARAM47		0x00002A
#define DAE4P_ONE_IN_PARAM5		0x00002B
#define DAE4P_ONE_IN_PARAM51		0x00002C
#define DAE4P_ONE_IN_PARAM57		0x00002D
#define DAE4P_TWO_IN_PARAM1		0x00002E
#define DAE4P_TWO_IN_PARAM11		0x00002F
#define DAE4P_TWO_IN_PARAM17		0x000030
#define DAE4P_TWO_IN_PARAM2		0x000031
#define DAE4P_TWO_IN_PARAM21		0x000032
#define DAE4P_TWO_IN_PARAM27		0x000033
#define DAE4P_TWO_IN_PARAM3		0x000034
#define DAE4P_TWO_IN_PARAM31		0x000035
#define DAE4P_TWO_IN_PARAM37		0x000036
#define DAE4P_TWO_IN_PARAM4		0x000037
#define DAE4P_TWO_IN_PARAM41		0x000038
#define DAE4P_TWO_IN_PARAM47		0x000039
#define DAE4P_TWO_IN_PARAM5		0x00003A
#define DAE4P_TWO_IN_PARAM51		0x00003B
#define DAE4P_TWO_IN_PARAM57		0x00003C
#define DAE4P_ONE_OUT_PARAM1		0x00003D
#define DAE4P_ONE_OUT_PARAM11		0x00003E
#define DAE4P_ONE_OUT_PARAM17		0x00003F
#define DAE4P_ONE_OUT_PARAM2		0x000040
#define DAE4P_ONE_OUT_PARAM21		0x000041
#define DAE4P_ONE_OUT_PARAM27		0x000042
#define DAE4P_ONE_OUT_PARAM3		0x000043
#define DAE4P_ONE_OUT_PARAM31		0x000044
#define DAE4P_ONE_OUT_PARAM37		0x000045
#define DAE4P_TWO_OUT_PARAM1		0x000046
#define DAE4P_TWO_OUT_PARAM11		0x000047
#define DAE4P_TWO_OUT_PARAM17		0x000048
#define DAE4P_TWO_OUT_PARAM2		0x000049
#define DAE4P_TWO_OUT_PARAM21		0x00004A
#define DAE4P_TWO_OUT_PARAM27		0x00004B
#define DAE4P_TWO_OUT_PARAM3		0x00004C
#define DAE4P_TWO_OUT_PARAM31		0x00004D
#define DAE4P_TWO_OUT_PARAM37		0x00004E
#define DAE4P_THREE_OUT_PARAM1		0x00004F
#define DAE4P_THREE_OUT_PARAM11		0x000050
#define DAE4P_THREE_OUT_PARAM17		0x000051
#define DAE4P_THREE_OUT_PARAM2		0x000052
#define DAE4P_THREE_OUT_PARAM21		0x000053
#define DAE4P_THREE_OUT_PARAM27		0x000054
#define DAE4P_THREE_OUT_PARAM3		0x000055
#define DAE4P_THREE_OUT_PARAM31		0x000056
#define DAE4P_THREE_OUT_PARAM37		0x000057
#define DAE4P_FOUR_OUT_PARAM1		0x000058
#define DAE4P_FOUR_OUT_PARAM11		0x000059
#define DAE4P_FOUR_OUT_PARAM17		0x00005A
#define DAE4P_FOUR_OUT_PARAM2		0x00005B
#define DAE4P_FOUR_OUT_PARAM21		0x00005C
#define DAE4P_FOUR_OUT_PARAM27		0x00005D
#define DAE4P_FOUR_OUT_PARAM3		0x00005E
#define DAE4P_FOUR_OUT_PARAM31		0x00005F
#define DAE4P_FOUR_OUT_PARAM37		0x000060
#define DAE4P_ONE_SEQ1			0x000061
#define DAE4P_ONE_SEQ11			0x000062
#define DAE4P_ONE_SEQ17			0x000063
#define DAE4P_ONE_SEQ2			0x000064
#define DAE4P_ONE_SEQ21			0x000065
#define DAE4P_ONE_SEQ27			0x000066
#define DAE4P_ONE_SEQ3			0x000067
#define DAE4P_ONE_SEQ31			0x000068
#define DAE4P_ONE_SEQ37			0x000069
#define DAE4P_ONE_SEQ4			0x00006A
#define DAE4P_ONE_SEQ41			0x00006B
#define DAE4P_ONE_SEQ47			0x00006C
#define DAE4P_ONE_SEQ5			0x00006D
#define DAE4P_ONE_SEQ51			0x00006E
#define DAE4P_ONE_SEQ57			0x00006F
#define DAE4P_TWO_SEQ1			0x000070
#define DAE4P_TWO_SEQ11			0x000071
#define DAE4P_TWO_SEQ17			0x000072
#define DAE4P_TWO_SEQ2			0x000073
#define DAE4P_TWO_SEQ21			0x000074
#define DAE4P_TWO_SEQ27			0x000075
#define DAE4P_TWO_SEQ3			0x000076
#define DAE4P_TWO_SEQ31			0x000077
#define DAE4P_TWO_SEQ37			0x000078
#define DAE4P_TWO_SEQ4			0x000079
#define DAE4P_TWO_SEQ41			0x00007A
#define DAE4P_TWO_SEQ47			0x00007B
#define DAE4P_TWO_SEQ5			0x00007C
#define DAE4P_TWO_SEQ51			0x00007D
#define DAE4P_TWO_SEQ57			0x00007E
#define DAE4P_ONE_LOW_PASS14		0x00007F
#define DAE4P_ONE_LOW_PASS1		0x000080
#define DAE4P_ONE_LOW_PASS11		0x000081
#define DAE4P_ONE_LOW_PASS24		0x000082
#define DAE4P_ONE_LOW_PASS2		0x000083
#define DAE4P_ONE_LOW_PASS21		0x000084
#define DAE4P_ONE_HIGH_PASS14		0x000085
#define DAE4P_ONE_HIGH_PASS1		0x000086
#define DAE4P_ONE_HIGH_PASS11		0x000087
#define DAE4P_ONE_HIGH_PASS24		0x000088
#define DAE4P_ONE_HIGH_PASS2		0x000089
#define DAE4P_ONE_HIGH_PASS21		0x00008A
#define DAE4P_TWO_LOW_PASS14		0x00008B
#define DAE4P_TWO_LOW_PASS1		0x00008C
#define DAE4P_TWO_LOW_PASS11		0x00008D
#define DAE4P_TWO_LOW_PASS24		0x00008E
#define DAE4P_TWO_LOW_PASS2		0x00008F
#define DAE4P_TWO_LOW_PASS21		0x000090
#define DAE4P_TWO_HIGH_PASS14		0x000091
#define DAE4P_TWO_HIGH_PASS1		0x000091
#define DAE4P_TWO_HIGH_PASS11		0x000093
#define DAE4P_TWO_HIGH_PASS24		0x000094
#define DAE4P_TWO_HIGH_PASS2		0x000095
#define DAE4P_TWO_HIGH_PASS21		0x000096
#define DAE4P_THREE_LOW_PASS14		0x000097
#define DAE4P_THREE_LOW_PASS1		0x000098
#define DAE4P_THREE_LOW_PASS11		0x000099
#define DAE4P_THREE_LOW_PASS24		0x00009A
#define DAE4P_THREE_LOW_PASS2		0x00009B
#define DAE4P_THREE_LOW_PASS21		0x00009C
#define DAE4P_THREE_HIGH_PASS14		0x00009D
#define DAE4P_THREE_HIGH_PASS1		0x00009E
#define DAE4P_THREE_HIGH_PASS11		0x00009F
#define DAE4P_THREE_HIGH_PASS24		0x0000A0
#define DAE4P_THREE_HIGH_PASS2		0x0000A1
#define DAE4P_THREE_HIGH_PASS21		0x0000A2
#define DAE4P_FOUR_LOW_PASS14		0x0000A3
#define DAE4P_FOUR_LOW_PASS1		0x0000A4
#define DAE4P_FOUR_LOW_PASS11		0x0000A5
#define DAE4P_FOUR_LOW_PASS24		0x0000A6
#define DAE4P_FOUR_LOW_PASS2		0x0000A7
#define DAE4P_FOUR_LOW_PASS21		0x0000A8
#define DAE4P_FOUR_HIGH_PASS14		0x0000A9
#define DAE4P_FOUR_HIGH_PASS1		0x0000AA
#define DAE4P_FOUR_HIGH_PASS11		0x0000AB
#define DAE4P_FOUR_HIGH_PASS24		0x0000AC
#define DAE4P_FOUR_HIGH_PASS2		0x0000AD
#define DAE4P_FOUR_HIGH_PASS21		0x0000AE
#define DAE4P_SUB_VOL1			0x0000AF
#define DAE4P_SUB_VOL2			0x0000B0
#define DAE4P_FIVE_LOW_PASS14		0x0000B1
#define DAE4P_FIVE_LOW_PASS1		0x0000B2
#define DAE4P_FIVE_LOW_PASS11		0x0000B3
#define DAE4P_FIVE_LOW_PASS24		0x0000B4
#define DAE4P_FIVE_LOW_PASS2		0x0000B5
#define DAE4P_FIVE_LOW_PASS21		0x0000B6
#define DAE4P_FIVE_HIGH_PASS14		0x0000B7
#define DAE4P_FIVE_HIGH_PASS1		0x0000B8
#define DAE4P_FIVE_HIGH_PASS11		0x0000B9
#define DAE4P_FIVE_HIGH_PASS24		0x0000BA
#define DAE4P_FIVE_HIGH_PASS2		0x0000BB
#define DAE4P_FIVE_HIGH_PASS21		0x0000BC
#define DAE4P_ONE_COMP_OUT3		0x0000BD
#define DAE4P_ONE_COMP_OUT9		0x0000BE
#define DAE4P_ONE_COMP_OUT10		0x0000BF
#define DAE4P_ONE_COMP_OUT11		0x0000C0
#define DAE4P_ONE_COMP_OUT12		0x0000C1
#define DAE4P_ONE_COMP_OUT19		0x0000C2
#define DAE4P_TWO_COMP_OUT3		0x0000C3
#define DAE4P_TWO_COMP_OUT9		0x0000C4
#define DAE4P_TWO_COMP_OUT10		0x0000C5
#define DAE4P_TWO_COMP_OUT11		0x0000C6
#define DAE4P_TWO_COMP_OUT12		0x0000C7
#define DAE4P_TWO_COMP_OUT19		0x0000C8
#define DAE4P_THREE_COMP_OUT3		0x0000C9
#define DAE4P_THREE_COMP_OUT9		0x0000CA
#define DAE4P_THREE_COMP_OUT10		0x0000CB
#define DAE4P_THREE_COMP_OUT11		0x0000CC
#define DAE4P_THREE_COMP_OUT12		0x0000CD
#define DAE4P_THREE_COMP_OUT19		0x0000CE
#define DAE4P_FOUR_COMP_OUT3		0x0000CF
#define DAE4P_FOUR_COMP_OUT9		0x0000D0
#define DAE4P_FOUR_COMP_OUT10		0x0000D1
#define DAE4P_FOUR_COMP_OUT11		0x0000D2
#define DAE4P_FOUR_COMP_OUT12		0x0000D3
#define DAE4P_FOUR_COMP_OUT19		0x0000D4
#define DAE4P_FIVE_COMP_OUT3		0x0000D5
#define DAE4P_FIVE_COMP_OUT9		0x0000D6
#define DAE4P_FIVE_COMP_OUT10		0x0000D7
#define DAE4P_FIVE_COMP_OUT11		0x0000D8
#define DAE4P_FIVE_COMP_OUT12		0x0000D9
#define DAE4P_FIVE_COMP_OUT19		0x0000DA
#define DAE4P_LOUD1_ENABLE		0x0000DB
#define DAE4P_LOUD1_TONE_LPA1		0x0000DC
#define DAE4P_LOUD1_TONE_HPA1		0x0000DD
#define DAE4P_LOUD2_ENABLE		0x0000DE
#define DAE4P_LOUD2_TONE_LPA1		0x0000DF
#define DAE4P_LOUD2_TONE_HPA1		0x0000E0
#define DAE4P_LOUD3_ENABLE		0x0000E1
#define DAE4P_LOUD3_TONE_LPA1		0x0000E2
#define DAE4P_LOUD3_TONE_HPA1		0x0000E3
#define DAE4P_LOUD4_ENABLE		0x0000E4
#define DAE4P_LOUD4_TONE_LPA1		0x0000E5
#define DAE4P_LOUD4_TONE_HPA1		0x0000E6
#define DAE4P_LOUD5_ENABLE		0x0000E7
#define DAE4P_LOUD5_TONE_LPA1		0x0000E8
#define DAE4P_LOUD5_TONE_HPA1		0x0000E9
#define DAE4P_RESERVED_0EA		0x0000EA
#define DAE4P_RESERVED_0EB		0x0000EB
#define DAE4P_XTALK_HPA1		0x0000EC
#define DAE4P_XTALK_HPGN		0x0000ED
#define DAE4P_XTALK_LPA1		0x0000EE
#define DAE4P_XTALK_LPGN		0x0000EF
#define DAE4P_XTALK_VOL			0x0000F0
#define DAE4P_BYPASS_SPATIAL_L		0x0000F1
#define DAE4P_BYPASS_SPATIAL_R		0x0000F2
#define DAE4P_POS_HPF14			0x0000F3
#define DAE4P_POS_HPF1			0x0000F4
#define DAE4P_POS_HPF11			0x0000F5
#define DAE4P_POS_HPF24			0x0000F6
#define DAE4P_POS_HPF2			0x0000F7
#define DAE4P_POS_HPF21			0x0000F8
#define DAE4P_POS_DELAY1		0x0000F9
#define DAE4P_POS_DELAY2		0x0000FA
#define DAE4P_POS_LPF1			0x0000FB
#define DAE4P_POS_LPF2			0x0000FC
#define DAE4P_BASS_IN_LP1		0x0000FD
#define DAE4P_BASS_IN_LP2		0x0000FE
#define DAE4P_BASS_IN_HP1		0x0000FF
#define DAE4P_BASS_IN_HP2		0x000100
#define DAE4P_BASS_OUT_LP1		0x000101
#define DAE4P_BASS_OUT_LP2		0x000102
#define DAE4P_BASS_OUT_HP1		0x000103
#define DAE4P_BASS_OUT_HP2		0x000104
#define DAE4P_BASS_MIX_L1		0x000105
#define DAE4P_BASS_MIX_L2		0x000106
#define DAE4P_BASS_MIX_R1		0x000107
#define DAE4P_BASS_MIX_R2		0x000108
#define DAE4P_DEEP_HP_FEQ		0x000109
#define DAE4P_DEEP_OFF_HP_FEQ		0x00010A
#define DAE4P_SOUND_SUITE_BYPASS	0x00010B
#define DAE4P_BASS_IAGC_THRESH		0x00010C
#define DAE4P_BASS_IAGC_ATTACK		0x00010D
#define DAE4P_BASS_IAGC_RELEASE		0x00010E
#define DAE4P_BASS_IAGC_GAIN		0x00010F
#define DAE4P_HAR_DATA2			0x000110
#define DAE4P_HAR_DATA3			0x000111
#define DAE4P_HAR_DATA4			0x000112
#define DAE4P_HAR_DATA5			0x000113
#define DAE4P_HAR_DATA6			0x000114
#define DAE4P_HAR_DATA7			0x000115
#define DAE4P_BASS_OAGC_THRESH		0x000116
#define DAE4P_BASS_OAGC_ATTACK		0x000117
#define DAE4P_BASS_OAGC_RELEASE		0x000118
#define DAE4P_BASS_OAGC_GAIN		0x000119
#define DAE4P_1CV_IN1_LOW1		0x00011A
#define DAE4P_1CV_IN1_LOW2		0x00011B
#define DAE4P_1CV_IN2_HIGH1		0x00011C
#define DAE4P_1CV_IN2_HIGH2		0x00011D
#define DAE4P_1CV_HAR_DATA2		0x00011E
#define DAE4P_1CV_HAR_DATA3		0x00011F
#define DAE4P_1CV_HAR_DATA4		0x000120
#define DAE4P_1CV_HAR_DATA5		0x000121
#define DAE4P_1CV_HAR_DATA6		0x000122
#define DAE4P_1CV_HAR_DATA7		0x000123
#define DAE4P_1CV_OUT1_LOW1		0x000124
#define DAE4P_1CV_OUT1_LOW2		0x000125
#define DAE4P_1CV_OUT2_HIGH1		0x000126
#define DAE4P_1CV_OUT2_HIGH2		0x000127
#define DAE4P_1CV_21_VOL1		0x000128
#define DAE4P_1CV_21_VOL2		0x000129
#define DAE4P_2CV_IN1_LOW1		0x00012A
#define DAE4P_2CV_IN1_LOW2		0x00012B
#define DAE4P_2CV_IN2_HIGH1		0x00012C
#define DAE4P_2CV_IN2_HIGH2		0x00012D
#define DAE4P_2CV_HAR_DATA2		0x00012E
#define DAE4P_2CV_HAR_DATA3		0x00012F
#define DAE4P_2CV_HAR_DATA4		0x000130
#define DAE4P_2CV_HAR_DATA5		0x000131
#define DAE4P_2CV_HAR_DATA6		0x000132
#define DAE4P_2CV_HAR_DATA7		0x000133
#define DAE4P_2CV_OUT1_LOW14		0x000134
#define DAE4P_2CV_OUT1_LOW1		0x000135
#define DAE4P_2CV_OUT1_LOW11		0x000136
#define DAE4P_2CV_OUT1_LOW2		0x000137
#define DAE4P_2CV_OUT2_HIGH1		0x000138
#define DAE4P_2CV_OUT2_HIGH2		0x000139
#define DAE4P_2CV_21_VOL1		0x00013A
#define DAE4P_2CV_21_VOL2		0x00013B
#define DAE4P_2LAST_LOW_YMEM		0x00013C
#define DAE4P_RESERVED_13D		0x00013D
#define DAE4P_ENABLE			0x00013E
#define DAE4P_BBE_3D_GAIN		0x00013F
#define DAE4P_BBE_PROC_LEVEL		0x000140
#define DAE4P_BBE_CONT_LEVEL		0x000141
#define DAE4P_COEF_B2			0x000142
#define DAE4P_COEF_A2			0x000143
#define DAE4P_COEF_A1			0x000144
#define DAE4P_COEF_B1			0x000145
#define DAE4P_COEF_B0			0x000146
#define DAE4P_FLAG			0x000147
#define DAE4P_CONFIG_CHANGE		0x000148
#define DAE4P_PROCESS_ENABLE		0x000149
#define DAE4P_INPUT_MODE		0x00014A
#define DAE4P_OUTPUT_MODE		0x00014B
#define DAE4P_TBASS_FRONT_PROCESS	0x00014C
#define DAE4P_TBASS_SUB_PROCESS		0x00014D
#define DAE4P_DEF_FRONT_PROCESS		0x00014E
#define DAE4P_DEF_CENTER_PROCESS	0x00014F
#define DAE4P_DIA_CLARITY_PROCESS	0x000150
#define DAE4P_WOWHDSRS3D_PROCESS	0x000151
#define DAE4P_SURROUND_LEVEL_CTRL	0x000152
#define DAE4P_INPUT_GAIN		0x000153
#define DAE4P_OUTPUT_GAIN		0x000154
#define DAE4P_BYPASS_GAIN		0x000155
#define DAE4P_DEF_FRONT_CTRL		0x000156
#define DAE4P_DEF_CENTER_CTRL		0x000157
#define DAE4P_DIA_CLARITY_CTRL		0x000158
#define DAE4P_TBASS_FRONT_CTRL		0x000159
#define DAE4P_TBASS_SUB_CTRL		0x00015A
#define DAE4P_TBASS_SPEAKER_SIZE	0x00015B
#define DAE4P_SUB_SPEAKER_SIZE		0x00015C
#define DAE4P_HD_SUB_CROSSOVER		0x00015D
#define DAE4P_WOWHDSCS3D_HIGH_BITRATE	0x00015E
#define DAE4P_WOWHDFOCUS_PROCESS	0x00015F
#define DAE4P_WOWHDLIMITER_PROCESS	0x000160
#define DAE4P_WOWHDSCS3D_MODE		0x000161
#define DAE4P_WOWHDSCS3D_SPACE_CTRL	0x000162
#define DAE4P_WOWHDSCS3D_CENTER_CTRL	0x000163
#define DAE4P_WOWHDFOCUS_CTRL		0x000164
#define DAE4P_WOWHDLIMITER_CTRL		0x000165
#define DAE4P_SOUND_SUITE		0x000166
#define DAE4P_HARDWARE_OPTION		0x000167

/* special uncontinued jumped registers */
#define DAE4P_INPUT_SEL_WRITE		0x020001
#define DAE4P_INPUT_SEL_READ		0x020002
/* Storing Parameters to EEPROM */
#define DAE4P_SAVE_TO_EEPROM		0x800000

#define DAE4P_CACHE_REGNUM 0x168

extern struct snd_soc_dai dae4p_dai;
extern struct snd_soc_codec_device soc_codec_dev_dae4p;

#endif
