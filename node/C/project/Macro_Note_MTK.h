
//目录[Num][Ca]:
// 项目选择 编译
Save:node\C\project\Macro_Note_MTK.h \[1.1\] 当前项目
Save:node\C\project\Macro_Note_MTK.h \[1.2\] MTK编译指令[ Cc ]:
Save:node\C\project\Macro_Note_MTK.h \[1.2\] Make 常用设置[ Cf]:
Save:node\C\project\Macro_Note_MTK.h \[1.3\] 项目路径替换[ Cr]:
// 菜单 资源
Save:node\C\project\Macro_Note_MTK.h \[2.1\] 菜单[ m]:
Save:node\C\project\Macro_Note_MTK.h \[2.2\] 图片[ r]
Save:node\C\project\Macro_Note_MTK.h \[2.3\] 铃声:
Save:node\C\project\Macro_Note_MTK.h \[2.4\] 字符串:
Save:node\C\project\Macro_Note_MTK.h \[2.5\] 字库文件:
// 设置
Save:node\C\project\Macro_Note_MTK.h \[3.1\] 设置[ s]:
Save:node\C\project\Macro_Note_MTK.h \[3.2\] 语言, 默认语言:
Save:node\C\project\Macro_Note_MTK.h \[3.3\] 指令:
Save:node\C\project\Macro_Note_MTK.h \[3.4\] 情景模式 音频参数:
Save:node\C\project\Macro_Note_MTK.h \[3.5\] GUI[g]: 状态条 电量百分比
// 联系人
Save:node\C\project\Macro_Note_MTK.h \[4.1\] Idle[ I]: Lock Theme
Save:node\C\project\Macro_Note_MTK.h \[4.2\] 联系人[ p]: 短信
Save:node\C\project\Macro_Note_MTK.h \[4.3\] 多媒体[ u]:
Save:node\C\project\Macro_Note_MTK.h \[4.4\] 浏览器[ w]: 网络参数
Save:node\C\project\Macro_Note_MTK.h \[4.5\] 文件管理
Save:node\C\project\Macro_Note_MTK.h \[4.6\] 工具[ t]:单位转换 游戏 闹钟 日历 魔音
// Build问题
Save:node\C\project\Macro_Note_MTK.h \[5.1\] 扩展项目:
Save:node\C\project\Macro_Note_MTK.h \[5.2\] Build问题[ Cb][ b]:
	
//模拟器调试:
Save:node\C\study\Macro_modis_MTK.h
//MTK2:
Save:SI\node\note\Macro_Note_MTK2.h

/***********************************************************************/

--------------------------------------------------
[1.1] 当前项目
// 查看--选择历史项目列表: 
Save:set\Macro_Set_Note.h \[1.2\] MTK

--------------------------------------------------
// 默认项目(便于上传svn) [Cs]:
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm
	
// 当前项目:
set XG05_KM_Q2407_SP5000_F2 M103_KEMAN gprs
set M610_KM_V2411_SP6000_F2 M610 gprs
set M610_KM_V2411_SP6000_F2 M610 gprs
set M115_JGW_D2_X191_F2 M115 gprs
set M039_BLH_ZX M039 gprs
set M107_XYZN_S2_4A_WESTERN_F2 M107 gprs


// 更换projects目录:	
setPath old (在这一行按F5, 开始替换)
setPath new (在这一行按F5, 开始替换, 路径为 projects\...)

setEnd:从setEnd行开始替换名称(上一次选中->当前选中); 以空格分开; 不要直接替换(M105<->M105_MLT 暂时未判断)

/***********************************************************************/
/*************************** 编译与下载 ********************************/
/***********************************************************************/

[1.2] MTK编译指令[Cc]:
cmd: cmd


编译1:
make M107_XYZN_S2_4A_WESTERN_F2 gprs new

编译2:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\New_common.bat


编译模块
make M107_XYZN_S2_4A_WESTERN_F2 gprs r
make M107_XYZN_S2_4A_WESTERN_F2 gprs remake
make M107_XYZN_S2_4A_WESTERN_F2 gprs remake custom
make M107_XYZN_S2_4A_WESTERN_F2 gprs remake plutommi

