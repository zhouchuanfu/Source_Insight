
基础路径设置:
//basePath = 

/***********************************************************************/

//目录[Num][Ca]:
// 1. 
Save:node\C\study\Macro_data_8910.h \[1.1\] Message 切换
Save:node\C\study\Macro_data_8910.h \[1.2\] FUN 入口-------------
Save:node\C\study\Macro_data_8910.h \[1.3\] 参考
Save:node\C\study\Macro_data_8910.h \[1.4\] 移配置
Save:node\C\study\Macro_data_8910.h \[1.5\] 说明文档
Save:node\C\study\Macro_data_8910.h \[1.6\] Win数据
Save:node\C\study\Macro_data_8910.h \[1.7\] SALE统计
Save:node\C\study\Macro_data_8910.h \[1.8\] 常用入口
Save:node\C\study\Macro_data_8910.h \[1.9\] Display
Save:node\C\study\Macro_data_8910.h \[1.10\] 128X128
Save:node\C\study\Macro_data_8910.h \[1.11\] WIN_FUNC
Save:node\C\study\Macro_data_8910.h \[1.12\] 
Save:node\C\study\Macro_data_8910.h \[1.13\] 
//
Save:node\C\study\Macro_data_8910.h \[2.1\] 重新安装VC
Save:node\C\study\Macro_data_8910.h \[2.2\] MsgIdNote
Save:node\C\study\Macro_data_8910.h \[2.3\] WinNote
Save:node\C\study\Macro_data_8910.h \[2.4\] SIZE
Save:node\C\study\Macro_data_8910.h \[2.5\] ImageNote
Save:node\C\study\Macro_data_8910.h \[2.6\] TextNote
Save:node\C\study\Macro_data_8910.h \[2.7\] ColorNote
Save:node\C\study\Macro_data_8910.h \[2.8\] RectNote
Save:node\C\study\Macro_data_8910.h \[2.9\] test code
Save:node\C\study\Macro_data_8910.h \[2.10\] STYLE
Save:node\C\study\Macro_data_8910.h \[2.11\] 
Save:node\C\study\Macro_data_8910.h \[2.12\] 
// 其他标号
Save:Help\\DefaultFile\\Macro_Node_Num.h




[1.1] Message 切换

//	Message 切换
Save:node\C\study\Macro_Spr_MsgId.h
//
 MMK_WinGrabFocus(MMIWIFI_LIST_WIN_ID);



[1.2] FUN 入口
//	FUN 入口
Save:node\C\study\Macro_Spr_Fun.h




[1.3] 参考
// 参考
Save:node\C\study\Macro_Spr_Other.h




[1.4] 移配置
common\nv_parameters\S036_MB
MS_Customize\source\product\config\S036_MB
MS_Customize\SC6530_S036_MB_vm
version\SC6530_S036_MB_version.c




[1.5] 说明文档
SC6530平台_application_notes.doc				  ###  宏说明			   
Universe手机使用说明.docx 					   ###	手机使用说明
Build_Environment_Manual.doc ###  编译环境




[1.6] Win数据
//
VIRTUAL_WIN_ID
//
MMI_BASE_NODE_T    # 可以转 WINDOW_NODE
MMI_HANDLE_NODE_T
MMI_TREE_NODE_T    HANDLE
MMI_HANDLE_T		HANDLE_NODE + APPLET_NODE	 #应用

MMI_WINDOW_T		
MMI_WINDOW_NODE_T		 NODE + WINDOW + HANDLE
MMI_WINDOW_TABLE_CREATE_T	 参数
MMI_WINDOW_CREATE_T 	   参数
MMI_APPLET_NODE_T		 
MMI_ZORDER_SYSTEM_T
MMI_ZORDER_NODE_T		 WINDOW_NODE + ……

MMI_APPLET_SYSTEM_T

MMI_CTRL_NODE_T
MMI_CONTROL_CREATE_T	参数

MMI_MESSAGE_PTR_T 
CAF_GUID_T			 module_manager
GUIMENU_GROUP_T

GUI_POINT_T
GUI_RECT_T
MMI_WIN_ID_T
MMI_IMAGE_ID_T
GUI_LCD_DEV_INFO
IMG_RES_SRC_T		 显示图片
CAF_GUID_T	  
MMI_MODINFO_NODE_T	  kernel模块的信息
CAF_RES_T
CAF_HANDLE_T
RES_NODE_DATA_T

