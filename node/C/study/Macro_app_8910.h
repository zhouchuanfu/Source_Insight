
// 目录:
//	 2. 界面
Save:node\C\study\Macro_app_8910.h  \[1.1\] win fun.
Save:node\C\study\Macro_app_8910.h  \[1.2\] idle, lock
Save:node\C\study\Macro_app_8910.h  \[1.3\] menu, second
Save:node\C\study\Macro_app_8910.h  \[1.4\] dial
Save:node\C\study\Macro_app_8910.h  \[1.5\] test, version
Save:node\C\study\Macro_app_8910.h  \[1.6\] file
Save:node\C\study\Macro_app_8910.h  \[1.7\] Setting
Save:node\C\study\Macro_app_8910.h  \[1.8\] sms -----------------
Save:node\C\study\Macro_app_8910.h  \[1.9\] call
Save:node\C\study\Macro_app_8910.h  \[1.10\] pb, cl
Save:node\C\study\Macro_app_8910.h  \[1.11\] camera -------------
Save:node\C\study\Macro_app_8910.h  \[1.12\] pic
Save:node\C\study\Macro_app_8910.h  \[1.13\] record
Save:node\C\study\Macro_app_8910.h  \[1.14\] fm
Save:node\C\study\Macro_app_8910.h  \[1.15\] fmm
Save:node\C\study\Macro_app_8910.h  \[1.16\] vp
Save:node\C\study\Macro_app_8910.h  \[1.17\] mp3
Save:node\C\study\Macro_app_8910.h  \[1.18\] alarm --------------
Save:node\C\study\Macro_app_8910.h  \[1.19\] calc
Save:node\C\study\Macro_app_8910.h  \[1.20\] calendar
Save:node\C\study\Macro_app_8910.h  \[1.21\] 单位转换
Save:node\C\study\Macro_app_8910.h  \[1.22\] 游戏 魔音
Save:node\C\study\Macro_app_8910.h  \[1.23\] bt
Save:node\C\study\Macro_app_8910.h  \[1.24\] env
Save:node\C\study\Macro_app_8910.h  \[1.25\] 
Save:node\C\study\Macro_app_8910.h  \[1.26\] 
Save:node\C\study\Macro_app_8910.h  \[1.27\] Browser 网络参数
Save:node\C\study\Macro_app_8910.h  \[1.28\] sos
Save:node\C\study\Macro_app_8910.h  \[1.29\] startup
Save:node\C\study\Macro_app_8910.h  \[1.30\]
	



[1.1] win fun.
// msg
MMK_RunWinProc

// txt
MMIRES_GetText
GUISTR_DrawTextToLCDInRect
// cursor
GUI_FillRect
LCD_FillRect

// image
GUIRES_DisplayImg
GUI_DisplayBg

// win
MMK_CreateWin
MMK_CloseWin
MMK_CreateChildWin (, , );

// list
GUILIST_AppendItem
GUILIST_SetItemStyle

// border
GUI_DisplayBorder



[1.2] idle, lock
// open
MS_MMI_Main\source\mmi_app\app\idle\c\mainapp.c  MMIAPIIDLE_OpenIdleWin

// IDLE
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_cstyle.c  void^OutIdleWinContent
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_mstyle.c  void^OutIdleWinContent

// LOCK
MS_MMI_Main\source\mmi_app\app\keylock\c\mmikl_keylock.c  BOOLEAN^MMIKL_HandleKLDispWinMsg
// LOCK
MS_MMI_Main\source\mmi_app\app\keylock\c\mmikl_keylock.c  void^DisplayClockCallbackFun


// pos--date,week
MS_MMI_Main/source/mmi_app/app/theme/c/
MS_MMI_Main/source/mmi_app/app/theme/c/mmidisplay_data_128x128.c
MS_MMI_Main/source/mmi_app/app/theme/c/mmidisplay_data_176x220.c
// pos--time
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_cstyle.c
MS_MMI_Main/source/mmi_app/app/theme/h/mmi_position.h  MMI_MAIN_TIME_Y
MS_MMI_Main/source/mmi_app/app/theme/h/mmi_position.h  IDLE_TIME_PIC_WIDTH