编译资源 (VS接着编译即可)
make M107_XYZN_S2_4A_WESTERN_F2 gprs Resgen


模拟器: (改mk需重编)
make M107_XYZN_S2_4A_WESTERN_F2 gprs gen_modis
vs08:MoDIS_VC9\MoDIS.sln

模拟器改NV后, 运行报错, 删除文件:
MoDIS_VC9\WIN32FS\DRIVE_C


// mtk--下载工具
Save:node\C\install\Macro_C_Install.h \[3.4\] mtk--下载工具:


/***********************************************************************/
/************************ Make常用设置 *******************************/
/***********************************************************************/

[1.2] Make 常用设置[Cf]:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOMER_NAME = M107
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak MAIN_LCD_SIZE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak _COMBO_LCM = ST7735S GC9106	  屏设置
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SYNC_LCM_SUPPORT 			  屏设置 TE脚
//make\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak 2_DATA_LANE_LCM 		  屏 三线/四线
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak DUAL_CAMERA_SUPPORT 	  		  摄像头设置
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CMOS_SENSOR GC6133_SERIAL	  摄像头设置
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CMOS_SENSOR_BAK1 SP0821_SERIAL 摄像头设置
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak FLASHLIGHT_TYPE				  闪光灯
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION 			  	  自定义宏


Make 特殊宏:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak REF_LIST_BRANCH  翻译
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_DEVICE
custom/system/FARSIGHTED61M_CN_11C_BB/custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h __MMI_SUPER_BATTERY__



features:
plutommi/mmi/Inc/MMI_features.h PEER_CONTROL
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_DYNAMIC_SIM_DYNAMIC_UI
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h WHITELIST
	


版本号[Cv]:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld BUILD_DATE 版本文件



/***********************************************************************/
/************************ 项目文件设置 *********************************/
/***********************************************************************/
[1.3] 项目路径替换[Cr]:
setPath old (在这一行按F5, 开始替换)
setPath new (在这一行按F5, 开始替换, 路径为 projects\...)
	
#### set project path auto replace start ####
/*
项目路径: (合并到以下替换内容)
//设置项 用双斜杠
CurProPath = projects\\M107\\M107_XYZN_S2_4A_WESTERN_F2

默认路径转换: 
//不用的设置项 可以注释掉
//正反斜杠都可以替换
//第2个路径会加上(CurProPath)
//部分行，行尾加空格，防止整个替换会带缩进
setProPath plutommi\\Customer\\Audio\\M107\\M107_XYZN_S2_4A_WESTERN_F2 = AUDIO\\PLUTO
setProPath plutommi\\Customer\\Images\\M107\\M107_XYZN_S2_4A_WESTERN_F2 = Images
#setProPath plutommi\\Customer\\CustResource\\M107_MMI\\M107_XYZN_S2_4A_WESTERN_F2 = Resource
setProPath plutommi\\Customer\\CustResource\\M107_MMI\\MMI_features_switchM107_XYZN_S2_4A_WESTERN_F2.h = Resource\\MMI_features_switchPLUTO.h
#setProPath plutommi\\Customer\\CustResource\\M107_MMI\\ref_list_M107_XYZN_S2_4A_WESTERN_F2.txt = Resource\\ref_list.txt
setProPath plutommi\\Customer\\CustResource\\M107_MMI\\ref_list_M107_XYZN_S2_4A_WESTERN_F2.txt = Resource\\ref_list.txt

setProPath plutommi\\Customer\\CustResource\\M107_MMI\\M107_XYZN_S2_4A_WESTERN_F2\\Themecomponents.h = Resource\\Themecomponents.h
setProPath plutommi\\Customer\\CustResource\\M107_MMI\\M107_XYZN_S2_4A_WESTERN_F2\\ThemeRes.c = Resource\\ThemeRes.c

setProPath make\\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak = M107_XYZN_S2_4A_WESTERN_F2_gprs.mak
setProPath make\\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld = Verno_M107_XYZN_S2_4A_WESTERN_F2.bld
*/
#### set project path auto replace end ####

/***********************************************************************/
/**************************** 修改记录 *********************************/
/***********************************************************************/