IMG_RES_DST_T	 显示
IMG_RES_SRC_T



[1.7] SALE统计
MMIDEFAULT_StartAutoSendSMSTimer        # 默认
HandleSetSmsAutoSendWindow
Enter_SMS_APP_AutoSend_SIM1
MMIDEFAULT_HandleAutoSendSMSTimer        # 处理发送




[1.8] 常用入口
其他常用入口：
	字符：	
MMI_GetLabelTextByLang
CalStartPoint
	消息：	
MMK_SendMsg

MMK_IsOpenWin

VideoPlayerResume
MMISRVAUD_TYPE_VIDEO




[1.9] Display

DisplayIconItem
AdjuestIconMenuRect
CreateIconMenuButton	#标题颜色
GetMenuItemByIndex

DrawControlPanel



[1.10] 128X128
MAINLCD_SIZE
MAINLCD_SIZE_128X128
MAINLCD_DEV_SIZE_128X128
MMI_LCD_128_128


[1.11] WIN_FUNC
//
MMK_GetWinId
MMK_GetFocusChildWinId()
//
MMK_IsFocusWin
MMK_IsOpenWin
MMK_CloseWin
//


[1.12] 
	





[1.13] 




[1.14] 




[1.15] 



[2.1] 重新安装VC
//1) 没有找到MSDevkernel.dll
//2) Error spawning cl.exe错误
//3) LONG_PTR
//error C2040: 'LONG_PTR' : 'long ' differs in levels of indirection from 'long *'

// 解决:
// 用其他电脑文件覆盖过来:
C:\Program Files (x86)\Microsoft Visual Studio


[2.2] MsgIdNote

Save:node\C\study\Show_Msg_ID.h MSG_APP_1
Save:node\C\study\Show_Msg_ID.h MSG_APP_OK
Save:node\C\study\Show_Msg_ID.h MSG_KEYDOWN_1

//Save:node\C\study\Show_Msg_ID.h MsgId=61505,
//Save:node\C\study\Show_Msg_ID.h MsgId=61479,
Save:node\C\study\Show_Msg_ID.h MsgId=61475,
//Save:node\C\study\Show_Msg_ID.h MsgId=61480,
//Save:node\C\study\Show_Msg_ID.h MsgId=61470,
//Save:node\C\study\Show_Msg_ID.h MsgId=61480,
//Save:node\C\study\Show_Msg_ID.h MsgId=61482,
Save:node\C\study\Show_Msg_ID.h MsgId=65027,
Save:node\C\study\Show_Msg_ID.h MsgId=64003,
Save:node\C\study\Show_Msg_ID.h MsgId=64256,
Save:node\C\study\Show_Msg_ID.h MsgId=64017,MSG_KEYDOWN_STAR
Save:node\C\study\Show_Msg_ID.h MsgId=65041,MSG_KEYREPEAT_STAR
Save:node\C\study\Show_Msg_ID.h MsgId=64273,MSG_KEYUP_STAR
Save:node\C\study\Show_Msg_ID.h MSG_KEYLONG_STAR, 64529
//pub
Save:node\C\study\Show_Msg_ID.h MsgId=61479, KEY_AT
Save:node\C\study\Show_Msg_ID.h MsgId=61477,
Save:node\C\study\Show_Msg_ID.h MsgId=61480,
//left right
Save:node\C\study\Show_Msg_ID.h MsgId=64003,
Save:node\C\study\Show_Msg_ID.h MsgId=64257, MSG_KEYUP_UP
Save:node\C\study\Show_Msg_ID.h MsgId=64258, MSG_KEYUP_DOWN
Save:node\C\study\Show_Msg_ID.h MsgId=64259,
Save:node\C\study\Show_Msg_ID.h MsgId=57364,

	
Save:node\C\study\Show_Msg_ID.h MsgId=61474,
Save:node\C\study\Show_Msg_ID.h MsgId=61479,
Save:node\C\study\Show_Msg_ID.h MsgId=64283,
		
Save:node\C\study\Show_Msg_ID.h MsgId=65025,  MSG_KEYREPEAT_UP
Save:node\C\study\Show_Msg_ID.h MsgId=61475,
Save:node\C\study\Show_Msg_ID.h MsgId=64257,  MSG_KEYUP_UP