[1.3] menu, second
// index
MS_MMI_Main/source/mmi_kernel/include/mmitheme_mainmenu.h  MMITHEME_MAINMENU_CUR_ITEM_INDEX
MS_MMI_Main/source/mmi_kernel/include/mmitheme_mainmenu.h  MAINLCD_SIZE_240X320
// bg rect
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  BOOLEAN^MatrixMenuGetTitleStyleInfo
// icon rect
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  HandleMatrixMenuGetIconRect
// draw
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  MMITHEME_DrawMainmenuItem
// title
MS_MMI_Main/source/mmi_service/export/inc/mmi_custom_define.h  MMISET_DEFAULT_MENU_STYLE_E
// menu softkey, prg
MS_MMI_Main/source/mmi_app/app/theme/c/mmitheme_mainmenu.c  is_has_button
MS_MMI_Main/source/mmi_app/app/mainmenu/c/mainmenu_win.c  MAINMENU_ICON_WIN_TAB
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  ->is_need_prgbox

// menu--one page
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mainmenu_win.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI_Main\source\mmi_kernel\include\mmitheme_mainmenu.h  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240X320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_matrix.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_240x320.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE

// menu--main
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c s_mainmenu_item_data
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_128x128.c 570
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_176x220.c s_mainmenu_item_data
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x320.c s_mainmenu_item_data
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x320.c MAINMENU_FLP_STYLE
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mmi_mainmenu_data_240x240.c s_mainmenu_item_data

// menu--main
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mainmenu_win.c  HandleMainMenuWinMsg
// menu--second
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mainmenu_win.c  HandleSecMenuStaticMsg
MS_MMI_Main\source\mmi_app\app\mainmenu\c\mainmenu_win.c  3353

// menu--tools
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_128x128.c  MAINMENU_ONE_ICON_ONE_PAGE_STYLE
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x128.c GUIMENU_ITEM_T^menu_icon_tools
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_128x160.c GUIMENU_ITEM_T^menu_icon_tools
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_176x220.c GUIMENU_ITEM_T^menu_icon_tools
ms_mmi_main\source\mmi_app\common\c\mmi_menutable_240x320.c GUIMENU_ITEM_T^menu_icon_tools

// menu--palyer
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_icon_player
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_icon_player
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_icon_player

// menu--settings
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_128x128.c  GUIMENU_ITEM_T^menu_settings_icon
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_176x220.c  GUIMENU_ITEM_T^menu_settings_icon
MS_MMI_Main\source\mmi_app\common\c\mmi_menutable_240x320.c  GUIMENU_ITEM_T^menu_settings_icon
// menu--settings(107)
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_menutable.c  GUIMENU_ITEM_T^menu_set_phone


// menu img
MS_MMI_Main\source\mmi_ctrl\source\Menu\c\ctrlmenu_popup.c  check_unsel_img
MS_MMI_Main\source\mmi_ctrl\source\Menu\c\ctrlmenu_sec.c   check_unsel_img



[1.4] dial
// Open
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_mstyle.c  MMIAPIIDLE_OpenDialWin
// dial
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_dial.c  MMIAPIIDLE_EditDialWin
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_dial.c  HandleDialWinMsg


// display--分行--平均行间距 
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  void^DisplayTextString
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_display.c  BIG_DIAL_NUM
// display--分行--取消底部间距，相差1个像素刚好对齐
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetClientRect
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  976
// display--分行--拨号不计算行间距
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  uint16^BASEEDIT_GetLineHeight
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1023
// display--分行--拨号位置不下移
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  GUI_RECT_T^BASEEDIT_GetLineRect
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  1270
// display--分行--超位置
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  BASEEDIT_GetTopLineOffsetRange



