/***********************************************************************/
/*************************** ˵�������� ********************************/
/***********************************************************************/

��ݼ�[Ca]:
F11:��/�رձʼ�
F2: ��ѡ���·��/�ļ�; �ļ���+��չ��
F5: ��sln�ļ�/cmd����+�Ҽ�ճ��; ��ǰ����set��cmd��make/ctmake/xmake��open��vc��vs08��ͷ; Ĭ�ϴ��ļ�+�ؼ���(��)


--------------------------------------------------

Ĭ����Ŀ(�����ϴ�svn) [Cs]:
set M101_COOLCEL_CS181_M_BRAVIS_F3 M101_COOLCEL gsm
	
��ǰ��Ŀ:
sethistory
set M101_C1_F184_M_ergo_F3 M101_COOLCEL gsm
	
set M105_MLT_S2401_GTOUCH_F4 M105_MLT gprs
set M105_MLT_S2401_GRAVITY_ULTRA_F1 M105_MLT gprs
set M105_JX_S1716_A_VOLKSCOMM_F4 M105_MLT gprs

set M103_KEMAN_2401_VGOTEL_F2 M103_KEMAN gprs
set M103_KM_V2408_VGOTEL_I10_F2 M103_KEMAN gprs

set M105_XYZN_S1_C3_NEDADJ_F6 M105 gprs
set M107_XYZN_S2_4A_NEDADJ_F6 M107 gprs
set M106_DC_P2401_F6 M106 gprs


����projectsĿ¼:	
setPath old (����һ�а�F5, ��ʼ�滻)
setPath new (����һ�а�F5, ��ʼ�滻, ·��Ϊ projects\...)


setEnd:��setEnd�п�ʼ�滻����(��һ��ѡ��->��ǰѡ��); �Կո�ֿ�; ��Ҫֱ���滻(M105<->M105_MLT ��ʱδ�ж�)

/***********************************************************************/
/*************************** ���������� ********************************/
/***********************************************************************/

MTK����ָ��[Cc]:
cmd:F:\11CW1352MP\11CW1352MP\cmd
open:cd F:


����1:
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs new

����2:
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\New_common.bat


����ģ��
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs r
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs remake
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs remake custom
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs remake plutommi

������Դ (VS���ű��뼴��)
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs Resgen


ģ����: (��mk���ر�)
make M105_JX_S1716_A_VOLKSCOMM_F4 gprs gen_modis
vs08:MoDIS_VC9\MoDIS.sln

--------------------------------------------------


���ع���[Ct]
  FlashTool_v5.1528.00
open:D:\Desktop\����\FlashTool_v5.1548.00\Flash_tool_Beta.exe
1 Scatter/config File, ѡ��
build\M105_JX_S1716_A_VOLKSCOMM_F4\M105_MLT_CS181_M_BRAVIS_F3_PCB01_gprs_MT6261_S00.M105_JX_S1716_A_VOLKSCOMM_F4_V06_20180915.bin\FARSIGHTED61M_CN_11C_BB.cfg
2  ѡ��
    option->usb Download/Readback
    option->usb Download Without battery
    option->Format Fat(auto)->Format Fat
3 Format Fat�������У׼������IMEI��


�ַ�������:
open:plutommi\Customer\STMTView.exe


/***********************************************************************/
/************************ Make�������� *******************************/
/***********************************************************************/

Make ��������[Cf]:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CUSTOMER_NAME = M105_MLT
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak MAIN_LCD_SIZE
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak _COMBO_LCM = ST7735S GC9106	  ������
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak SYNC_LCM_SUPPORT 			  ������ TE��
//make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak 2_DATA_LANE_LCM 		  �� ����/����
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak DUAL_CAMERA_SUPPORT 	  		  ����ͷ����
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CMOS_SENSOR GC6133_SERIAL	  ����ͷ����
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CMOS_SENSOR_BAK1 SP0821_SERIAL ����ͷ����
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak FLASHLIGHT_TYPE				  �����
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CUSTOM_OPTION 			  	  �Զ����


Make �����:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak REF_LIST_BRANCH  ����
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CUSTOM_DEVICE
custom/system/FARSIGHTED61M_CN_11C_BB/custom_MemoryDevice_M105_JX_S1716_A_VOLKSCOMM_F4.h __MMI_SUPER_BATTERY__



features:
plutommi/mmi/Inc/MMI_features.h __MMI_UI_HINTS_IN_MENUITEM__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_DYNAMIC_SIM_DYNAMIC_UI
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h WHITELIST
	


�汾��[Cv]:
make\Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld BUILD_DATE �汾�ļ�



/***********************************************************************/
/************************ ��Ŀ�ļ����� *********************************/
/***********************************************************************/
��Ŀ·���滻[Cr]:
setPath old (����һ�а�F5, ��ʼ�滻)
setPath new (����һ�а�F5, ��ʼ�滻, ·��Ϊ projects\...)
	
#### set project path auto replace start ####
/*
��Ŀ·��: (�ϲ��������滻����)
//������ ��˫б��
CurProPath = projects\\M105_MLT\\M105_JX_S1716_A_VOLKSCOMM_F4

Ĭ��·��ת��: 
//���õ������� ����ע�͵�
//����б�ܶ������滻
//��2��·�������(CurProPath)
//�����У���β�ӿո񣬷�ֹ�����滻�������
setProPath plutommi\\Customer\\Audio\\M105_MLT\\M105_JX_S1716_A_VOLKSCOMM_F4 = AUDIO\\PLUTO
setProPath plutommi\\Customer\\Images\\M105_MLT\\M105_JX_S1716_A_VOLKSCOMM_F4 = Images
#setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\M105_JX_S1716_A_VOLKSCOMM_F4 = Resource
setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h = Resource\\MMI_features_switchPLUTO.h
#setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt = Resource\\ref_list.txt
setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt = Resource\\ref_list.txt

setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\M105_JX_S1716_A_VOLKSCOMM_F4\\Themecomponents.h = Resource\\Themecomponents.h
setProPath plutommi\\Customer\\CustResource\\M105_MLT_MMI\\M105_JX_S1716_A_VOLKSCOMM_F4\\ThemeRes.c = Resource\\ThemeRes.c

setProPath make\\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak = M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak
setProPath make\\Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld = Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld
*/
#### set project path auto replace end ####