MSG_APP_1, MSG_KEYDOWN_1, MsgId=64008,


KEY_PLAYANDSTOP
MSG_KERNEL_START



[2.3] WinNote, win_id
//
MS_MMI/source/mmi_app/app/fm/h/mmifm_id.def  SBD_H9_KLS_FM
MS_MMI/source/mmi_app/app/fm/h/mmifm_id.h  SBD_H9_KLS_FM

//NvNote
MS_MMI/source/mmi_app/app/fm/c/mmifm_nv.c
MS_MMI/source/mmi_app/app/fm/h/mmifm_nv.h



//ResNote
MS_MMI/source/mmi_app/app/fm/h/mmifm_position.h  SBD_H9_KLS_FM
MS_MMI/source/mmi_app/app/fm/h/fm_mdu_def.h  SBD_H9_KLS_FM
MS_MMI/source/mmi_app/app/fm/h/mmifm_internal.h SBD_H9_KLS_FM




[2.4] SIZE
// height
title  22
list   21*4
softkey 20+2
// icon
list  16



[2.5] ImageNote

//查看图标是否存在
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_QUERY
Save:node\C\study\Show_Pic_dir.h IMAGE_PUBWIN_SUCCESS  
Tool:common\MMI_RES_DEFAULT\IMAG\Pubwin\PDA

Tool:clock\MMI_RES_DEFAULT\IMAG\Alarm\IMAGE_CLOCK_ALARM_ALERT.png
Tool:clock\MMI_RES_DEFAULT\IMAG\Alarm


Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_SELECTED_ICON        
Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_UNSELECTED_ICON      
Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_UNSELECTED_ICON_GRAY 
Save:node\C\study\Show_Pic_dir.h IMAGE_CHECK_SELECTED_ICON 
Save:node\C\study\Show_Pic_dir.h IMAGE_COMMON_SOFTKEY_OK_ICON 
Save:node\C\study\Show_Pic_dir.h IMAGE_CONTROL_POPWIN_SUCCESS 
Save:node\C\study\Show_Pic_dir.h IMAGE_FM_PAUSE_DEFAULT 
Save:node\C\study\Show_Pic_dir.h IMAGE_NUMBER_9
Save:node\C\study\Show_Pic_dir.h IMAGE_IDLE_TITLE_ICON_EARPHONE
Save:node\C\study\Show_Pic_dir.h EARPHONE
Save:node\C\study\Show_Pic_dir.h IMAGE_CONTROL_POPWIN_FAIL
Save:node\C\study\Show_Pic_dir.h IMAGE_CLOCK_CALENDAR_DEFAULT
Save:node\C\study\Show_Pic_dir.h IMAGE_CLOCK_ALARM_WEEK_DISABLED


//str,新加图标:
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM
//str,旧图标:
project\H9_KLS_F4\resource\common_mdu_def.h IMAGE_IDLE_TITLE_ICON_EARPHONE
project\H9_KLS_F4\resource\common_mdu_def.h IMAGE_NUMBER_HL_1

Tool:common\MMI_RES_DEFAULT\IMAG\Number\IMAGE_NUMBER_9.png
Tool:common\MMI_RES_DEFAULT\IMAG\Number\
	

IMAGE_CONTROL_LIST_CHECK_DEFAULT

MS_MMI_Main\source\mmi_app\app\fm\h\fm_mdu_def.h SBD_H9_KLS_FM



//打开图标文件位置
Tool:common\MMI_RES_DEFAULT\IMAG\Softkey\IMAGE_SOFTKEY_BG.png
Tool:common\MMI_RES_DEFAULT\IMAG\Softkey\
Tool:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon
Tool:common\MMI_RES_DEFAULT\IMAG\Common
Tool:fm\MMI_RES_DEFAULT\IMAG\IMAGE_FM_PAUSE_DEFAULT.png
Tool:fm\MMI_RES_DEFAULT\IMAG\
Tool:common\MMI_RES_DEFAULT\IMAG\Number\IMAGE_NUMBER_9.png
Tool:common\MMI_RES_DEFAULT\IMAG\Number\
Tool:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon\IMAGE_IDLE_TITLE_ICON_EARPHONE.png
Tool:common\MMI_RES_DEFAULT\IMAG\StatusbarIcon\


