
基础路径设置:
//basePath = 
nvPath = SPDE_PRJ\WA03U_T2_V2\nvitem
//nvPath = SPDE_PRJ\WA07U_F30Z\nvitem
nv:\\

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_nv_8910.h \[1.1\] 充电--电流
Save:node\C\study\Macro_nv_8910.h \[1.2\] 充电/放电--电压
Save:node\C\study\Macro_nv_8910.h \[1.3\] 低电电压
Save:node\C\study\Macro_nv_8910.h \[1.4\] charge_end_voltage 高压电池
Save:node\C\study\Macro_nv_8910.h \[1.5\] PA
Save:node\C\study\Macro_nv_8910.h \[1.6\] 
Save:node\C\study\Macro_nv_8910.h \[1.7\] 
Save:node\C\study\Macro_nv_8910.h \[1.8\] 
Save:node\C\study\Macro_nv_8910.h \[1.9\] 
Save:node\C\study\Macro_nv_8910.h \[1.10\] 
Save:node\C\study\Macro_nv_8910.h \[1.11\] 
Save:node\C\study\Macro_nv_8910.h \[1.12\] 




[1.1] 充电--电流
// 标准电流
nv:ProductionParam_uix8910.nvm  standard_current_type
//    ITEM_CONTENT = 0x1F4   // 500

// 非标准电流
nv:ProductionParam_uix8910.nvm  nonstandard_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// usb口电流
nv:ProductionParam_uix8910.nvm  usb_current_type
//    ITEM_CONTENT = 0x1C2   // 450

// num:
//	450	1C2
//	500	1F4
//	600	258
//	700	2BC
//	630	276



[1.2] 充电/放电电压
// 充电截止电压
nv:ProductionParam_uix8910.nvm  charge_end_voltage
//    ITEM_CONTENT = 0x1112   // 4.37V

// recharge充电
nv:ProductionParam_uix8910.nvm  recharge_voltage
//    ITEM_CONTENT = 0x10CC   // 4.30V

// recharge充电
nv:ProductionParam_uix8910.nvm  bat_safety_vol
//    ITEM_CONTENT = 0x1112   // 4.37V


//# 充电时 电池%的换算 是依据chg_bat_tab
//#   8910没有用到chg_bat_tab
//nv:ProductionParam_uix8910.nvm  ^chg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V

# 放电时 电池%的换算 是依据dischg_bat_tab
nv:ProductionParam_uix8910.nvm  dischg_bat_tab[0]
//    ITEM_CONTENT = 0x10F2   // 4.338V



[1.3] 低电电压
// warn
nv:ProductionParam_uix8910.nvm  voltage_warning
//    ITEM_CONTENT = 0xE2D   // 3629

// shutdown
nv:ProductionParam_uix8910.nvm  voltage_shutdown
//    ITEM_CONTENT = 0xCE4   // 3300

//
// 0%
nv:ProductionParam_uix8910.nvm  dischg_bat_tab\[11\]
//    ITEM_CONTENT = 0xD3E



[1.4] charge_end_voltage 高压电池
//
//	测试了3个版本
//	charge_end_voltage设置4.29,  实际最大充电电压能到4.20
//	charge_end_voltage设置4.37,  实际最大充电电压能到4.28
//	charge_end_voltage设置4.434, 实际最大充电电压能到4.342



[1.5] PA
//
audio_calib_VQE.nvm中的audio_calib_param\CALIB_AUD_ALG\VoiceCallNb[0]\reserved
//
nv:audio_calib_VQE.nvm  audio_calib

//
//	reserved为0表示原始接法，没有使用外部PA，没有听筒喇叭二合一或三合一
//	reserved为1表示使用外部PA，外部PA接在HP_R上，没有听筒喇叭二合一或三合一
//	reserved为2表示使用内部PA，有听筒喇叭二合一或三合一
//	reserved为3表示使用外部PA，外部PA接在HP_R上，有听筒喇叭二合一或三合一
//
//	AUDIO_AMP_CLASSK_SUPPORT  = TRUE
//	AUDIO_AMP_CLASSK_3IN1_SUPPORT  = TRUE


[1.6] 




[1.7] 




[1.8] 




[1.9] 




[1.10] 



[1.11] 




[1.12] 




[1.13] 




[1.14] 




[1.15] 