/***********************************************************************/
/**************************** �޸ļ�¼ *********************************/
/**** ���沿��ע�͵�,   ������Կ�; ***************************************/
/**** �ϴ�ʱ��ע��,����Ա� ********************************************/
/***********************************************************************/

//*
�˵�[m]:
plutommi\Framework\EventHandling\EventsInc\mmi_menu_handlers.h MENU_SETTING_DEDICATED_KEYS
MCT_TOOL\Resource\OutTreeStructure.txt MAIN_MENU


	���˵�:
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M105_MLT_2403_VGOTEL__
	���˵� ˳��:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="IDLE_SCREEN_MENU_ID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res __M105_MLT_V2408_VGOTEL__
	�¼����˵�:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <SCREEN > ...
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
	 
	 �˵�ͼ��:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MAINMENUITEM^id="MENU_ID_FMRDO_MAIN"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <IMAGE^id="MAIN_MENU_MATRIX_FMRDO_ICON"
	 �����˵��ַ�:
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <STRING^id="MAIN_MENU_SETTINGS_TEXT"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM^id="MAIN_MENU _FMRDO_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID" str="MAIN_MENU_SETTINGS_TEXT"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_MULTIMEDIA_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_ORGANIZER_MENUID"
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENU^id="MAIN_MENU_SETTINGS_MENUID"
	������ʾ����:
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU9102_INITIAL_SETUP"
plutommi\mmi\Setting\SettingRes\PhoneSetting.res <MENU^id^=^"MENU_IDLE_SCR_DISP"
	��������:
plutommi\MtkApp\Connectivity\ConnectivityRes\ConnectivityMainmenu.res <MENU^id^=^"MENU_ID_CONNECTIVITY"
	�龰ģʽ:
plutommi\mmi\PROFILES\Profiles_Res\Profiles.res <MENU^id^=^"MAIN_MENU_PROFILES_MENUID"

	�ļ�����:
plutommi\MtkApp\FileMgr\FileMgrRes\000_FileMgr.res <MENUITEM^id="MENU_ID_FMGR_DRIVE_FORMAT"
	����:
plutommi\mmi\Messages\MessagesRes\SmsAppRes.res <MENU^id="MAIN_MENU_MESSAGES_MENUID"

	�Ӳ˵�:
//<MENU ID2/>
//<MENU ID1>
//	<MENUITEM_ID ID2/>
//<MENU/>
	�Ӳ˵�:
	
plutommi\Customer\CustomerInc\screen_enum.h SCR_ID_IDLE_SIM_SPACE_SETTING



----------------------------------------------------------------------------

��Դ[r]: ͼƬ ���� �ֿ�
	��Դ·��:
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h #define^CUST_IMG_PATH
	��Դ��·��:
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h #define^IMG_MAINMENU_SUB_DIR
plutommi\Customer\CustResource\M105_MLT_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_menu_bkg_filler_defaultTheme
plutommi\Customer\CustResource\M105_MLT_MMI\2401_VGOTEL_F2\Themecomponents.h #define^img_matrix_main_menu_highlight_image_defaultTheme
plutommi\mmi\Resource\PopulateRes.c IMG_MAINMENU_SUB_DIR
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res IMG_MAINMENU_SUB_DIR ��������·��
	��Դ��·�� ��ʱ�ļ�(ԭͼ������, ��Դ������):
plutommi\Customer\CustResource\CustImgDataHWExt.h MM_BG _PNG_
plutommi\Customer\CustResource\CustImgResExt.c mtk_nCustImageNamesEXT
plutommi\Customer\CustResource\CustImgDataRes_2.c

	���˵�ͼƬ:
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4/ image.zip
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\MainMenu\SLIM_MATRIX

	List:
plutommi\mmi\MainMenu\MainMenuRes\MainMenuRes.res CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4
plutommi\mmi\Setting\SettingRes\Wallpaper.res CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 ��ֽλ�ò�������
	list ���:
plutommi\Customer\Images\M105_MLT\M101_COOLCEL_S2401_GRAVITY_ULTRA_F1\MainLCD\SubMenu\ListMenuIcon\L_NB30.bmp

	��ֽ
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\IdleScreen\Wallpaper
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
plutommi\mmi\Inc\MMI_features.h __MMI_RES_TYPE_WALLPAPER_SEL__
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c WALL01."__MMI_RES_TYPE_WALLPAPER__ "
plutommi\mmi\Setting\SettingSrc\Wallpaper.c wp_item_amount ^=
plutommi\Customer\CustomerInc\CustResDef.h IMG_WALLPAPER_SUB_DIR

	���ػ�Logo:(��KM���״���)
plutommi\mmi\Resource\PopulateRes.c LOGO_FILE_NAME
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\Active\poweronoff\logo.BMP

	���ػ�����:������ͬ������ ���鿪������ʱ����ȼ�0.5s �ػ�����ʱ���2s
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\Active\Poweronoff
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_KM_POWERONOFF_USE_SAME_IMAGE
plutommi\Customer\CustResource\PLUTO_MMI\Res_MMI\Res_PhoneSetting.c POON.gif
~ 
~ lcd_sw_rnd DRV_MAINLCD_INIT_COLOR ����logo����ɫ
	�ػ���綯��
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res IMG_ID_CHARGER_CHARGING
plutommi\Customer\Images\M105_MLT\M101_COOLCEL_S2401_GRAVITY_ULTRA_F1\MainLCD\UIELEMENT\charger\
	

	���ػ������Ƴ���ֽ:
plutommi/mmi/Setting/SettingInc/PhoneSetupResList.h #define^MAX_POWER_ON_IMG 

	ͼƬ��Դ��С:
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\images_file_list.ini
plutommi\Customer\ResGenerator\debug\image_info_updated_all.txt MM_MP3 ��С

----------------------------
	�ַ���:
plutommi\Customer\CustResource\M105_MLT_MMI\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt 
plutommi\Customer\ResGenerator\debug\string_resource_usage.txt
	�ַ�������:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak REF_LIST_BRANCH = M105_MLT
make\Resgen.mak REFLIST_LIST += ref_list_
	�ַ�������:
open:plutommi\Customer\STMTView.exe




����[k]:�ֿ�
	�����ļ�:
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4 
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\UserProfiles\Tone\R_POWER_1.mp3
	������Դ��С:
plutommi\Customer\ResGenerator\debug\audio_resource_usage.txt
	���ػ�����:
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res R_POWER_1.mp3
plutommi\Service\ProfilesSrv\ProfilesSrvRes\ProfilesSrv.res CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 ����
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\ProfilesSrv.res AUD_ID_PROF_TONE1
	��������:
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\ProfilesSrv.res AUD_ID_PROF_RING1
	��Դ·��
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h #define^CUST_IMG_PATH
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\CustResDefPLUTO.h #define^CUST_IMG_PATH
	


	�ֿ��ļ�:
plutommi\Customer\CustResource\FontRes.c
vendor\font\FontData\OfficialFont\Farsi\Farsi14.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_16.bdf
vendor\font\FontData\OfficialFont\RUSSIAN\Russian_18.bdf
	����: 2.4����Russian_18,20����;����:dotum24̫��;arial_ru_20ȱ�ַ�;Cyrillic_20����Ϥ;


	�ֿ�:
plutommi\Framework\GUI\GUI_SRC\gui_font_size.c GUI_FONT_SIZE_CALENDAR_TITLE
plutommi\Framework\Interface\FontRes.h SMALL_FONT
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd240X320\L_MTK_Arabic_vk_9.h
vendor\font\MTK\official\project\plutommi\content\inc\MainLcd128X160\L_1_Pluto_Small.h
vendor\font\MTK\official\project\plutommi\content\src\MainLcd128X160\res_gen_font.cpp __MMI_LANG_PERSIAN__
vendor\font\MTK\official\project\plutommi\content\src\MainLcd240X320\res_gen_font.cpp __MMI_LANG_RUSSIAN__



----------------------------------------------------------------------------
����[f]:
	
	�ֵ�Ͳ ��籦:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_ELECTRIC_TORCH__			�ֵ�Ͳ
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __SBD_CHARGING_TREASURE_SWITCH__ ��籦
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_electric_torch_switch 	�������ֵ�Ͳ
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_charging_switch			�����򿪳�籦
hal\peripheral\src\bmt_task_main.c bmt_chr_indication
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c mmi_popup_msg_charger_1
	����״̬ͼ��:
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\IdleScreen\StatusIcons\SI_CHARGING.png
plutommi\Framework\GUI\GUI_Res\Status_icon_bar.res IMG_SI_CHARGING
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c IMG_SI_CHARGING	˳��һ�� ����ΪNO_GROUP
plutommi\Framework\GUI\GUI_INC\gui_typedef.h STATUS_ICON_CHARGING		˳��һ��
plutommi\mmi\PROFILES\ProfilesSrc\ProfilesApp.c wgui_status_icon_bar_show_icon
plutommi\mmi\MainMenu\MainMenuSrc\MainMenu.c STATUS_ICON_CHARGING
	���ӷ���:
plutommi\mmi\MiscFramework\MiscFrameworkRes\ChargerApp.res STR_CHARGER_BANK_REMOVED
	������ѹ:
4��~4.1V   3��~3.91   2��~3.83   1��~3.75   ��~3.62   ��~3.52

	EZFM:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_EASY_FM__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_FM_RADIO_BIND_EARPHONE

	��������:
open:custom\drv\Drv_Tool\DrvGen.exe
custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M103_KM_2401_VGOTEL_F2.dws	 -- GPIO �� ��������
	��������:
custom\common\custom_fm.c mmi_fm_key_info_struct^g_fm_keypad_table


	�������:
custom\common\custom_config_account.c CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 ����
custom\common\config_account_M105_JX_S1716_A_VOLKSCOMM_F4.h


	��Ƶ����:
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio.c
custom\audio\FARSIGHTED61M_CN_11C_BB\nvram_default_audio_M105_JX_S1716_A_VOLKSCOMM_F4.h
GAIN_HND_SPH_VOL0  ��Ƶ���� ������ 
GAIN_NOR_SPH_VOL0   ������

NVRAM_PROFILES_ACTIVATED �龰ģʽĬ��NV	
	K��: K�����ò�ͬ���ܿ����˻�
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak CLASSK_CHARGEPUMP_SUPPORT
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak SBD_EXTERNAL_AMPLIFIER_CLASSK
	
	ʡ��ģʽ:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_MMI_PROFILE_RETRENCH__



----------------------------------------------------------------------------

����[s]:
custom\common\hal_public\lcd_sw_rnd.h DRV_MAINLCD_INIT_COLOR
	
plutommi\Framework\GUI\GUI_INC\gui_config.h
	����������
plutommi\Framework\GUI\GUI_INC\gui_switch.h #define^CFG_UI_SOFTKEY_WIDTH
plutommi\Framework\GUI\GUI_INC\gui_switch.h #define^CFG_UI_SCROLLBAR_WIDTH
	

custom\common\PLUTO_MMI\custom_mmi_default_value.h	--audio vol
	�龰Ĭ�ϵȼ�:
custom\common\userprofile_nvram_def.c NVRAM_PROFILES_DEFAULT
custom\common\userprofile_nvram_def_M105_JX_S1716_A_VOLKSCOMM_F4.h
//	voice_tone[4]:���Ӧ��������
	����+��������ȼ�:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_NORMAL_MODE_VOICE_LEVEL //��Ͳ (��������7��)
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_HDSET_MODE_VOICE_LEVEL  //����
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_LDSPK_MODE_VOICE_LEVEL  //���

	��������:
custom\common\PLUTO_MMI\nvram_common_config.c #define^BT_NAME
	USB ��������:
