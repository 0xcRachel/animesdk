#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace XLua { class LuaEnv; }
namespace XLua { class ObjectTranslator; }

#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET UNITYSDK_OFFSET(0xFE89440)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT0_OFFSET UNITYSDK_OFFSET(0xFD1ED30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT100_OFFSET UNITYSDK_OFFSET(0xFDF3BD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT101_OFFSET UNITYSDK_OFFSET(0xFDF5DE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT102_OFFSET UNITYSDK_OFFSET(0xFDF7FF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT103_OFFSET UNITYSDK_OFFSET(0xFDFA200)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT104_OFFSET UNITYSDK_OFFSET(0xFDFC410)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT105_OFFSET UNITYSDK_OFFSET(0xFDFE620)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT106_OFFSET UNITYSDK_OFFSET(0xFE00830)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT107_OFFSET UNITYSDK_OFFSET(0xFE02A40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT108_OFFSET UNITYSDK_OFFSET(0xFE04C50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT109_OFFSET UNITYSDK_OFFSET(0xFE06E60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT10_OFFSET UNITYSDK_OFFSET(0xFD341D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT110_OFFSET UNITYSDK_OFFSET(0xFE09070)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT111_OFFSET UNITYSDK_OFFSET(0xFE0B280)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT112_OFFSET UNITYSDK_OFFSET(0xFE0D490)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT113_OFFSET UNITYSDK_OFFSET(0xFE0F6A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT114_OFFSET UNITYSDK_OFFSET(0xFE118B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT115_OFFSET UNITYSDK_OFFSET(0xFE13A20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT116_OFFSET UNITYSDK_OFFSET(0xFE15C30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT117_OFFSET UNITYSDK_OFFSET(0xFE17E40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT118_OFFSET UNITYSDK_OFFSET(0xFE1A050)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT119_OFFSET UNITYSDK_OFFSET(0xFE1C260)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT11_OFFSET UNITYSDK_OFFSET(0xFD363E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT120_OFFSET UNITYSDK_OFFSET(0xFE1E470)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT121_OFFSET UNITYSDK_OFFSET(0xFE20680)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT122_OFFSET UNITYSDK_OFFSET(0xFE22890)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT123_OFFSET UNITYSDK_OFFSET(0xFE24AA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT124_OFFSET UNITYSDK_OFFSET(0xFE26CB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT125_OFFSET UNITYSDK_OFFSET(0xFE28EC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT126_OFFSET UNITYSDK_OFFSET(0xFE2B0D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT127_OFFSET UNITYSDK_OFFSET(0xFE2D2E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT128_OFFSET UNITYSDK_OFFSET(0xFE2F4F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT129_OFFSET UNITYSDK_OFFSET(0xFE31700)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT12_OFFSET UNITYSDK_OFFSET(0xFD385F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT130_OFFSET UNITYSDK_OFFSET(0xFE33910)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT131_OFFSET UNITYSDK_OFFSET(0xFE35B20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT132_OFFSET UNITYSDK_OFFSET(0xFE37D30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT133_OFFSET UNITYSDK_OFFSET(0xFE39F40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT134_OFFSET UNITYSDK_OFFSET(0xFE3C150)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT135_OFFSET UNITYSDK_OFFSET(0xFE3E360)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT136_OFFSET UNITYSDK_OFFSET(0xFE40570)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT137_OFFSET UNITYSDK_OFFSET(0xFE42780)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT138_OFFSET UNITYSDK_OFFSET(0xFE44990)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT139_OFFSET UNITYSDK_OFFSET(0xFE46BA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT13_OFFSET UNITYSDK_OFFSET(0xFD3A830)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT140_OFFSET UNITYSDK_OFFSET(0xFE48DB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT141_OFFSET UNITYSDK_OFFSET(0xFE4AFC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT142_OFFSET UNITYSDK_OFFSET(0xFE4D1D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT143_OFFSET UNITYSDK_OFFSET(0xFE4F3E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT144_OFFSET UNITYSDK_OFFSET(0xFE515F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT145_OFFSET UNITYSDK_OFFSET(0xFE53800)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT146_OFFSET UNITYSDK_OFFSET(0xFE55A10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT147_OFFSET UNITYSDK_OFFSET(0xFE57C20)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT148_OFFSET UNITYSDK_OFFSET(0xFE59E30)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT149_OFFSET UNITYSDK_OFFSET(0xFE5C040)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT14_OFFSET UNITYSDK_OFFSET(0xFD3CA40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT150_OFFSET UNITYSDK_OFFSET(0xFE5E250)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT151_OFFSET UNITYSDK_OFFSET(0xFE60460)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT152_OFFSET UNITYSDK_OFFSET(0xFE62670)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT153_OFFSET UNITYSDK_OFFSET(0xFE64880)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT154_OFFSET UNITYSDK_OFFSET(0xFE66A90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT155_OFFSET UNITYSDK_OFFSET(0xFE68CD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT156_OFFSET UNITYSDK_OFFSET(0xFE6AEE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT157_OFFSET UNITYSDK_OFFSET(0xFE6D0F0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT158_OFFSET UNITYSDK_OFFSET(0xFE6F300)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT159_OFFSET UNITYSDK_OFFSET(0xFE71510)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT15_OFFSET UNITYSDK_OFFSET(0xFD3EC50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT160_OFFSET UNITYSDK_OFFSET(0xFE73720)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT161_OFFSET UNITYSDK_OFFSET(0xFE75930)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT162_OFFSET UNITYSDK_OFFSET(0xFE77B40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT163_OFFSET UNITYSDK_OFFSET(0xFE79D50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT164_OFFSET UNITYSDK_OFFSET(0xFE7BF60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT165_OFFSET UNITYSDK_OFFSET(0xFE7E170)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT166_OFFSET UNITYSDK_OFFSET(0xFE80380)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT167_OFFSET UNITYSDK_OFFSET(0xFE82590)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT168_OFFSET UNITYSDK_OFFSET(0xFE847A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT169_OFFSET UNITYSDK_OFFSET(0xFE869E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT16_OFFSET UNITYSDK_OFFSET(0xFD40E60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT170_OFFSET UNITYSDK_OFFSET(0xFE88BF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT17_OFFSET UNITYSDK_OFFSET(0xFD43070)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT18_OFFSET UNITYSDK_OFFSET(0xFD45280)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT19_OFFSET UNITYSDK_OFFSET(0xFD47490)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT1_OFFSET UNITYSDK_OFFSET(0xFD20F40)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT20_OFFSET UNITYSDK_OFFSET(0xFD496A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT21_OFFSET UNITYSDK_OFFSET(0xFD4B8B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT22_OFFSET UNITYSDK_OFFSET(0xFD4DAF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT23_OFFSET UNITYSDK_OFFSET(0xFD4FD00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT24_OFFSET UNITYSDK_OFFSET(0xFD51F10)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT25_OFFSET UNITYSDK_OFFSET(0xFD54120)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT26_OFFSET UNITYSDK_OFFSET(0xFD56330)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT27_OFFSET UNITYSDK_OFFSET(0xFD58540)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT28_OFFSET UNITYSDK_OFFSET(0xFD5A750)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT29_OFFSET UNITYSDK_OFFSET(0xFD5C960)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT2_OFFSET UNITYSDK_OFFSET(0xFD23150)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT30_OFFSET UNITYSDK_OFFSET(0xFD5EB70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT31_OFFSET UNITYSDK_OFFSET(0xFD60D80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT32_OFFSET UNITYSDK_OFFSET(0xFD62F90)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT33_OFFSET UNITYSDK_OFFSET(0xFD651A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT34_OFFSET UNITYSDK_OFFSET(0xFD673B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT35_OFFSET UNITYSDK_OFFSET(0xFD695C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT36_OFFSET UNITYSDK_OFFSET(0xFD6B7D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT37_OFFSET UNITYSDK_OFFSET(0xFD6D9E0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT38_OFFSET UNITYSDK_OFFSET(0xFD6FBF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT39_OFFSET UNITYSDK_OFFSET(0xFD71E00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT3_OFFSET UNITYSDK_OFFSET(0xFD25360)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT40_OFFSET UNITYSDK_OFFSET(0xFD74010)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT41_OFFSET UNITYSDK_OFFSET(0xFD76220)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT42_OFFSET UNITYSDK_OFFSET(0xFD78430)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT43_OFFSET UNITYSDK_OFFSET(0xFD7A640)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT44_OFFSET UNITYSDK_OFFSET(0xFD7C850)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT45_OFFSET UNITYSDK_OFFSET(0xFD7EA60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT46_OFFSET UNITYSDK_OFFSET(0xFD80C70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT47_OFFSET UNITYSDK_OFFSET(0xFD82E80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT48_OFFSET UNITYSDK_OFFSET(0xFD85090)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT49_OFFSET UNITYSDK_OFFSET(0xFD872A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT4_OFFSET UNITYSDK_OFFSET(0xFD27570)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT50_OFFSET UNITYSDK_OFFSET(0xFD894B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT51_OFFSET UNITYSDK_OFFSET(0xFD8B6C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT52_OFFSET UNITYSDK_OFFSET(0xFD8D8D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT53_OFFSET UNITYSDK_OFFSET(0xFD8FAE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT54_OFFSET UNITYSDK_OFFSET(0xFD91CF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT55_OFFSET UNITYSDK_OFFSET(0xFD93F00)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT56_OFFSET UNITYSDK_OFFSET(0xFD96110)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT57_OFFSET UNITYSDK_OFFSET(0xFD98320)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT58_OFFSET UNITYSDK_OFFSET(0xFD9A530)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT59_OFFSET UNITYSDK_OFFSET(0xFD9C740)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT5_OFFSET UNITYSDK_OFFSET(0xFD29780)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT60_OFFSET UNITYSDK_OFFSET(0xFD9E950)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT61_OFFSET UNITYSDK_OFFSET(0xFDA0B60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT62_OFFSET UNITYSDK_OFFSET(0xFDA2D70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT63_OFFSET UNITYSDK_OFFSET(0xFDA4F80)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT64_OFFSET UNITYSDK_OFFSET(0xFDA7190)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT65_OFFSET UNITYSDK_OFFSET(0xFDA93A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT66_OFFSET UNITYSDK_OFFSET(0xFDAB5B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT67_OFFSET UNITYSDK_OFFSET(0xFDAD7C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT68_OFFSET UNITYSDK_OFFSET(0xFDAF9D0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT69_OFFSET UNITYSDK_OFFSET(0xFDB1BE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT6_OFFSET UNITYSDK_OFFSET(0xFD2B990)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT70_OFFSET UNITYSDK_OFFSET(0xFDB3DF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT71_OFFSET UNITYSDK_OFFSET(0xFDB6000)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT72_OFFSET UNITYSDK_OFFSET(0xFDB8210)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT73_OFFSET UNITYSDK_OFFSET(0xFDBA420)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT74_OFFSET UNITYSDK_OFFSET(0xFDBC630)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT75_OFFSET UNITYSDK_OFFSET(0xFDBE840)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT76_OFFSET UNITYSDK_OFFSET(0xFDC0A50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT77_OFFSET UNITYSDK_OFFSET(0xFDC2C60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT78_OFFSET UNITYSDK_OFFSET(0xFDC4E70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT79_OFFSET UNITYSDK_OFFSET(0xFDC7080)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT7_OFFSET UNITYSDK_OFFSET(0xFD2DBA0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT80_OFFSET UNITYSDK_OFFSET(0xFDC9290)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT81_OFFSET UNITYSDK_OFFSET(0xFDCB4A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT82_OFFSET UNITYSDK_OFFSET(0xFDCD6B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT83_OFFSET UNITYSDK_OFFSET(0xFDCF8C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT84_OFFSET UNITYSDK_OFFSET(0xFDD1AD0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT85_OFFSET UNITYSDK_OFFSET(0xFDD3CE0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT86_OFFSET UNITYSDK_OFFSET(0xFDD5EF0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT87_OFFSET UNITYSDK_OFFSET(0xFDD8100)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT88_OFFSET UNITYSDK_OFFSET(0xFDDA310)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT89_OFFSET UNITYSDK_OFFSET(0xFDDC520)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT8_OFFSET UNITYSDK_OFFSET(0xFD2FDB0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT90_OFFSET UNITYSDK_OFFSET(0xFDDE730)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT91_OFFSET UNITYSDK_OFFSET(0xFDE0940)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT92_OFFSET UNITYSDK_OFFSET(0xFDE2B50)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT93_OFFSET UNITYSDK_OFFSET(0xFDE4D60)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT94_OFFSET UNITYSDK_OFFSET(0xFDE6F70)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT95_OFFSET UNITYSDK_OFFSET(0xFDE9180)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT96_OFFSET UNITYSDK_OFFSET(0xFDEB390)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT97_OFFSET UNITYSDK_OFFSET(0xFDED5A0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT98_OFFSET UNITYSDK_OFFSET(0xFDEF7B0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT99_OFFSET UNITYSDK_OFFSET(0xFDF19C0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT9_OFFSET UNITYSDK_OFFSET(0xFD31FC0)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET UNITYSDK_OFFSET(0xFE8A060)
#define XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET UNITYSDK_OFFSET(0xFE8A0C0)