// 智能拨号
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_dial.c  HandleDialWinMsg
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_dial.c  MMIAPIIDLE_SwitchEditDialWin
// icon
MS_MMI_Main\source\mmi_kernel\include\mmi_theme.h  BIG_DIAL_NUM

// 拨号光标
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseflex_cursor.c  void^BASEFLEX_DisplayCursor
// 拨号光标--set
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_highlight.c   void^BaseEditCtrlSetHighlight
// display--align
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit.c  CTRLBASEEDIT_SetAlign
// display--bg
MS_MMI_Main\source\mmi_ctrl\source\editbox\c\ctrlbaseedit_internal.c  BASEEDIT_DisplayBg



[1.5] test
// version
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenPhoneTestWin
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_main.c  UITESTWIN_OpenItemTestWin
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_main.c  MMIAPIENG_StartEngineerMenu
// version
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  ID_ENG_TEST_SW_VERSION
// imei
MS_MMI_Main\source\mmi_app\app\parse\c\mmiparse_dial.c  MMIAPIPARSE_ProcessImeiStr
// 		MMIAPIPHONE_OpenIMEIDisplayWin();

// Parse
MS_MMI_Main\source\mmi_app\app\idle\c\mmiidle_dial.c  MSG_NOTIFY_EDITBOX_UPDATE_STRNUM




// version
MS_MMI_Main\source\mmi_app\app\eng\c\mmieng_base.c   ShowVersionInfo
// version--save
MS_MMI_Main\source\mmi_app\app\eng\c\mmieng_base.c  MMIAPIENG_SaveTestResult


// 手机测试
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestMenuWinHandleMsg
// 手机测试--menu
MS_MMI_Main\source\mmi_app\app\eng\c\mmieng_menutable.c  menu_phone_test

// 单项测试
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGItemTestMenuWinHandleMsg
// 单项测试--menu
MS_MMI_Main\source\mmi_app\app\eng\c\mmieng_menutable.c  menu_phone_item_test

// 串行测试
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  BOOLEAN^MMIAPIENG_StartUITest

// 测试结果
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  MMI_RESULT_E^ENGUITestResultWinHandleMsg
MS_MMI_Main/source/mmi_app/app/eng/c/mmieng_uitestwin.c  int32^GetUITestResultInfo








[1.6] file
//
MMIFMM_OpenExplorerWin

// 
MS_MMI_Main/source/mmi_app/app/fmm/c/mmifmm_mainwin.c  MMI_RESULT_E^HandleUdiskChildWindow
MS_MMI_Main/source/mmi_app/app/fmm/c/mmifmm_mainwin.c  1528

//
MMIFMM_CombineFullFileName

//
MS_MMI_Main/source/mmi_service/export/inc/mmisrvfmm_export.h  MMIMULTIM_DIR_MOVIE

//record
UpdateRecordFilePath(record_win_data_ptr);



[1.7] Setting
//
HandleSetLanguageInputContentWindow 	 //输入语言
//设置-情景模式
PromptSuccessWin
//
MS_MMI_Main/source/mmi_app/app/setting/c/mmiset_phonewin.c  MMISET_INPUT_RESET_FACTORY_PWD_WIN_TAB


head:Set,mmiset_wintab.c
item:Set,mmiset_wintab.c
item:set,mmiset_displaywin.c
//


// Reset
//
HandleInputResetFactoryPwd
MMIENVSET_ResetEnvSetSetting();//
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_func.c
//
//MMISET_CleanUserData();


// sos
MMK_CloseWin

// set--phone--time
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_datetime.c  HandleSetTimeDateWindow

// sec--pin
HandlePinInputExceptPhone


[1.8] sms
// Enter
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_mainmenuwin.c  MMISMS_EnterSMSMainMenuWin
// Main
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_mainmenuwin.c  HandleSmsMainMenuWinMsg
// option
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_editsmswin.c  HandleEditMenuWinMsg
// option--save  APP_MN_SMS_MEM_FULL_IND
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_editsmswin.c  EditSMSWin_SaveSMS