custom\drv\misc_drv\_Default_BB\MT6261\usb_custom.c USB_PRODUCT_STRING


	����:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_LANG_
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_LANG_.*(__ON__)
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res NVRAM_SETTING_LANG
	Ĭ�����뷨:
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res NVRAM_SETTING_PREFER_INPUT_METHOD
plutommi\Framework\CommonScreens\CommonScreensRes\editor.res RESTORE_PREFER_INPUT_METHOD
plutommi\Framework\InputMethod\Inc\ImeGprotEnums.h mmi_imm_input_mode_enum �ο����ö��, ע���λ2��

	ʱ��:
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res TIME_FORMAT
plutommi\Service\SettingSrv\res\GeneralSettingSrv.res DATE_FORMAT
	����:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
	�����:
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_camera.h CAMERA_DEFAULT_SETTING_FLASH
	�����Ƶȼ�:
plutommi\Service\Inc gpiosrvgprot	
	�Զ�����:
plutommi\Service\NITZSrv\res\NITZSrv.res NVRAM_SETTING_AUTOUPDATE_DT_TIME_STATUS 
plutommi\mmi\Setting\SettingRes\PhoneSetting.res NVRAM_AUTOUPDATE_DT_STATUS ??�������;
	Ĭ�ϳ���/ʱ��
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res id="CURRENT_CITY"
plutommi\mmi\Organizer\OrganizerRes\WorldClock\WorldClock.res <STRING^id="STR_WCLOCK_CITY78"/>
plutommi\Customer\CustResource\PLUTO_MMI\resource_world_clock_city.c TimeZoneData �¼�ʱ��
//	{-5, 		STR_WCLOCK_Lima,		STR_WCLOCK_CITY_ABBRE10,63, 98, 1},

	����ʱ��:
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_LEVEL
plutommi\Service\GpioSrv\gpiosrv.res NVRAM_BYTE_BL_SETTING_HFTIME
	����ʱ��:
plutommi/mmi/ScrLocker/ScrLockerRes/ScrLocker.res <MENU^id="MENU_ID_SLK_TIME_SETTING_MENU"
plutommi/mmi/ScrLocker/ScrLockerSrc/ScrLockerSetting.c #define^MMI_SLK_SET_SELECTION_DEFAULT
	ʡ��ģʽ:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __MMI_SUPER_BATTERY__



	�ֻ�׷��:
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res mmi_rp_app_mobile_tracker_def.h
plutommi\mmi\SecuritySetting\SecSetRes\SecSet.res MENU_ID_MOBILE_TRACKER
plutommi\mmi\Inc\ProcedureConfig.h KM_MMI_FRM_PROC_ID_MOBILE_TRACKER
	
			
	ָ��:
plutommi/AppCore/SSC/SSCPassEngine.c mmi_show_sar_info			SAR
plutommi/AppCore/SSC/SSCPassEngine.c km_change_imei_entry		IMEI
plutommi/AppCore/SSC/SSCPassEngine.c hw_info_show			LCD+CAM��Ϣ
plutommi/AppCore/SSC/SSCOperate.c mmi_ssc_send_imei_get_ilm
projects\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\Resource\CustResDefPLUTO.h SSC_ENGINEERING_MODE
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_EF_PHONE_LOCK_DEFAULT �ָ���������ָ��


	��������ʱ��:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_datetime_input
plutommi\mmi\Setting\SettingSrc\DateAndTime.c void^mmi_phnset_entry_set_date_and_time
plutommi\CUI\InlineCui\InlineCui_Slim.c void^cui_inline_set_item_date ��ʾ����
plutommi\CUI\InlineCui\InlineCui_Slim.c void^cui_inline_set_item_time ��ʾ����
plutommi\CUI/InlineCui/InlineCui_Slim.c cui_inline_get_value ��������
	��ʾ����:
plutommi\Framework\GUI\GUI_SRC\gui_inputs.c void^gui_show_multi_line_input_box_ext_internal
	������Ч��:
plutommi\Framework/GUI/GUI_SRC/wgui_datetime.c default_inline_date_validation

	�ָ���������:
plutommi\mmi\Setting\SettingSrc\Restore.c mmi_restore_app_table[]
plutommi\mmi\Setting\SettingSrc\Restore.c mmi_restore_app_reboot(void)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_ATTR_FACTORY_RESET


----------------------------------------------------------------------------

GUI[g]: ״̬�� �����ٷֱ�
	title:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c matrix_title_theme.active_filler
	
plutommi\Framework\GUI\GUI_SRC\gui_buttons.c gui_show_icontext_button
	
plutommi\Framework\GUI\GUI_SRC\wgui_categories_cm.c MMI_multiline_inputbox.normal_text_color

	״̬��:
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_initialize( ) 
plutommi\Framework\GUI\GUI_SRC\wgui_draw_manager.c dm_setup_and_draw_status_icons( ).   ��ʼ����
plutommi\Framework\GUI\OEM_SRC\wgui_status_icon_bar.c void^wgui_status_icon_bar_update( )
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_arrange_oem( ).  ����λ��
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_oem( ).     ��ͼ��
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_hide_oem
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c void^gui_status_icon_bar_show_icon_oem( ).������ͼ�꣬��������ʱ��


	����:
plutommi/Framework/GUI/GUI_Res/Status_icon_bar.res IMG_SI_BATTERY_STRENGTH ����
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c STATUS_ICON_BATTERY_STRENGTH
plutommi\Framework\GUI\GUI_SRC\wgui_status_icon_bar.c wgui_status_icon_bar_icon_blink_and_animate_timer_callback
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c g_charbat_context.chargerLevel �����ȼ�
	��������:
plutommi\mmi\MiscFramework\MiscFrameworkSrc\PwronCharger.c void^BatteryStatusIndication
	���ӵ����ٷֱ�:
plutommi\mmi\km\SDK\Src\KM_Util.c km_charbat_get_persent
	��س�������:
custom\drv\misc_drv\_Default_BB\MT6261\chr_parameter.c chr_usb_detect_volt = 1400000;	
	��س������������Сʱ(�ദ����):
