
基础路径设置:
//basePath = 
zmaeePath = SPDE_PRJ\WA07U_F30Z\zmaee
zmaee:\\


/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_zmaee_8910.h \[1.1\] menu
Save:node\C\study\Macro_zmaee_8910.h \[1.2\] SENSOR
Save:node\C\study\Macro_zmaee_8910.h \[1.3\] powerOff
Save:node\C\study\Macro_zmaee_8910.h \[1.4\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.5\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.6\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.7\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.8\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.9\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.10\] 客户
Save:node\C\study\Macro_zmaee_8910.h \[1.11\] 
Save:node\C\study\Macro_zmaee_8910.h \[1.12\] 




[1.1] menu
// xx.h
zmaee:c\zmaee_fixedapp.c  25
//#include "zmaee_6660.h" //心电


// app
zmaee:c\zmaee_fixedapp.c  ZMAEE_FIXEDRES^g_zmaee_fixedres
//	{6660, (const char*)sg_zmaee_6660_rom, sizeof(sg_zmaee_6660_rom)},//心电


// menu
zmaee:h\zmaee_watchos_menu.h  sg_zmaee_fwatch_shortcuts_ui



[1.2] SENSOR
// 心率
zmaee:h\zmaee_watchos_capabilities.h  HEART_RATE

// 体温
zmaee:h\zmaee_watchos_capabilities.h  TEMPERATURE

// 计步器
zmaee:h\zmaee_watchos_capabilities.h  PEDOMETER


// WIFI
zmaee:h\zmaee_watchos_capabilities.h  WIFI

// LED
zmaee:h\zmaee_watchos_capabilities.h  CAP_LED



[1.3] powerOff
//
MS_MMI_Main\source\mmi_app\app\zmaee\c\zmaee_porting.c  MMI_ZMAEE_MAIN_WIN_ID



[1.4] 




[1.5] 




[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 客户
//
SPDE_PRJ\WA01U_Q3\               ----
SPDE_PRJ\WA01U_Q3M\              ----
SPDE_PRJ\WA01U_Q3Z\              ----
SPDE_PRJ\WA01U_Q8\               ----
// 
SPDE_PRJ\WA03U\                  ----
SPDE_PRJ\WA03U_H3\               ----
SPDE_PRJ\WA03U_T2\               ----
SPDE_PRJ\WA03U_T2_TICWATCH\      ----
SPDE_PRJ\WA03U_T2_TW\            ----
SPDE_PRJ\WA03U_T2_V2\            ----阿拉町
//
SPDE_PRJ\WA06U\                  ----
//
SPDE_PRJ\WA07U_F3Z\              ----华米
SPDE_PRJ\WA07U_F8Z_QQVGA\        ----华米
SPDE_PRJ\WA07U_F30Z\             ----华米
//
SPDE_PRJ\WA08U\                  ----华米
SPDE_PRJ\WA08U_QQVGA\            ----华米
SPDE_PRJ\WA08U_ZZ_QQVGA\         ----众智--X6
// 
SPDE_PRJ\WA11U\                  ----华米
SPDE_PRJ\WA11U_QQVGA\            ----华米


[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 