### 来短信
MS_MMI_Main\source\mmi_app\app\sms\c\mmismsapp_main.c  MMI_RESULT_E^HandlePsMsg
MS_MMI_Main\source\mmi_app\app\sms\c\mmismsapp_main.c  case^APP_MN_SMS_IND


//
mmismsapp_wintab.c

// sms
HandleEditSmsWinMsg


// sms--box
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_messageboxwin.c  HandleMsgBoxMainWindow
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_messageboxwin.c  4506
// sms--box--mt
MS_MMI_Main\source\mmi_app\app\sms\c\mmisms_messageboxwin.c  HandleMtBoxChildWinMsg
// sms--box--unread
MS_MMI_Main\source\mmi_app\app\sms\c\mmismsapp_order.c  MMISMS_ListSmsFromOrder

// add data 
FormListBoxItem



[1.9] call

// 销毁softkey？
MMK_DestroyControl(MMICC_CONNECTED_STATE_LABEL_CTRL_ID);

//
mmicc_wintab.c
// ui--font
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c MMI_CALL_NAME_FONT
// ui--label(默认)
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c CC_MAIN_INFO_COMMON_LABEL_TOP_MARGIN
// ui--softkey(大屏)
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c LRBUTTON_WIDTH
// ui--icon 59 47 181 169
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 24908
// ui--icon 105 17
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 13839
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 23750
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 23839

// T107
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab.c  MMICC_UpdateCallStatusDisplay



// 流程--来电-MT，
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c  case^APP_MN_SETUP_IND
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c  void^CC_CallAlertingInd
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c  void^CC_CallSetupInd
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_OpenMtCallWin  
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MT_CALLING_WIN_TAB  MMICC_ANIMATION_WIN_ID

### 小屏
// label--name, num
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  380
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  9038
// anim--pad--小屏无效
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  9453

### 大屏
// label--sim, state
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8085  sim, state
// label--time
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8272  time
// label--name, num
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8330  name
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8454  num
// label--num
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  8454  num


// 流程--去电-MO，
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_UpdateCallStatusDisplay
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_HandleCcWinMsg
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MO_CONNECTED_WIN_TAB  MMICC_STATUS_WIN_ID


// 流程--挂断 DIS
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  HandleFlipDown  MSG_KEYDOWN_FLIP
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c 4345
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CC_HandleDisconnectWinMsg
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_OpenDisconnectWin  

MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MENU_WIN_ID
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_CALLLIST_WIN_ID
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_PROCESSING_WIN_ID
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_ANIMATION_WIN_ID
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_ADJUSTVOLUME_WIN_ID

MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_HOLDMENU_WIN_ID
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_STATUS_WIN_ID
//MS_MMI_Main\source\mmi_app\app\cc\c\.c  MMIIDLE_DIAL_MENU_WIN_ID
//MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c MMICC_CALL_WAIT_INDICATOR_WIN_ID
//MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c MMICC_ANIMATION_WIN_ID
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c 20008


// 流程--接听
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_main.c  MSG_KEYUP_FLIP  CCApplet_HandleEvent


// 112
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  MMICC_MENU_EMERGENCY_OPT_WIN_TAB  


// 多卡通话
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  CustomShowMultiCallList
// 多卡通话--name + num
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  6477
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  6514
// 多卡通话--num
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_wintab_custom.c  6541


//
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_app.c MMICC_HandlePsMsg
// DISCONNECTED
//   APP_MN_CALL_DISCONNECTED_IND


//
//MMICC_VibrateForConnectPrompt


	
[1.10] pb, cl
// enter
ms_mmi_main\source\mmi_app\app\pb\c\Mmipb_view.c  MMIPB_MAIN_WIN_ID