[2.1] 菜单[m]:

	主菜单:
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M107_2403_VGOTEL__
	主菜单 顺序:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="IDLE_SCREEN_MENU_ID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M107_V2408_VGOTEL__
	新加主菜单:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <SCREEN > ...
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
	 
	 菜单图标:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <IMAGE^id="MAIN_MENU_MATRIX_FMRDO_ICON"
	 二级菜单字符:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <STRING^id="MAIN_MENU_SETTINGS_TEXT"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM^id="MAIN_MENU _FMRDO_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID" str="MAIN_MENU_SETTINGS_TEXT"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_MULTIMEDIA_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_ORGANIZER_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_TOOLS_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID"
	设置--手机设置:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU9102_INITIAL_SETUP"
plutommi\mmi\gpio\gpiores\PhnsetGpio.res <MENU^id^=^"MENU_ID_PHNSET_GPIO_SETTING"
	设置--私有设置:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res <MENU^id="MENU_ID_SECSET_MAIN_MENU"
	设置--显示设置:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU_IDLE_SCR_DISP"
	设置--蓝牙:
plutommi\MtkApp\Connectivity\ConnectivityRes\ConnectivityMainmenu.res <MENU^id^=^"MENU_ID_CONNECTIVITY"
	情景模式:
plutommi\mmi\PROFILES\Profiles_Res\Profiles.res <MENU^id^=^"MAIN_MENU_PROFILES_MENUID"

	文件管理:
plutommi\MtkApp\FileMgr\FileMgrRes\000_FileMgr.res <MENUITEM^id="MENU_ID_FMGR_DRIVE_FORMAT"
	短信:
plutommi\mmi\Messages\MessagesRes\SmsAppRes.res <MENU^id="MAIN_MENU_MESSAGES_MENUID"
	
//	模拟器--菜单--调试：
Save:node\C\study\Macro_modis_MTK.h	 \[2.5\] 菜单


----------------------------------------------------------------------------

资源: 图片 铃声 字符串 字库
//	modis: 资源
Save:node\C\study\Macro_modis_MTK.h	 \[4.7\] 资源
[2.2] 图片[r]
	资源路径:
//	old code：
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h #define^CUST_IMG_PATH
//	new code：
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h #define^CUST_IMG_PATH
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h #define^CUST_ADO_PATH

	资源子路径:
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h #define^IMG_MAINMENU_SUB_DIR
plutommi\Customer\CustResource\M107_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_menu_bkg_filler_defaultTheme
plutommi\Customer\CustResource\M107_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_matrix_main_menu_highlight_image_defaultTheme
plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR 添加完整路径

	资源子路径 临时文件(原图不存在, 资源不生成):
plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
plutommi\Customer\CustResource\CustImgDataRes_2.c

	主菜单图片:
RAR: projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images image.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\MainMenu\SLIM_MATRIX
	主菜单格式:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res MM_ST
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_RES_TYPE_MAINMENU_MATRIX_SEL

	List:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2
plutommi\mmi\Setting\SettingRes\Wallpaper.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 壁纸位置不是这里
	list 标号:
plutommi\Customer\Images\M107\M107_S2401_GRAVITY_ULTRA_F1\MainLCD\SubMenu\ListMenuIcon\L_NB30.bmp

	壁纸
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\Phonebook\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\Wallpaper
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR

	开关机Logo:(仅KM这套代码)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\Active\poweronoff\logo.BMP

	开关机动画:与铃声同步问题 建议开机动画时间相比减0.5s 关机动画时间减2s
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\Active\Poweronoff
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h POWERONOFF_USE_SAME_IMAGE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_POWER_ONOFF_SAME_LOGO
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif
~ 
~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR 设置logo背景色
	关机充电动画
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\Customer\Images\M107\M107_S2401_GRAVITY_ULTRA_F1\MainLCD\UIELEMENT\charger\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\UIELEMENT\charger\
	

	图片资源大小:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\images_file_list.ini
plutommi\Customer\ResGenerator\debug\image_info_updated_all.txt POON 大小

	屏保:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h  #define^CFG_MMI_SCREEN_SAVER


----------------------------------------------------------------------------

[2.3] 铃声:
	铃声文件:
//	情景默认等级:
custom\common\userprofile_nvram_def.c SBD_POWER_ONOFF_RING_SAME
RAR: projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO audio.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\UserProfiles\Tone\R_POWER_1.mp3
	铃声资源大小:
plutommi\Customer\ResGenerator\debug\audio_resource_usage.txt
	开关机铃声:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res R_POWER_1.mp3
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 定义
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ProfilesSrv.res AUD_ID_PROF_TONE1
	来电铃声:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ProfilesSrv.res AUD_ID_PROF_RING1
	资源路径
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h #define^CUST_IMG_PATH
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h #define^CUST_IMG_PATH
	
	
----------------------------------------------------------------------------
[2.4] 字符串:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ref_list.txt 
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\mmi\Inc\mmi_res_range_def.h RESOURCE_BASE_TABLE_ITEM_PATH( , ".\\mmi\\...\\Res\\")

	字符串定义:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak REF_LIST_BRANCH = M107
make\Resgen.mak REFLIST_LIST += ref_list_
	字符串工具:
open:plutommi\Customer\STMTView.exe


[2.5] 字库文件:
plutommi\Customer\CustResource\FontRes.c
vendor\font\FontData\OfficialFont\Farsi\Farsi14.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\Bengali\Russian_18.bdf
	俄文: 2.4屏用Russian_18,20号字;其他:dotum24太大;arial_ru_20缺字符;Cyrillic_20不熟悉;
vendor\font\FontData\OfficialFont\Bengali\
vendor\font\FontData\OfficialFont\Dialing\L_MTK_DiallingFont_27.bdf
	字库:
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd240X320\L_MTK_Arabic_vk_9.h
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd128X160\L_1_Pluto_Small.h
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_RUSSIAN__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_BENGALI__
	输入法:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h  CFG_MMI_CSTAR_MULTITAP
//	参考: 制作字库
https://wenku.baidu.com/view/ea58850bf78a6529647d53a1.html


----------------------------------------------------------------------------
[3.1] 设置[s]:
//	modis: 设置
Save:node\C\study\Macro_modis_MTK.h	 \[2.9\] setting

//	modis: 手电筒:
Save:node\C\study\Macro_modis_MTK.h	 setting:torch
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_ELECTRIC_TORCH__			手电筒

//	modis: 充电宝:
Save:node\C\study\Macro_modis_MTK.h	 setting:charging
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __SBD_CHARGING_TREASURE_SWITCH__ 充电宝
//	充电宝图标
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\StatusIcons\SI_CHARGING.png

//	EZFM:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_EASY_FM__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_FM_RADIO_BIND_EARPHONE


//	按键配置:
open:custom\drv\Drv_Tool\DrvGen.exe
custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M103_KM_2401_VGOTEL_F2.dws	 -- GPIO 口 按键配置
//	按键定义:
custom\common\custom_fm.c mmi_fm_key_info_struct^g_fm_keypad_table


//	蓝牙名称:
custom\common\PLUTO_MMI\nvram_common_config.c #define^BT_NAME
//	USB 链接名称:
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c USB_PRODUCT_STRING


[3.2] 语言, 默认语言:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_LANG_
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_LANG_.*(__ON__)
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res NVRAM_SETTING_LANG
	默认输入法:
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res NVRAM_SETTING_PREFER_INPUT_METHOD
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res RESTORE_PREFER_INPUT_METHOD
plutommi\Framework\InputMethod\Inc\ImeGprotEnums.h mmi_imm_input_mode_enum 参考这个枚举, 注意错位2个
	按键字符定义, 输入法丝印:
vendor/InputMethod/mtk/mtkmultitap.c g_multitap_pashto
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_urdu
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_fr
	孟拉加组合字--Cstar:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_MULTITAP_BANGLA_SPEC
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_CSTAR_MULTITAP
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_MULTIGRAPH_SUPPORT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_IRE_SLIM	关闭, # 1键部分字符组合
plutommi\Framework\IndicLanguages\IndicLanguagesSrc\Bengali.c


	时间:
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res TIME_FORMAT
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res DATE_FORMAT
	系统时间:
custom/drv/misc_drv/_Default_BB/MT6261/custom_hw_default.c DEFAULT_HARDWARE_YEAR

	亮度:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
	闪光灯:
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h CAMERA_DEFAULT_SETTING_FLASH
	按键灯等级:
plutommi\Service\Inc gpiosrvgprot	
	自动更新:
plutommi\Service\NITZSrv\res\NITZSrv.res NVRAM_SETTING_AUTOUPDATE_DT_TIME_STATUS 
plutommi\mmi\Setting\SettingRes\PhoneSetting.res NVRAM_AUTOUPDATE_DT_STATUS ??不清楚用途
	默认城市/时区
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res id="CURRENT_CITY"
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res <STRING^id="STR_WCLOCK_CITY78"/>
plutommi\Customer\CustResource\PLUTO_MMI\resource_world_clock_city.c TimeZoneData 新加时区
//  Lima – Peru   GMT-5
//	{-5, 		STR_WCLOCK_Lima,		STR_WCLOCK_CITY_ABBRE10,63, 98, 1},
	
//	modis: 设置日期时间
Save:node\C\study\Macro_modis_MTK.h	 setting:datetime
	背光时间:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_HFTIME
	锁屏时间:
plutommi/mmi/ScrLocker/ScrLockerRes/ScrLocker.res <MENU^id="MENU_ID_SLK_TIME_SETTING_MENU"
plutommi/mmi/ScrLocker/ScrLockerSrc/ScrLockerSetting.c #define^MMI_SLK_SET_SELECTION_DEFAULT


	手机追踪:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res mmi_rp_app_mobile_tracker_def.h
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res MENU_ID_MOBILE_TRACKER
plutommi\mmi\Inc\ProcedureConfig.h KM_MMI_FRM_PROC_ID_MOBILE_TRACKER
	
			
[3.3] 指令:
plutommi/AppCore/SSC/SSCPassEngine.c mmi_show_sar_info			SAR
plutommi/AppCore/SSC/SSCPassEngine.c SSCHandleIMEI		IMEI
plutommi/AppCore/SSC/SSCPassEngine.c hw_info_show			LCD+CAM信息
plutommi/AppCore/SSC/SSCOperate.c mmi_ssc_send_imei_get_ilm
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\CustResDefPLUTO.h SSC_ENGINEERING_MODE
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h SSC_ENGINEERING_MODE
// 恢复出厂设置指令:
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_EF_PHONE_LOCK_DEFAULT
// 手机密码:
custom\common\hal\nvram\nvram_cust_pack.c COMMON_NVRAM_EF_MS_SECURITY_DEFAULT



//	modis: 恢复出厂设置
Save:node\C\study\Macro_modis_MTK.h	 setting:Restore


[3.4] 情景模式 音频参数:
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio.c
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio_M107_XYZN_S2_4A_WESTERN_F2.h
GAIN_HND_SPH_VOL0  音频参数 免提音 
GAIN_NOR_SPH_VOL0	正常音

NVRAM_PROFILES_ACTIVATED 情景模式默认NV	
//	K类: K类设置不同可能开不了机
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CLASSK_CHARGEPUMP_SUPPORT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_EXTERNAL_AMPLIFIER_CLASSK
	
//	省电模式:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __MMI_SUPER_BATTERY__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_MMI_PROFILE_RETRENCH__
//	情景默认等级:
custom\common\userprofile_nvram_def.c NVRAM_PROFILES_DEFAULT
custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h
//		mt_call_tone[ 4 ]:这个应该是来电

//	耳机+外放音量等级:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_NORMAL_MODE_VOICE_LEVEL //听筒
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_HDSET_MODE_VOICE_LEVEL  //耳机
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_LDSPK_MODE_VOICE_LEVEL  //外放


----------------------------------------------------------------------------

[3.5] GUI[g]: 状态条 电量百分比
	
//	modis: 弹窗
Save:node\C\study\Macro_modis_MTK.h	 \[4.1\] 弹窗

//	modis: title
Save:node\C\study\Macro_modis_MTK.h	 \[4.2\] title

//	modis: 电量
Save:node\C\study\Macro_modis_MTK.h	 \[4.3\] 电量

//	modis: 状态条
Save:node\C\study\Macro_modis_MTK.h	 \[4.4\] 状态条