namespace XLua::CSObjectWrap
{
	inline static constexpr unsigned int XLua_Gen_Initer_Register___TypeDefinitionIndex = 41800;

	class XLua_Gen_Initer_Register__ : public ::System::Object
	{
	public:
		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER____CTOR_OFFSET))(this);
		}

		static ::System::Void wrapInit0(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT0_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit1(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT1_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit2(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT2_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit3(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT3_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit4(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT4_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit5(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT5_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit6(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT6_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit7(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT7_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit8(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT8_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit9(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT9_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit10(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT10_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit11(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT11_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit12(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT12_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit13(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT13_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit14(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT14_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit15(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT15_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit16(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT16_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit17(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT17_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit18(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT18_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit19(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT19_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit20(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT20_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit21(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT21_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit22(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT22_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit23(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT23_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit24(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT24_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit25(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT25_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit26(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT26_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit27(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT27_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit28(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT28_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit29(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT29_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit30(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT30_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit31(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT31_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit32(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT32_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit33(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT33_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit34(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT34_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit35(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT35_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit36(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT36_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit37(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT37_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit38(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT38_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit39(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT39_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit40(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT40_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit41(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT41_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit42(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT42_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit43(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT43_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit44(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT44_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit45(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT45_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit46(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT46_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit47(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT47_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit48(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT48_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit49(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT49_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit50(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT50_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit51(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT51_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit52(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT52_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit53(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT53_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit54(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT54_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit55(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT55_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit56(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT56_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit57(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT57_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit58(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT58_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit59(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT59_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit60(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT60_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit61(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT61_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit62(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT62_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit63(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT63_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit64(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT64_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit65(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT65_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit66(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT66_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit67(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT67_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit68(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT68_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit69(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT69_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit70(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT70_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit71(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT71_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit72(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT72_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit73(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT73_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit74(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT74_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit75(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT75_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit76(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT76_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit77(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT77_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit78(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT78_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit79(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT79_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit80(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT80_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit81(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT81_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit82(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT82_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit83(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT83_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit84(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT84_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit85(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT85_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit86(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT86_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit87(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT87_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit88(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT88_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit89(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT89_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit90(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT90_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit91(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT91_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit92(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT92_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit93(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT93_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit94(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT94_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit95(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT95_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit96(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT96_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit97(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT97_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit98(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT98_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit99(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT99_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit100(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT100_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit101(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT101_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit102(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT102_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit103(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT103_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit104(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT104_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit105(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT105_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit106(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT106_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit107(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT107_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit108(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT108_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit109(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT109_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit110(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT110_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit111(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT111_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit112(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT112_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit113(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT113_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit114(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT114_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit115(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT115_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit116(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT116_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit117(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT117_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit118(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT118_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit119(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT119_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit120(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT120_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit121(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT121_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit122(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT122_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit123(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT123_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit124(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT124_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit125(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT125_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit126(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT126_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit127(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT127_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit128(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT128_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit129(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT129_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit130(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT130_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit131(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT131_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit132(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT132_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit133(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT133_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit134(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT134_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit135(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT135_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit136(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT136_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit137(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT137_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit138(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT138_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit139(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT139_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit140(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT140_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit141(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT141_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit142(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT142_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit143(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT143_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit144(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT144_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit145(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT145_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit146(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT146_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit147(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT147_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit148(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT148_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit149(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT149_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit150(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT150_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit151(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT151_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit152(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT152_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit153(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT153_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit154(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT154_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit155(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT155_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit156(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT156_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit157(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT157_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit158(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT158_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit159(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT159_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit160(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT160_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit161(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT161_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit162(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT162_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit163(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT163_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit164(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT164_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit165(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT165_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit166(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT166_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit167(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT167_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit168(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT168_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit169(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT169_OFFSET))(luaenv, translator);
		}

		static ::System::Void wrapInit170(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___WRAPINIT170_OFFSET))(luaenv, translator);
		}

		static ::System::Void Init(::XLua::LuaEnv* luaenv, ::XLua::ObjectTranslator* translator)
		{
			return ((::System::Void(*)(::XLua::LuaEnv*, ::XLua::ObjectTranslator*))((::PBYTE)hIl2Cpp + XLUA_CSOBJECTWRAP_XLUA_GEN_INITER_REGISTER___INIT_OFFSET))(luaenv, translator);
		}
	};
}