// MEM
//MMIPB_MEMDETAIL_WIN_TAB
//
//TXT_COMMON_DETAIL_MEMORY
//
ms_mmi_main\source\mmi_app\app\pb\c\Mmipb_menu.c  PB_OPTMENU_NODE_USED_SPACE

// style-1(107) enter
ms_mmi_main\source\mmi_app\app\pb\c\Mmipb_set.c
ms_mmi_main\source\mmi_app\app\pb\c\Mmipb_view.c  HandleEntryListWinMsg
ms_mmi_main\source\mmi_app\app\pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_TAB_WIN_TAB
// style-2
ms_mmi_main\source\mmi_app\app\pb\c\Mmipb_view.c  MMIPB_ENTRY_LIST_WITH_SEARCH_WIN_TAB


// pb-search
MS_MMI_Main\source\mmi_app\app\pb\c\mmipb_view.c  HandleEntryListWithSearchWinMsg
MS_MMI_Main\source\mmi_app\app\pb\c\mmipb_view.c  13437
// 	GUIEDIT_SetStyle(editor_ctr_id,GUIEDIT_STYLE_SINGLE_DYN_DOWN);
//  CTRLBASEEDIT_SetDeActiveBorderColor(win_id, edit_id, MMI_DARK_WHITE_COLOR);

// 调整高度:
//	GUIFORM_SetChildHeight(form_ctr_id, editor_ctr_id, &editor_child_height);

// empty:
//	CTRLLIST_SetEmptyInfo

// pb-edit
MS_MMI_Main\source\mmi_app\app\pb\c\mmipb_menu.c  MMI_RESULT_E^HandleContactAddEditWinMsg
// 	GUIEDIT_SetStyle(first_name_ctr_id,GUIEDIT_STYLE_MULTI_DYN_DOWN);


// pb-list-search
MS_MMI_Main\source\mmi_app\app\pb\c\mmipb_view.c  void^HandleMainReloadMsg
// pb-list-delete
MS_MMI_Main\source\mmi_app\app\pb\c\mmipb_view.c  void^HandleOperateReloadList




// cl--menu
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_menutable.c GUIMENU_ITEM_T^menu_cl


// cl deltail
ms_mmi_main\source\mmi_app\app\cl\c\Mmicl_custom_wintab.c   InitLogListDetailContactItem
// cl deltail--调显示位置
MS_MMI_Main/source/mmi_app/app/cl/c/mmicl_custom_wintab.c  AppendLogListDetailItem
// cl list--(107)
MS_MMI_Main\source\mmi_app\app\cl\c\mmicl_wintab.c   AppendLogListItem

// str
InitPdaCallLogListCtrl        CallLog






[1.11] camera
// Win
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_main_wintab.c  MMI_RESULT_E^HandleCameraWinMsg
// softkey
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  MMIDC_DisplaySettingTip
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  void^MMIDC_DisplayString
// sizelist
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  DisplayIconString
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_guiiconbar.c  DisplayIconSize
// Show
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_full_osd_display.c  ShowAllOSD


//option 
ms_mmi_main\source\mmi_app\app\camera\c\Mmidc_osd_option.c  MMIDC_OpenVideoOption
// menu
//		InitRunningParameter
//		MMIDC_OpenPhotoOption
//		MMIDC_OpenVideoOption
//		MenuDisplayAndTP
//		OpenDCModeMenu
// switch
//		SetVideoMode
//		SetPhotoMode

// key
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_main_wintab.c  KeyFunction
//		LSDCPreview
//		LSDVPreview
//		LeftDCPreview
//		LeftDVPreview
//		RightDCPreview
//		RightDVPreview
//DC
//		GetPhonePhotoSizeList


// LCD_ANGLE_90
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_main_wintab.c  755
MS_MMI_Main\source\mmi_app\app\camera\c\mmidc_setting.c  3682


//Camera分辨率:
Camera闪光灯:








[1.12] pic
// enter
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\mmipicview_list.c HandlePicListWinMsg
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\mmipicview_list.c 696
//
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\mmipicview_wintab.c HandlePiclistOptWinMsg
//
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\mmipicview_wintab.c HandlePreviewOptWinMsg
// zoom
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\mmipicview_zoom.c  HandlePicZoomWinMsg
// title
MS_MMI_Main\source\mmi_ctrl\source\IconList\c\ctrliconlist.c  void^DisplayDelimiter
MS_MMI_Main\source\mmi_app\app\pic_viewer\c\mmipicview_list.c  MMIPICVIEW_TITLE_COLOR



[1.13] record
// enter
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_common_wintab.c  HandleRecordMainPlayWinMsg
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  MMIRECORD_MAINPLAY_WIN_CTRL_TAB
//	MMK_CreateCtrlByWinTabEx(win_id, MMIRECORD_MAINPLAY_WIN_CTRL_TAB);
//
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c  HandleRecordMainPlayWinMsg
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c  408
// anim
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  anim_frame_red
// pos(time, anim)
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  1600
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  544
// stop
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  DisplayProgress
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  DisplayRecordAllBG
// Update(107)
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_barphone_wintab.c  MMIRECORD_UpdateScreen


//time
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_0  

// bg
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_NUMBER_BG			  
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_COMMON_BG			
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_PDA_BG   
// bg-w
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_RECORD_BG   
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BK_BG  
// anim
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_BG_ANIM_FRAME_1		  
MS_MMI_Main\source\mmi_app\app\record\c\mmirecord_wintab.c IMAGE_RECORD_PLAY_BTN_UNSEL  








[1.14] fm
//Display:
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  void^DisplayMainWindow
//Record
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmRecordMsg
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordAction
//Record test
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFMCustomRecordActionTest


//opt
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^^HandleFmChannelOptionMsg
//opt--action
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMAction
	
// 所有set channel
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_SetCurrrentChannel


//set
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomSettingWinMsg
//set edit
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomEditBoxWinMsg
// file: Music/FM Radio clips/Radio___J-001.wav

	

	
//新功能:
//struct
//MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  case^MMIFM_CUSTOM_ONOFF
//MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  uint32^s_fm_custom_channel_play_opt_item
//channel list
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelListWinMsg
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  void^ReadCustomOpenChannelsListBox
//channel list sel
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleCustomChannelSelectListWinMsg
//channel opt
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmCustomChannelOptionMsg
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  void^CreateCustomChannelOptionMenu
//channel Action
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  void^HandleFMCustomAction
	

//旧功能:
//option
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainOptionMsg
//channel list
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleChannelListWinMsg
//Handle
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMI_RESULT_E^HandleFmMainMsg
//  Headset
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  MMIFM_HandleHeadsetButtonAction
MS_MMI_Main\source\mmi_app\app\fm\c\mmifm_wintab.c  void^MMIFM_HandleHeadsetAction



[1.15] fmm

//
MS_MMI_Main\source\mmi_app\app\fmm\c\mmifmm_mainwin.c HandleFmmMainWinMsg
MS_MMI_Main\source\mmi_app\app\fmm\c\mmifmm_mainwin.c HandleMenuOption
// record
MS_MMI_Main\source\mmi_app\app\fmm\c\mmifmm_mainwin.c HandleRecordListWinMsg

//FILE
MMIFMM_HandleOpenFileWin



[1.16] vp
// time
MS_MMI_Main/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  5788
// set param
MS_MMI_Main/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  8053


// Short
MS_MMI_Main/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  HandleShortCutMsg
// Opt
MS_MMI_Main/source/mmi_app/app/videoplayer/c/mmivp_wintable.c  HandleOptMenuWinMsg




MMIAPMAINWIN_Enter