hal\peripheral\src\bmt.c STOPTIMER_TIMEOUT_TICK	 (KAL_TICKS_1_MIN*30)
	��ѹ����:
custom\app\FARSIGHTED61M_CN_11C_BB\nvram_user_config.c NVRAM_EF_CUST_HW_LEVEL_TBL_DEFAULT


	ʱ��״̬��:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c show_main_LCD_date_time
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\MainLCD\IdleScreen\Techno\SmallClock\0030.bmp
plutommi\Framework\GUI\GUI_SRC\gui_clock.c gui_clock_show_digital_small_image
	ʱ��״̬�� ����:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_UI_CLOCK_SMAILL_DIGITAL_IMAGE_CLOCK
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_WGUI_STATUS_ICON_SHOW_TIME_IN_RIGHT

	draw:
plutommi\Framework\GUI\OEM_SRC\gui_status_icon_bar_oem.c gui_status_icon_bar_show_info_oem

	����ͼ��:
custom\common\PLUTO_MMI\custom_events_notify.c mmi_events_notify_tbl

	����λ��:
plutommi\Customer\CustResource\CustCoordinates.c dm_category_id_control_set_map_struct^g_categories_controls_map


������δ����:
SBD_ELECTRIC_TORCH_BLINK_FAST_AND_SLOW �ֵ�Ͳ���ӿ�������
mmi_prof_customize_scrn_csk_hdlr  SIM1_MSG_TONE_ITEM flag = 2;���ӿ�ѡ���ļ�


cui_tone_selector_creat_tone_list ������������
km_mmi_prof_activate_profile_backlight_process

gui_show_icontext_button  softkey������ɫ

dm_redraw_category_screen


----------------------------------------------------------------------------

Idle[i]: ����ģʽ
	������Ӫ�� mp3 fm
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_update_service_indication
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_show_details
	
plutommi/mmi/Idle/IdleSrc/IdleClassic.c void^mmi_idle_classic_on_enter

	idle:network
plutommi\Framework\GUI\GUI_INC\gui_switch.h CFG_UI_IDLE_NETWORK_NAME_Y

	λ���޸�:
plutommi\Customer\CustResource\CustCoordinates.c g_categories_controls_map[]
	��ʾ:
plutommi/Framework/GUI/GUI_SRC/wgui_categories_idlescreen.c wgui_cat033_show_details( )

	week:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^km_idle_clock_week( )
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c void^show_main_LCD_date_time( )
	date:
plutommi\Framework\GUI\GUI_SRC\wgui_datetime.c wgui_clock_create(&wgui_clock_mainlcd_clock2

--------------------------------
	�������ֵ�Ͳ
plutommi\mmi\Idle\IdleSrc\IdleCommon.c
plutommi\mmi\Idle\IdleSrc\IdleCommon.c km_mmi_electric_torch_switch 

ShortCut:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_DEDICATED_KEY_SHORTCUTS
plutommi\Customer\CustResource\PLUTO_MMI\resource_shortcuts.c g_mmi_shct_nav_key_default_list
plutommi\Customer\CustResource\resource_shortcuts.c g_mmi_shct_nav_key_default_list ��ʱ�ļ�(ģ����������ļ�)
custom\common\PLUTO_MMI\nvram_common_config.c NVRAM_SHORTCUTS_TOTAL
	short ID:
plutommi\Customer\CustResource\mmi_rp_menu_shortcut_data.c mmi_shct_candidate_menu

--------------------------------
����ģʽ:
	�汾��:
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c void^mmi_fm_select_version_summary_menu
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMain.c MMI_RET^mmi_fm_enter_main_menu_proc
plutommi\MtkApp\FactoryMode\FactoryModeRes\FactoryMode.res <MENUITEM^id="MENU_ID_FM_FLASH"

	У׼����:   ����ģʽ->�汾��->SERIAL#: 10��ʾ��У׼
plutommi\MtkApp\FactoryMode\FactoryModeSrc\FactoryModeMisc.c ReadRecordSlim(NVRAM_EF_BARCODE_NUM_LID, 


--------------------------------
Lock[l]:
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerClassic.c
	Ĭ��ʱ��
plutommi\mmi\ScrLocker\ScrLockerSrc\ScrLockerSetting.c MMI_SLK_SET_SELECTION_DEFAULT
----------------------------------------------------------------------------

����[d]: 
plutommi\Framework\GUI\GUI_SRC\wgui_categories_CM.c ShowMOMTCallScreen
	����ͼ��:
plutommi\Framework\GUI\GUI_Res\Gui.res #define^IMG_IDLE_DIGI_SUB_DIR
	��������������:
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_dialer_input_box_prev_line
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_dialer_input_box_next_line
plutommi/Framework/GUI/GUI_SRC/gui_inputs.c gui_show_dialer_input_box_ext1
	����ͼƬ����ɾ��:
plutommi/Framework/GUI/GUI_SRC/wgui_inputs.c wgui_inputs_fast_del_nav_get_op_handler

	����#��:
plutommi\CUI\DialerCui\DialerCuiCommon.c
	�޸�dialer search���Ž���������ɫ����
plutommi\Framework\GUI\GUI_SRC\wgui_categories_idlescreen_op.c void^wgui_cat203_set_editor_focus_state
	����+����0�ϣ�+�ż��ڡ�*���ż���       ֻҪ����OFF����
plutommi\Customer\CustResource\PLUTO_MMI\MMI_features_switchPLUTO.h CFG_MMI_MULTITAP_KEY_0 (__OFF__)
	

	��������:
vendor\InputMethod\mtk\mtkmultitap.c g_multitap_urdu

	 ͨ������:
plutommi/Service/Gsm3gCallSrv/GCallSrvStructMgmt.c IMG_ID_GCALL_CALL_INCOMEING
	
----------------------------------------------------------------------------
Menu:
	title:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c matrix_title_theme.active_filler
	size:
plutommi\Framework\GUI\GUI_SRC\wgui_categories_MM.c configure_fixed_matrix(ixsize, iysize





----------------------------------------------------------------------------
��ϵ��[p]: ����
plutommi\mmi\PhoneBook\PhoneBookSrc\PhoneBookSetting.c

	��ϵ���л���tab+icon
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_UI_IN_TABS
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_CALLER_GROUP
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_TAB_BARS_SUPPORT

	Ⱥ�鹦��:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_UI_IN_TABS
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_PHB_CALLER_GROUP
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_CONTACT_SLIM

	��ϵ��-Ԥ��:
plutommi/mmi/PhoneBook/PhoneBookSrc/PhoneBookEditor.c mmi_phb_entry_view_contact_entry_inline_tab_0
	
----------------------------------------------------------------------------
����:
	����-list:
plutommi/mmi/UnifiedMessage/UnifiedMessageSrc/UMScrHdlr.c mmi_um_ui_sh_general_folder_entry
plutommi/mmi/UnifiedMessage/UnifiedMessageSrc/UMScrHdlr.c mmi_um_ui_sh_general_folder_hilite_hdlr
	����-view:
plutommi/mmi/Messages/MessagesSrc/SmsAppMainUI.c mmi_sms_entry_viewer
	����-save:
plutommi/mmi/Messages/MessagesSrc/SmsAppEditor.c mmi_sms_editor_opt_select_hdlr
	����-edit:
plutommi/mmi/Messages/MessagesSrc/SmsAppEditor.c mmi_sms_entry_editor
plutommi/Framework/InputMethod/Engine/Engine_Src/Imc_key.c mmi_imc_key_set_softkey
	����-send:
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_send_proc
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_entry_add_recipient
plutommi/CUI/SmsCui/SmsSenderCui.c cui_sms_dm_pre_send_msg
	����-����-����:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_SMS_TEMPLATE_SPANISH

----------------------------------------------------------------------------

��ý��[u]:

	Camera:
plutommi\MtkApp\Camera\CameraSrc\CameraApp.c
plutommi\MtkApp\Camera\CameraSrc\CameraApp.c mmi_camera_preview_set_key_hdlr

	Image:
plutommi\MtkApp\ImageView\ImageViewRes\imgview.res
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h USE_SW_PNG_DECODER
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak PNG_DECODE	���˻ᱨ��������, PNG�򲻿�


	FM:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak FM_RADIO_RECORD
	EZFM:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak EASY_FM
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_FM_RADIO_BIND_EARPHONE
	FM-������:
plutommi\MtkApp\FMRadio\FMRadioSrc\FMRadioMainScreen.c void^mmi_fmrdo_show_main
	FM-channel����:
plutommi\MtkApp\FMRadio\FMRadioSrc\FMRadioMainScreen.c void^mmi_fmrdo_redraw_main_freq_label
	FM-������ɫ:
plutommi\Customer\CustResource\M105_MLT_MMI\resource_fmradio_skins.c g_fmrdo_skins


	SCREENSAVER:
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_SCREENSAVER_STATUS
plutommi\mmi\Setting\SettingRes\ScreenSaver.res NVRAM_CURRENT_SCREENSVER_ID
plutommi\mmi\Setting\SettingRes\ScreenSaver.res RESTORE_DEFAULT_CURRENT_SCREENSVER_ID

----------------------------------------------------------------------------
�����[w]: �ļ�����
	������ҳΪ�ٶ�:
custom\common\PLUTO_MMI\nvram_common_custpack.c nvram_wap_bookmark_list_struct


----------------------------------------------------------------------------
�ļ�����:
	����opt:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_SLIM_FILE_MANAGER
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c MENU_ID_FMGR_CARD_DETAIL SRV_FMGR_DRV_CARD_TYPE
	��ʽ��:
plutommi\MtkApp\FileMgr\FileMgrSrc\FileMgrMain.c fmgr_main_drive_action_hdlr(void)
plutommi\Service\FileMgrSrv\FileMgrSrvStorage.c srv_fmgr_drv_init(void)

----------------------------------------------------------------------------

����[t]:��λת�� ��Ϸ ���� ����
	��λת��:
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __MMI_CURRENCY_CONVERTER__
plutommi\mmi\Extra\ExtraRes\currencyconvertor.res EXTRA_MENU_CURRENCYCONVERTOR_STRINGID
plutommi\Customer\CustResource\CustMenuTree_Out.c EXTRA_CURRENCYCONVERTOR_MENU
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c mmi_cconv_entry_app
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c mmi_cconv_pre_entry_exchange
plutommi\mmi\Extra\ExtraSrc\currencyconvertor.c SetCategory57RightSoftkeyFunctions(mmi_cconv_pre_entry_exchange ����Ҫ�ص�
	��Ϸ:
plutommi/mmi/FunAndGames/FunAndGamesSrc/FunAndGamesSrc.c

	������: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CALC CFG_MMI_CALCULATOR CFG_MMI_CAL_SLIM
plutommi\mmi\Extra\ExtraSrc\Calculator.c

	����:
plutommi/MtkApp/Connectivity/ConnectivityRes/Bluetooth/Bluetooth.res S1716
plutommi/MtkApp/Connectivity/ConnectivitySrc/BtCommon/BTMMIScr.c S1716

	��Ϸ: 
plutommi\mmi\Inc\MMI_features.h #define^__MMI_GAME_SNAKE__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_RES_TYPE_WALLPAPER_SEL
	��Ϸ��Դ: 
plutommi\mmi\FunAndGames\FunAndGamesRes\Game.res __MMI_GAME_SNAKE__
plutommi\mmi\FunAndGames\FunAndGamesSrc\Game.c GAME_SWITCH(game_snake

----------------------------------------------------------------------------
	����: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CALC CFG_MMI_ALARM_SLIM
	��������: 
plutommi/mmi/MainMenu/MainMenuRes/MainMenuRes.res <MENUITEM_ID>@OID:MENU_ID_AZAAN_ALARM
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_AZAAN_ALARM
	������������: 
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\UserProfiles\Ring\Allah.O.Akber.mp3 û��
	����������Դ�ر�SLIM: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_ALARM_SLIM
	��������AMPM: 
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak __KM_AZAAN_ALARM_ADD_AMPM__
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_TIME_SETTING_AM_PM_SUPPORT
plutommi\mmi\Inc\MMI_features.h #define^__MMI_GAME_SNAKE__
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarSrc\AzaanAlarm.c

	ħ��:
VOICE_CHANGER_SUPPORT
SBD_CUSTOMER_NLIVE_ADD_MAGIC_VOICE

----------------------------------------------------------------------------

����: 
	��������: 
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_CALENDAR
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h __MMI_CALENDAR_EVENT__ (����)
plutommi\Framework\GUI\GUI_INC\gui_calendar.h __MMI_CALENDAR_TITLE__
	����UI: 
plutommi\Framework\GUI\GUI_SRC\gui_calendar.c gui_calendar_init_layout ������
plutommi\Framework\GUI\GUI_SRC\wgui_categories_calendar.c SBD_HIJRI_CALENDAR_AFGHAN
plutommi\Framework\GUI\GUI_INC\gui_typedef.h GUI_CALENDAR_FRAME_HEIGHT
	Ĭ��������ʼ��Ϊ��һ: 
plutommi\mmi\Organizer\OrganizerRes\calendar.res NVRAM_CLNDR_FIRST_DAY_OF_WEEK
	��˹������:
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h CFG_MMI_HIJRI_CALENDAR
plutommi\mmi\Inc\MMI_features.h __MMI_HIJRI_CALENDAR__
plutommi\mmi\Organizer\OrganizerRes\calendar.res __MMI_HIJRI_CALENDAR__
make\plutommi\mmi_app\mmi_app.mak HijriCalendar 				����c(δ�޸�)
plutommi\mmi\Inc\mmi_pluto_res_range_def.h APP_HIJRI_CALENDAR	����Res(δ�޸�)
	��˹������ת��:
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c mmi_clndr_lunar_data_constructor
plutommi\mmi\Organizer\OrganizerSrc\Calendar.c mmi_hijri_get_date_str
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarSrc\HijriCalendar.c mmi_hijri_greg_to_hijri(MYTIME
plutommi\mmi\Organizer\HijriCalendar\HijriCalendarInc\HijriCalendarDef.h base_hijri_date 	��������
	����Str
plutommi\mmi\Organizer\HijriCalendar\HijriCalendar_res\HijriCalendar.res STR_AFGHAN_JANUARY

----------------------------------------------------------------------------

����[h]:
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h 
plutommi\Customer\CustResource\Themecomponents.h
	��������:
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h UI_filled_area^popup_screen_bg_filler_defaultTheme

	���ڸ�������ɫ:
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h #define^img_menuitem_single_line_highlight_filler_color

----------------------------------------------------------------------------

TRACE[h]:
open D:\ProgramDownTool\3.1304.00_Catcher\Catcher.exe
	
Phone--EngMode--uart open

Menu--Config--Set database path:
	tst\database_classb\BPLGUInfoCustomAppSrcP_MT6261_...
Config port:
	usb connect
���и�����...--set--All on
Menu--View--ps Integrated--show log


----------------------------------------------------------------------------
��չ��Ŀ:
//ctrl+C�Զ��������ļ�, ����Ŀ->����Ŀ
//����Ŀ����:
newPro = M105_JX_S1716_A_VOLKSCOMM_F4

��չ��Ŀ[e]:

custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M105_JX_S1716_A_VOLKSCOMM_F4.dws
custom\common\config_account_M105_JX_S1716_A_VOLKSCOMM_F4.h
custom\common\userprofile_nvram_def_M105_JX_S1716_A_VOLKSCOMM_F4.h
custom\system\FARSIGHTED61M_CN_11C_BB\custom_MemoryDevice_M105_JX_S1716_A_VOLKSCOMM_F4.h
make\M105_JX_S1716_A_VOLKSCOMM_F4_gprs.mak 
make\Verno_M105_JX_S1716_A_VOLKSCOMM_F4.bld 
plutommi\Customer\Audio\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\audio.zip
plutommi\Customer\Images\M105_MLT\M105_JX_S1716_A_VOLKSCOMM_F4\image.zip
plutommi\Customer\CustResource\M105_MLT_MMI\MMI_features_switchM105_JX_S1716_A_VOLKSCOMM_F4.h 
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\ThemeRes.c 
plutommi\Customer\CustResource\M105_MLT_MMI\M105_JX_S1716_A_VOLKSCOMM_F4\Themecomponents.h 
plutommi\Customer\CustResource\M105_MLT_MMI\ref_list_M105_JX_S1716_A_VOLKSCOMM_F4.txt 
plutommi\Customer\CustResource\M105_MLT_MMI\CustResDefM105_MLT.h
plutommi\Customer\CustResource\M105_MLT_MMI\CustMiscDataM105_MLT.c
CUSTOMER_NAME_M105_JX_S1716_A_VOLKSCOMM_F4 �������


#SVN test
TortoiseProc.exe /command:commit /path:"c:\svn_wc\file1.txt*c:\svn_wc\file2.txt" /logmsg:"test log message" 
F:\11CW1352MP_MT6261DM\custom\codegen\FARSIGHTED61M_CN_11C_BB\codegen_M105_JX_S1716_A_VOLKSCOMM_F4.dws



----------------------------------------------------------------------------
��ʱĿ¼
plutommi\Customer\ResGenerator\temp
plutommi\mmi\TargetOption.txt
	

SIɾ��:��̫��
plutommi\Customer\ResGenerator\custom_option.txt 
tools\NVRAMStatistic\include\custom_option.txt

�����������:
set path=%path%;C:\CSDTK\cygwin\bin;
find ./ -name "*.log"| xargs grep "ERROR"
ûװcygwin:
findstr /s /i "ERROR" *.log>aaaa.txt

----------------------------------------------------------------------------

Build����[Cb][b]:

build\M105_JX_S1716_A_VOLKSCOMM_F4\build.log cleanlib 				����ʱ��
build\M105_JX_S1716_A_VOLKSCOMM_F4\MT6261.log Finished: 			�������⿴���
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmiresource.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_framework.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_app.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\custom.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_service.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\mmi_check.log Error:

build\M105_JX_S1716_A_VOLKSCOMM_F4\MMI_DRV_DEFS.mak  				�鿴���Ƿ����
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\info.log  					�鿴���Ƿ����
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\drv_features_option.log  	�鿴���Ƿ����
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\MMI_features.log  			�鿴���Ƿ����


build\M105_JX_S1716_A_VOLKSCOMM_F4\log\ckSysDrv.log Free#Space 				��ʣ��ռ䣬nv��С
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen_mtk_resgenerator_make.log		res����ͷ�ļ�
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen_xml_preprocess.log Error:
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\FileSystemConfig.log
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\ckImgSize.log Error:
//The Boundary of VIVA bin				 = 3883008	bytes		�����޸ĵ�λ 8*512=4096
//Actual VIVA End Address 				 = 3741620	bytes
//============================================================
//Check VIVA Compressed ROM Size: PASS!

build\M105_JX_S1716_A_VOLKSCOMM_F4\gprs\MT6261r\pregen_dep\emigen.det
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\resgen_mtk_resgenerator_make.log Error:

build\M105_JX_S1716_A_VOLKSCOMM_F4\log\vivaConfig.log Error:



----------------
1 ���ռ�:
AAPMC Error: Error[2] Calculating correct VIVA memory value...Failed.
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
Please check link error or check 
build\M105_JX_S1716_A_VOLKSCOMM_F4\log\vivaConfig.log Error:
----------------
2
make[1]: *** [zimage_check] Error 1
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make[1]: Entering directory 'F:/11CW1352MP_MT6261DM'
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'
make: *** [POSTBUILD ] Error 1
perl tools\ChkDepMod.pl --step 2 M105_JX_S1716_A_VOLKSCOMM_F4 gprs MT6261

2.2 ����Ҫɾ����ļ�
custom\system\FARSIGHTED61M_CN_11C_BB

----------------
3
make[1]: *** [obigo03cstkadp.lib] Error 2
make[1]: *** [peripheral.lib] Error 2
make[1]: *** [postproc.lib] Error 2
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
new
----------------
4
make[1]: *** [mmiresource.lib] Error 1
make[1]: *** Waiting for unfinished jobs....
make[1]: Leaving directory 'F:/11CW1352MP_MT6261DM'

make: *** [xgc_all_libs_2] Error 1
----------------
5 �������Ժ� ��Դ���� ���ػ�����/״̬ͼ�겻��ʾ --> NV���޸�����
----------------
6 MMI Feature Check Error
soft\tst\database_classb�������ʱ�ļ�ɾ��
----------------
7 XX.bin does not exist. Please check it.
----------------
8 ���б������->Disable
  make: *** [xgc_all_libs_2] Error 1
----------------
9 process_begin: CreateProcess(C:\Users\ADMINI~1\AppData\Local\Temp\make6688-1.bat, 
  make (e=5): �ܾ�����
----------------
10 Tools\MSYS\bin\sh.exe: *** Couldn't reserve space for cygwin's heap (0x715B0000 <0x1FE0000>)
��:
tools\MSYS\bin\msys-1.0.dll
��:
open: {save}\SI\z-other-patch\mtk-tools\msys-1.0.dll
���˺��Ǳ���:
make[1]: *** [fluency.lib] Error 2
�������һ�ο����ˡ�
----------------
11 
vivaConfig.log:
Checking VIVA configuration reason
Error: L6388E: ScatterAssert expression (ImageLimit(ZIMAGE_ER) < ImageBase(CACHED_DUMMY_END)) failed on line 904
ԭ��δ֪, ����new����
----------------
12 ��ʧBOOTLOADER�ļ���ԭ��δ֪
M105_..._BOOTLOADER_V005_MT6261_..._ext.bin
----------------
13 F:\11CW1352MP_KM2\build\M105_JX_..\M105_JX_._20181217.bin\M105_JX_.._20181217.bin
�ļ������ȳ���256����������bin�ļ�


----------------------------------------------------------------------------

1 ģ��������:
1.1 plutommi\framework\mte\mteinc\mte.h
plutommi\framework\mte\mteinc\mte_data.h ��һ��}�಻��
----------------
1.2  Run-time check Failure #2 - ... 'shortname' was corrupted
MoDIS_VC9\filesystem\FileSystemInc\FSSim_def.h FSSIM_SFN_LEN  ->19 �18
----------------
1.3 vs_cfg:
 Stack around the variable XX was corrupted
 ��Ŀ-����-��������-C/C++-���������С�������������ʱ������ó�Ĭ��ֵ
 code->basic runtime checks
----------------
1.4 exist not modis.exe 
 MoDIS_VC9 ɾ����������
----------------
1.5 cannot update program database:
modis_vc9\mmi_service\debug\vc90.pdb
��Ŀ���ã�����Ŀ����ALT F7����Ӣ�İ�Ϊ����:
	C\C | General | Debug Information format | C7 Compatible (/Z7)
	C\C | Code Generation | Enable String Pooling | Yes (/GF)
	Linker |Debuging |General Debug Info | Yes (/DEBUG)
���ϱ�����ת�صĶ����������������ʵ�飬ֻ�޸ĵ�һ��ɡ�
�޸ı�����ٴα������������Ĵ����λ�ã��޸ĸô���
Ȼ�󽫸������ûָ�Ϊ�޸�ǰ��ֵ����[�ر�]�Ͳ������cannot update program database������
----------------
1.6
vendor\framework\obigo_Q03C\v1_official\msf\msf_lib\export\msf_log.h #define^MSF_LOG_MSG_ARGS
�ն���
#ifdef WIN32
#undef  MSF_LOG_MSG_ARGS_(type, modId, msgId, format, s, ...)      
#undef MSF_LOG_MSG_NOARG_(type, modId, msgId, format, s)          
#undef MSF_LOG_MSG_NOARG(x)                                       
#undef MSF_LOG_MSG_ARGS(x)                                        
#endif
----------------
1.7
wps_trc_gen.h 
���Ƶ���ӦĿ¼, �����ر�����


[Cg]