//	modis: 时间状态条
Save:node\C\study\Macro_modis_MTK.h	 \[4.5\] 时间状态条
	时间状态条:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_UI_CLOCK_SMAILL_DIGITAL_IMAGE_CLOCK
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_WGUI_STATUS_ICON_SHOW_TIME_IN_RIGHT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\MainLCD\IdleScreen\Techno\SmallClock\0030.bmp
	
//	modis: softkey
Save:node\C\study\Macro_modis_MTK.h	 \[4.6\] softkey

//	modis: 铃声
Save:node\C\study\Macro_modis_MTK.h	 \[4.7\] 铃声

----------------------------------------------------------------------------
[4.1] Idle[I]: Lock Dial Theme

//	modis: 界面入口/位置
Save:node\C\study\Macro_modis_MTK.h	 \[2.4\] 界面入口/位置

//	modis: Idle
Save:node\C\study\Macro_modis_MTK.h	 \[2.2\] Idle

//	Idle:ShortCut
Save:node\C\study\Macro_modis_MTK.h	 Idle:ShortCut
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_DEDICATED_KEY_SHORTCUTS

//	modis: Lock
Save:node\C\study\Macro_modis_MTK.h	 \[2.10\] Lock

//	modis: 测试模式
Save:node\C\study\Macro_modis_MTK.h	 \[2.8\] 测试模式

//	modis: 手电筒
Save:node\C\study\Macro_modis_MTK.h	 \[2.9\] 手电筒
	
//	modis: 拨号
Save:node\C\study\Macro_modis_MTK.h   \[2.6\] dialer

//	modis: 主题
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h 
plutommi\Customer\CustResource\Themecomponents.h
//	弹窗背景:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h UI_filled_area^popup_screen_bg_filler_defaultTheme
//	日期高亮背景色:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h #define^img_menuitem_single_line_highlight_filler_color


----------------------------------------------------------------------------
[4.2] 联系人[p]: 短信
//	modis: 联系人
Save:node\C\study\Macro_modis_MTK.h	 \[2.1\] 联系人
//	联系人切换用tab+icon
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_UI_IN_TABS
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_CALLER_GROUP
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_TAB_BARS_SUPPORT
//	群组功能:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_UI_IN_TABS
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_CALLER_GROUP
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_CONTACT_SLIM
//	多选---会死机:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_MULTI_OPERATION
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_PHB_GENERIC_MULTI_SELECT
//	联系人条数:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PHB_PHONE_ENTRY
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PHB_SIM_ENTRY
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PHB_LN_ENTRY # 10 20 50

//	modis: 短信
Save:node\C\study\Macro_modis_MTK.h	 \[2.11\] 短信
//	短信-短语-翻译:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_SMS_TEMPLATE_SPANISH
	
//	modis: 通话记录
Save:node\C\study\Macro_modis_MTK.h	 \[2.12\] 通话记录

//	modis: SCREENSAVER
Save:node\C\study\Macro_modis_MTK.h	 \[2.14\] SCREENSAVER

----------------------------------------------------------------------------
[4.3] 多媒体[u]:
//	modis: 多媒体
Save:node\C\study\Macro_modis_MTK.h	 \[2.13\] 多媒体

	Camera分辨率:
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^__CAMERA_FEATURE_IMAGE_SIZE_M__ //320X240
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^__CAMERA_FEATURE_IMAGE_SIZE_S__ //160X128
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^__CAMERA_FEATURE_IMAGE_SIZE_SS__ //240X320
plutommi\mmi\Inc\MMI_features_camera.h 临时文件, 改这个没用
	Camera闪光灯:
plutommi/Customer/CustResource/PLUTO_MMI/MMI_features_camera.h #define^CAMERA_DEFAULT_SETTING_FLASH

	Image:
plutommi\MtkApp\ImageView\ImageViewRes\imgview.res
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h USE_SW_PNG_DECODER
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak PNG_DECODE	开了会报几个错误, PNG打不开

	FM:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak FM_RADIO_RECORD
	EZFM:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_EZFM_SUPPORT EASY_FM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_FM_RADIO_BIND_EARPHONE
//	FM 天线:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak INTERNAL_ANTENNAL_SUPPORT