//IMAGE_CHECK_SELECTED_ICON
Tool:common\MMI_RES_DEFAULT\IMAG\List\IMAGE_CONTROL_LIST_CHECK_PRESSED.png
//IMAGE_CHECK_UNSELECTED_ICON
Tool:common\MMI_RES_DEFAULT\IMAG\List\IMAGE_CONTROL_LIST_CHECK_DEFAULT.png
//IMAGE_CHECK_UNSELECTED_ICON_GRAY
Tool:common\MMI_RES_DEFAULT\IMAG\List\IMAGE_CONTROL_LIST_CHECK_UNSELECTED_ICON_GRAY.png


Tool:common\MMI_RES_DEFAULT\IMAG\Title\Common

//title
Tool:common\MMI_RES_DEFAULT\IMAG\Common


pic:IMAGE_TITLE_BAR,\common\MMI_RES_DEFAULT\IMAG\Title\Common\IMAGE_TITLE_BAR.png
pic:IMAGE_TITLE_BAR2,\common\MMI_RES_DEFAULT\IMAG\Title\IMAGE_TITLE_BAR2.png




//查看图标是否存在
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_PUBWIN_QUERY

build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_COMMON_BG
//build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_MAINMENU_BG
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_IDLE_TITLE_ICON_CLOCK
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_FM_ADJ_BG
	
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_IDLE_TITLE_ICON_SILENT
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_IDLE_TITLE_ICON
	
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt IMAGE_FM_AJUST_PLAY

build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_240x320_imag.txt ALARM_WEEK


//删除默认多余动画
IMAGE_RECORD_BG_ANIM_FRAME_1
MS_MMI_Main\source\resource\mmi_res_128x128\record\MMI_RES_DEFAULT\IMAG
MS_MMI_Main\source\resource\mmi_res_128x128\record\MMI_RES_DEFAULT\ANIM\ANIM_RECORD_PLAY


	


[2.6] TextNote

//
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt TXT_EXTRA_SETTINGS
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt TXT_SETTINGS_COMMAND
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt _EMPTY
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt Delete
build\UIS8910_ROM_16MB_DS_USER_builddir\tmp\mmi_res_128x128_text.txt Search
//字符整理:
// 公式:
// =IF(ISNUMBER(MATCH(C1,A$1:A$14254,)),INDEX(B$1:B$14254,MATCH(C1,A$1:A$14254,)),"")
Save:node\C\study\Show_Str_eng.h ,^Select^all,
Save:node\C\study\Show_Str_eng.h ,^Settings,
Save:node\C\study\Show_Str_eng.h ,^Once, //TXT_ALARM_MODE_ONCE
Save:node\C\study\Show_Str_eng.h ,^Daily,//TXT_ALARM_MODE_EVERYDAY
Save:node\C\study\Show_Str_eng.h ,^Weekly, //TXT_CALENDAR_WEEKLY
	
Save:node\C\study\Show_Str_eng.h ,^Close^spea
Save:node\C\study\Show_Str_eng.h ,^PAUSE,
Save:node\C\study\Show_Str_eng.h ,^Reminder,
Save:node\C\study\Show_Str_eng.h ,^Frequency,
Save:node\C\study\Show_Str_eng.h ,^Reminder^time,
Save:node\C\study\Show_Str_eng.h ,^Repeat,
Save:node\C\study\Show_Str_eng.h ,^Cancel,
Save:node\C\study\Show_Str_eng.h ,^Stop,
Save:node\C\study\Show_Str_eng.h ,^Back,
Save:node\C\study\Show_Str_eng.h ,^Save,
Save:node\C\study\Show_Str_eng.h ,^Change,
Save:node\C\study\Show_Str_eng.h ,^Option,
Save:node\C\study\Show_Str_eng.h ,^This^channel,
Save:node\C\study\Show_Str_eng.h ,^Insert^memory,
Save:node\C\study\Show_Str_eng.h ,^Empty,
//softkey:
STXT_CANCEL, STXT_STOP, STXT_RETURN, STXT_SAVE, STXT_OPTION, STXT_SELECT, TXT_DELETE, TXT_EDIT
STXT_OK, TXT_COMMON_CLEAR, 
//str,新加图标:
project\H9_KLS_F4\resource\common_mdu_def.h SBD_H9_KLS_FM