[1.17] mp3
// enter-- 
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  MMIAPMAINWIN_Enter
// enter-- draw
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  HandleMp3PlayWinMsg
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  2428
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  MMIMP3_DisplayProgress
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  450
// enter--mini
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  HandleMiniDefaultWinMsg
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  MMIMP3_PLAY_WIN_TAB_V
// enter--pda
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main_pda.c  HandlePDADefaultWinMsg
// enter--play/pause
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  void^MMIMP3_DisplayButton

// 
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main.c  HandleMainWinOpenMsg
// 
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  MMI_MUSIC_NEW_STYLE
// pos--progress
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_common.c  progress_groove_rect
// pos (只跑一次)
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiapwin_main_mini.c  435

// bg play
MS_MMI_Main\source\mmi_app\app\audioplayer\c\mmiap_play.c  MMIAPIMP3_ResumeMp3


[1.18] alarm
# Enter
// Enter
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c WINDOW_TABLE(^ALARM_EDITWIN_TAB )
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^^HandleAlarmEditWinMsg
MS_MMI_Main\source\mmi_app\app\accessory\h\mmialarm_position.h
//新功能:
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c MMI_RESULT_E^HandleAutoPowerOnOffWinMsg



# 模拟
// key Headset
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultHeadsetDetect
//    case KEY_LONG_RELEASED:
//			MMIAPIALM_StartAlarm(0, 0);

// key Headset 不亮屏
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  BOOLEAN^DefaultBackLight
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  1825
//            //MMIDEFAULT_TurnOnBackLight();
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  void^MMK_HandlePublicKey
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  4147
MS_MMI_Main\source\mmi_app\kernel\c\mmi_default.c  4133
//            //MMIDEFAULT_TurnOnBackLight();
// 
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  5568
//			MMIDEFAULT_TurnOnBackLight();
//


// 修改匹配
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^MMIALM_GetArrivedEvent
//
//        if (cur_event_ptr->is_valid &&
//            cur_event_ptr->is_on &&
//            TRUE ) // IsMatchEvent(cur_date, cur_time, cur_event_ptr) )

//
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^MMIAPIALM_StartAlarm

//
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  BOOLEAN^OpenAlarmExpiredWin

// 背光延迟
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  void^OpenAlarmAliveWin
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  8835

//
MS_MMI_Main\source\mmi_app\app\accessory\c\mmialarm.c  MMI_RESULT_E^HandleEventAliveWinMsg

//
MS_MMI_Main\source\mmi_app\common\c\mmi_pubwin.c  5352

	

[1.19] calc
// draw
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalc_main.c  void^CalcRefreshContent
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalc_main.c  void^InitButtonFont

// Win
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalc_main.c  MMI_RESULT_E^HandleCalcWinMsg



[1.20] calendar
// draw
MS_MMI_Main/source/mmi_app/app/accessory/c/mmicalendar_main.c  MMI_CALENDAR_CHINESE_JIEQI
MS_MMI_Main/source/mmi_app/app/accessory/c/mmicalendar_main.c  DrawMonthCalendar
// pos
MS_MMI_Main/source/mmi_app/app/accessory/h/mmiacc_position.h 128X128

// Win
// main
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarWinMsg
// opt
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalendar_main.c MMI_RESULT_E^HandleCalendarOptionWinMsg
// opt--go to
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalendar_main.c MMIAPICALEND_OpenCalendarQueryByDate
// list-opt
//MMK_CreateWin((uint32 *)SCH_LIST_OPTION_WIN_TAB, (ADD_DATA)detail_win_param);

//draw:
MS_MMI_Main\source\mmi_app\app\accessory\c\mmicalendar_main.c
MS_MMI_Main\source\mmi_app\app\accessory\c\mmischedule.c



[1.21] 


[1.22] 

//snake:
//square:
//Initlabel
	

[1.23] bt
//mmibt_wintab.c
//MMIAPIBT_AppInit