----------------------------------------------------------------------------
[4.4] 浏览器[w]: 网络参数
//	modis: Browser
Save:node\C\study\Macro_modis_MTK.h	 \[2.7\] Browser
//	开启浏览器:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BROWSER_SUPPORT = OBIGO_Q03C_SLIM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak OBIGO_FEATURE = WAP2_SEC_HTTP_ONLY
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak XYSSL_SUPPORT = TRUE
//	设置主页为百度:
custom\common\PLUTO_MMI\nvram_common_custpack.c nvram_wap_bookmark_list_struct
//	网络参数:
custom\common\custom_config_account.c CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 定义
custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h


[4.5] 文件管理
//	文件管理 精简:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_SLIM_FILE_MANAGER
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_ULTRA_SLIM_FILE_MANAGER
//	文件管理 详情opt:
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c MENU_ID_FMGR_CARD_DETAIL SRV_FMGR_DRV_CARD_TYPE
//	文件管理 格式化:
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c fmgr_main_drive_action_hdlr(void)
plutommi\Service\FileMgrSrv\FileMgrSrvStorage.c srv_fmgr_drv_init(void)
	

----------------------------------------------------------------------------

[4.6] 工具[t]:单位转换 游戏 闹钟 日历 魔音
//	modis: 工具
Save:node\C\study\Macro_modis_MTK.h	 \[2.15\] 工具

//	tool:单位转换:
Save:node\C\study\Macro_modis_MTK.h tool:cconv
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __MMI_CURRENCY_CONVERTER__

//	tool:游戏:
Save:node\C\study\Macro_modis_MTK.h tool:games

//	tool:计算器: 
Save:node\C\study\Macro_modis_MTK.h tool:calculator
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CALC CFG_MMI_CALCULATOR CFG_MMI_CAL_SLIM

//	tool:蓝牙:
Save:node\C\study\Macro_modis_MTK.h tool:bluetooth
//	关闭蓝牙:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BLUETOOTH_SUPPORT = NONE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_HFG_PROFILE = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_OPP_PROFILE = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_AUDIO_VIA_SCO = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_FM_RADIO_VIA_SCO = FALSE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BLUETOOTH_VERSION = NONE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak BT_DISABLE_SSP_SUPPORT = FALSE

//	tool:闹钟: 
Save:node\C\study\Macro_modis_MTK.h tool:Alarm
//	闹钟 祈祷闹钟
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CALC CFG_MMI_ALARM_SLIM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_AZAAN_ALARM
	祈祷闹钟铃声: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\UserProfiles\Ring\Allah.O.Akber.mp3 没有
	祈祷闹钟资源关闭SLIM: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_ALARM_SLIM
	祈祷闹钟AMPM: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak __KM_AZAAN_ALARM_ADD_AMPM__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_TIME_SETTING_AM_PM_SUPPORT

//	tool:魔音:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak VOICE_CHANGER_SUPPORT
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak SBD_CUSTOMER_NLIVE_ADD_MAGIC_VOICE


//	tool:日历  , 伊斯兰日历: 
Save:node\C\study\Macro_modis_MTK.h tool:calendar
Save:node\C\study\Macro_modis_MTK.h tool:hijriCalendar
//	日历开宏: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_CALENDAR
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h __MMI_CALENDAR_EVENT__ (不开)
plutommi\Framework\GUI\GUI_INC\gui_calendar.h __MMI_CALENDAR_TITLE__
//	伊斯兰开宏: 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h CFG_MMI_HIJRI_CALENDAR


//	tool:关闭MRE
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak MRE_PACKAGE = SLIM
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak MRE_CONTENT_NUMBER = 0
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __MRE_CUST_MEM_SIZE__=1
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __CUSTOM_MRE_MAX_SIZE__=0
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __DISABLE_SANDBOX_LIB__
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOM_OPTION     +=  __MRE_BGMEM_SIZE__=0

// wifi 宏总(不关模拟器编不过)
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak CUSTOMER_APPLICATION


----------------------------------------------------------------------------
[5.1] 扩展项目:
//ctrl+C自动添加新文件, 旧项目->新项目
//新项目设置:
newPro = M107_XYZN_S2_4A_WESTERN_F2