//clander
Save:node\C\study\Show_Str_eng.h ,^View, TXT_VIEW
//Save:node\C\study\Show_Str_eng.h ,^Go^to, TXT_CALENDAR_TO_DATE
Save:node\C\study\Show_Str_eng.h ,^Monday, TXT_MONDAY
Save:node\C\study\Show_Str_eng.h ,^Sunday, TXT_SUNDAY
Save:node\C\study\Show_Str_eng.h ,^Save, STXT_SAVE
Save:node\C\study\Show_Str_eng.h ,^Today, TXT_TODAY
Save:node\C\study\Show_Str_eng.h ,^Date, TXT_DATE
Save:node\C\study\Show_Str_eng.h ,^Go^to, TXT_CALENDAR_TO_DATE
	

//alarm
Save:node\C\study\Show_Str_eng.h ,^Melody, TXT_ENG_UIMELODY_TITLE
Save:node\C\study\Show_Str_eng.h ,^multiple,
Save:node\C\study\Show_Str_eng.h ,^Alert^tone,
Save:node\C\study\Show_Str_eng.h ,^Change,
//profiles
Save:node\C\study\Show_Str_eng.h ,^Meeting, TXT_ENVSET_MEETING
Save:node\C\study\Show_Str_eng.h ,^volume, TXT_ENVSET_MEETING
Save:node\C\study\Show_Str_eng.h ,^Confirm, 
Save:node\C\study\Show_Str_eng.h ,^Snooze, 
Save:node\C\study\Show_Str_eng.h ,^Alarm, 
//memo
Save:node\C\study\Show_Str_eng.h ,^Delete^all, 
Save:node\C\study\Show_Str_eng.h ,^date, 
	


#if 1//def WIN32
{
MMI_STRING_T  confirmStr = {0};
//			confirmStr.wstr_ptr = new_file_name;
//			confirmStr.wstr_len = MMIAPICOM_Wstrlen(new_file_name);
confirmStr.wstr_ptr = buffer_ptr;
confirmStr.wstr_len = MMIAPICOM_Wstrlen(buffer_ptr);
 MMIPUB_OpenAlertWinByTextPtr(PNULL, &confirmStr, PNULL, PNULL, PNULL, PNULL,MMIPUB_SOFTKEY_ONE, PNULL);
}
#endif


[2.7] ColorNote


GUIANIM_SetCtrlRect(MMIFM_FREQUENCY_BAR_CTRL_ID, &anim_rect);




//Calendar主题字体颜色:
// 1.数字白蓝红+框白+BG绿绿+角蓝,
// 2.数字黑蓝红+框黄+BG浅浅+角蓝,
// 3.数字白蓝红+框白+BG绿绿+角蓝,

//alarm主题字体颜色:
// 1.数字白蓝红+框白+BG绿绿+角蓝,
// 2.数字黑蓝红+框黄+BG浅浅+角蓝,
// 3.数字白蓝红+框白+BG绿绿+角蓝,

//childwin:
// title:   bg蓝+font白, bg浅黄+font黑, bg浅蓝+font白, 
// setlist: bg白+icon黑, bg黄  +icon白, bg白  +icon黑, 
// softkey: 黑

//FM主题字体颜色:
// 1.选中bg蓝+font白,form-bg白+font黑, vol蓝+rec/name白+sch白+chl黑    ,
// 2.选中bg黄+font白,form-bg黄+font白, vol白+rec/name黄+sch黑+chl白,
// 3.选中bg深+font白,form-bg白+font黑, vol深+rec/name白+sch白+chl黑,
//         ---->MMI_THEME_POPMENU_BG    蓝白深
//         ---->MMI_THEME_FORM_BG       白黄白
//         ---->MMI_THEME_LABEL_FONT    白黑白
//         ---->~MMI_THEME_LABEL_FONT   黑白黑
//         ---->MMI_THEME_CUSTOM_BG  ~  
//    MMITHEME_GetCurThemeFontColor(MMI_THEME_CUSTOM_BG)
//黄色:  #99740e
#ifdef SBD_THEME_COLOR_H9_KLS
	MMI_THEME_CUSTOM_BG,
#endif


[2.8] RectNote
//rect: bar_bg{0,31,128,44, H=14} week{0,34,128,41, H=8}
//      title_btn {4,17,8,41, H=9} {123,17,127,41, H=9}
//      day_W = 18*7+2 = 126+2  day_H=6*(8+2+3)+3*5+1+1=95
//      day_all_bg{1,45,127,140, H=14}
//	  day_item_r0 {1,48,127,60}, H=13, day_item_r1 {1,64,127,76}, H=13, space=3