// 蓝牙自动测试优化
MS_Ref/source/autotest_device/src/autotest_device.c  1904
//		Is_BTSearchStart = SCI_FALSE;      //+
//        BT_CancelSearch();  // add by unisoc 2020        


//bt
// auto/menu CON
//	CON:A2DP:a-8,CallBack:8-12
//	CON:A2DP:9-8,
//	CON:A2DP:ID_STATUS_AVRCP_CONNECT_COMPLETE,CallBack:ID_STATUS_HFAG_HFU_CLCC
//	CON:A2DP:ID_STATUS_A2DP_CONNECTED,
//	// menu DIS
//	DIS:A2DP:a-9,CallBack:1-5
//	DIS:A2DP:ID_STATUS_AVRCP_DISCONNECT_COMPLETE,CallBack:ID_STATUS_CM_VISIBLE_RES
//	// menu DIS
//	DIS:A2DP:9-9,CallBack:1-5
//	DIS:A2DP:ID_STATUS_A2DP_DISCONNECTED,CallBack:ID_STATUS_CM_VISIBLE_RES




[1.24] env
### idle switch


// 实际来电铃声  ---------------- 	++++++
MMISRVMGR_Request

//type new
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 6220
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 6353


//ring--key--4-1-N 才能播放
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_ring.c 1736 PlayRing
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_ring.c 5377 MMIAPISET_PreviewRing
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_ring.c 1391 PlayFixedRing
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 4102	Save
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 3993	换TYPE
//	MMIAPISET_SetCurRingType
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 6456   KEY_ID
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 6432	WIN_ID
//	ring id:
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 5084    GetRingID



//vib--one
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 1403	  --vib
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 3915	  --timer


//env main
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c  1395
//vib list
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 6398
	


//play--type
MMIENVSET_PlayRingByListItem
//play--vib
MMIENVSET_PlayMsgAlarmRingByListItem
//play--tone
MMIAPISET_PlayCallRingByVol


//vol--alert
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 822
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 8886

//call type
//msg type
//keypad 
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 3695
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 3966 


//call ring1
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 608
//call ring2 --ring
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 924
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 988 ++vol


//msg ring
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 322
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_wintab.c 812

//keypad 
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 4148
	

//vol
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 4909

MMK_CreateWin



// bak--不用
//env main
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c MMIENVSET_MAIN_MENU_WIN_TAB
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 1910 handle


//opt
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 1400
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 1480


//	set edit
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset_wintab.c 2862


//	nv
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 6730
// item
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 3300
// def nv
MS_MMI_Main\source\mmi_app\app\envset\c\mmienvset.c 1680


project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_CALL_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_MSG_RING
project\H9_KLS_F4\resource\mmienvset_internal.h MMISET_OTHER_RING1



[1.25] 






[1.26] 



[1.27] Browser 网络参数
// enter
MS_MMI_Main\source\mmi_app\app\browser\c\mmibrowser_wintable.c  MMI_RESULT_E^BrwHandleStartPageWinMsg
//
//BrwHandlePopMenuWinMsg

### 打开存储设置
MS_MMI_Main\source\mmi_app\app\browser\c\mmibrowser_func.c  MMIBROWSER_IsOnlyChooseStorage
//   BOOLEAN is_only_storage = FALSE;


[1.28] sos
// sos--
MS_MMI_Main\source\mmi_app\app\setting\c\mmiset_sos.c  HandleSOSMessageEditBoxWinMsg


// 亲情号码
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_speeddial.c  HandleSpeedDialSettingsWinMsg
// 亲情号码--编辑
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_speeddial.c  CC_HandleSpeedDialListWinMsg
// 亲情号码--编辑--num
MS_MMI_Main\source\mmi_app\app\cc\c\mmicc_speeddial.c  CC_HandleSpeedDialEditWinMsg










[1.29] startup
// Start
MS_MMI_Main\source\mmi_app\app\phone\c\mmiphone_onoff.c  MMI_RESULT_E^HandleNormalStartupWindow





[1.30] 
	