扩展项目[e]:

custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M107_XYZN_S2_4A_WESTERN_F2.dws
custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h
custom\common\config_account_M107_XYZN_S2_4A_WESTERN_F2.h
custom\common\userprofile_nvram_def_M107_XYZN_S2_4A_WESTERN_F2.h
custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h
custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M107_XYZN_S2_4A_WESTERN_F2.h
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\M107_XYZN_S2_4A_WESTERN_F2_gprs.mak 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Verno_M107_XYZN_S2_4A_WESTERN_F2.bld 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\AUDIO\PLUTO\audio.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Images\image.zip
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\MMI_features_switchPLUTO.h 
plutommi\Customer\CustResource\M107_MMI\M107_XYZN_S2_4A_WESTERN_F2\
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ThemeRes.c 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\Themecomponents.h 
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\ref_list.txt 
plutommi\Customer\CustResource\M107_MMI\CustResDefM107.h
plutommi\Customer\CustResource\M107_MMI\CustMiscDataM107.c
CUSTOMER_NAME_M107_XYZN_S2_4A_WESTERN_F2 其他相关



----------------------------------------------------------------------------

错误查找命令:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
没装cygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

// open aaaa:
cmd: F:&&cd build\M107_XYZN_S2_4A_WESTERN_F2\log&&findstr /s /i "ERROR" *.log>aaaa.txt&&start aaaa.txt
// open aaaa:
build\M107_XYZN_S2_4A_WESTERN_F2\log\aaaa.txt Error:
// open cmd:
cmd: cmd

----------------------------------------------------------------------------


[5.2] Build问题[Cb][b]:

build\M107_XYZN_S2_4A_WESTERN_F2\build.log cleanlib 				编译时间
build\M107_XYZN_S2_4A_WESTERN_F2\MT6261.log Finished: 			链接问题看这个
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmiresource.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_framework.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_app.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\custom.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_service.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\mmi_check.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_mtk_resgenerator_make.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_xml_parse.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\conn_app.log Error:

build\M107_XYZN_S2_4A_WESTERN_F2\MMI_DRV_DEFS.mak  				查看宏是否存在
build\M107_XYZN_S2_4A_WESTERN_F2\log\info.log  					查看宏是否存在
build\M107_XYZN_S2_4A_WESTERN_F2\log\drv_features_option.log  	查看宏是否存在
build\M107_XYZN_S2_4A_WESTERN_F2\log\MMI_features.log  			查看宏是否存在

build\M107_XYZN_S2_4A_WESTERN_F2\log\vivaConfig.log Error:     #RAM超 把0x003B6000改小
//#define NOR_BOOTING_NOR_FS_BASE_ADDRESS   0x003B4000  //<-  0x003B6000
//#define NOR_BOOTING_NOR_FS_SIZE 0x00048000  //<-  0x0004A000

build\M107_XYZN_S2_4A_WESTERN_F2\log\ckSysDrv.log Cluster^Size^(Bytes) 	看剩余空间，nv大小
//Cluster Size (Bytes)                                    512
//Free Space (Clusters)                                   400   #不够可以减小 SECTORS(8*N)
//Folders and Applications Requirement (Clusters)         405	#超了减少起始地址, 同上----14K

build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_mtk_resgenerator_make.log		res添加头文件
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_xml_preprocess.log Error:
build\M107_XYZN_S2_4A_WESTERN_F2\log\FileSystemConfig.log  Error:^Shortage
build\M107_XYZN_S2_4A_WESTERN_F2\log\ckImgSize.log Error: $The^Boundary^of^VIVA  查看ROM空间
//The Boundary of VIVA bin				 = 3883008	bytes		#可以修改单位 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!

build\M107_XYZN_S2_4A_WESTERN_F2\gprs\MT6261r\pregen_dep\emigen.det
build\M107_XYZN_S2_4A_WESTERN_F2\log\resgen_mtk_resgenerator_make.log Error:


//ADDRESS:
projects\M107\M107_XYZN_S2_4A_WESTERN_F2\Resource\custom_MemoryDevice.h NOR_BOOTING_NOR_FS_BASE_ADDRESS




[Cg]