//search icon:(6,101,121,   )str:(6,127,121,144,h=10,top=8)bg:(0,115,127,144,h=30)
//search icon:(6,126,121,131)str:(6,102,121,111,h=10,top=8)bg:(0, 94,127,143,h=50)
//search...  TXT_COMMON_SEARCHING


//alarm
list:13+16+38+38+38+16=159, 
	font->cur ->[29 67 106 140]
	font->样机->[29 67 107 144] ,font=16+16+3
	font->12->  [29 68 107 134]
	font->9 ->  [29 65 101 134]
list-ctrl:
	label:16+1=17,  setlist:18,    sum=17+18+3=38    58
	label:16+2=18,  edit: 17+2=19, sum=18+19+3=40
	label:16+1=17,  setlist:18,    sum=17+18+1=37
	
	label:16+1=17,  btn:19,        sum=17+19+1=37
	label:16+1=17,  type:19,       sum=17+19+1=37  (无week38)
	label:16+2=18,  tone:17,       sum=18+17+3=38 20+18
	
	label:16+1=17,  vol:19,        sum=17+19+1=37   102->104
	label:16+2=18,  sno:19,        sum=18+19+1=38
	label:16+2=18,  pow:19,        sum=18+19+1=38  (无week38)
tone-item:13+1,17+1
week-item:(17*14)
	w=5+14*7+3*6=10+98+18+3+4=128,   cur:8,14,3, h
	h=3+10+4+17+2=36,
vol-item: (88*15)
	w=13+88+4+7+12+4=13+88+27=128
	h=3+10+7+15+2=37,

//mmi_pubwin
// h=title_17 + margin_4 + 17 + margin_13 + txt_10 + margin_4 + txt_10 + margin_4
//	alert_rect: image
//	title_rect: text
//	bg_rect


//env list:
//[0,1] <1,18> [19,21] <22,39>


rec:
//anim: (47,23,80,50),h=28;bottom space=1; 图片少2像素;
//		space--h8--(51,58)
//name: (0,59,128,71),h=13;chg.
//name: (0,57,128,72),h=16;只能用16号窄字;
//		space--h4--(72,75)
//rec:	(16,76,127,88),h=13;chg.
//rec:	(16,74,127,89),h=16;只能用16号窄字;
//icon: (5,78,12,75),h=8;
//		space--h20--(89,108)
//scrl: (0,109,128,112),h=4;
//		space--h1--(113,113)
//ptm:	(1,114,63,127),h=13;chg.
//ptm:	(64,114,127,127),h=13;chg.
//ptm:	(1,114,63,130),h=16;只能用16号窄字;
//ptm:	(64,114,127,130),h=16;只能用16号窄字;

old:
//anim: (45 39 81 62) record_record_bg_x
//bg1:	(0 20 128 99) record_num_bg_x
//bg2:	(0 25 128 93) 
//time: (33 105 98 114) record_time_x
//scrbg:(3 118 128 138) play_bg_x
//scrl: (3 120 128 124) progress_bg_x
//ptm:	(2 132 128 140) play_time_label_x




[2.9] test code
// Phone
"#*8378#0#", "*#15963#", "####1111#",
// UI
"####1111#", "*#87#", "*#666#",
// Item
 "*#777#", "*#66*#", "*#79*#",
// Product
"#*8378#3#",
// PhoneInfo -- bg
"#*8378#4#",
// SN
"####2222#",
// Net
"####1040#",
// Engineer
"#*8378#1#", "*#555#",
// OutVersion -- bg
"#*8378#2#", "####0000#", "*#888#",
// Chip
"#*8378#5#",
// NV
"#*786646468#",
// Monkey
"#*8378#8#",
// TFload
"#*8378#9#",
// ALLSVN -- bg
"#*786837#",
// HW
"*#999#", "*#523#",
// IMEI
"*#333#", "*#0066#", "*#3184#"; "*#06#",
// Reset
"*#119*#", "*#70#",
// ELECTRIC
"*#2010#"; "*#0808#"; "*#0809#", 























[2.10] 



[2.11] 


[2.12] 


[2.13] 


[2.14] 


[2.15] 





