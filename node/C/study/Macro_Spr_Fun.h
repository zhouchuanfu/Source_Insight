
////////////////////////////////////////
Mmimain.c (ms_mmi\source\mmi_app\kernel\c)
  1T APP_Task

Mmk_msg.c (ms_mmi\source\mmi_kernel\source\c)
  2L MMK_DispatchWinMSG
  2L MMK_SendMsg
  2R MMK_DispatchExtSig
  2R MMK_DispMsgToFocusWin
  2R DispatchExt (KPD、timer) 
  2R DispatchMSGQueue
  3T MMK_DispatchToHandle
  5R MMK_DispMsgToWin (拦截) 

Mmicalendar_main.c (ms_mmi\source\mmi_app\app\accessory\c)
  2R MMIAPICALEND_OpenMainWin

Mmk_kbd.c (ms_mmi\source\mmi_kernel\source\c)
  3T MMK_DispatchMSGKbd (动作) 
  4R HandleMSGKbd (层) 

[ timer ]
  3T[ timer ] 处理

Mmk_window.c (ms_mmi\source\mmi_kernel_sys\source\c)
  3T MMK_CreateWin
  4L CreateControl、draw组、细化
  5L MMK_OpenWin
  5L MMK_UpdateScreen
  7L NodeConstruct、抽取、时间
  8L CreateControl、参数处理
  4R MMK_RunWinProc(p)            # 界面前一步(61473)
  4R MMK_ProcSpecialWinMsg@       # UpdateScreen
  4R MMK_DefaultProcessWinMsg     # 方向键
  4R MMK_RunCtrlProc(p)
  4R MMK_ProcOpenWinMsg
  9B TableCreate
  11B IMG_RES_Display_Img

[ guistatusbar ] 
  5L[ guistatusbar ] Message

[ mainapp ]
  5R[ mainapp ]HandleIdleMsg

Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
  5R MenuHandleMsg

Mmimenu_samsung.c (ms_mmi\source\mmi_app\app\menu\c)
  5R HandleSamsungMainMenuWinMsg
  5R SAMSUNG_HandleSelectItem

Mmicalendar_main.c (ms_mmi\source\mmi_app\app\accessory\c)
  5R HandleCalendarWinMsg

[ cstyle ]
  2R[ cstyle ]CommonHandleMsg

Guimenu.c (ms_mmi\source\mmi_gui\source\menu\c)
  6R HandleMenuDirectionKey
  3T[ menu ]ResetIconDisplay
  9B DisplayActiveIcon    # 显示菜单项图标
  4R[ menu ]DisplayBg
  8R[ menu ]DisplayBg

Mmimenu_icon.c (ms_mmi\source\mmi_app\app\menu\c)
  7R HandleMenuLeftKey
  8R HandleMenuDirectionKey

Mmk_applet.c (ms_mmi\source\mmi_kernel_sys\source\c)
  4L MMK_CreateWinTable
  4L AppletCreateWindow
  4L[ applet ] Proc--Msg
  4L MMK_ProcSpecialAppletMsg

Mmk_tree.c (ms_mmi\source\mmi_utility\c)
  4L MMK_DispatchToAllTreeNode
  5L TreeNodeNew、更新请求
  6L MMK_AddTreeNode、更新电量、信号 、ctrl_area
 
Mmi_modu_main.c (ms_mmi\source\mmi_app\kernel\c)
  5R[ modu ]GetLabelImage

Guititle.c (ms_mmi\source\mmi_gui\source\title\c)


Mmicalendar_main.c (ms_mmi\source\mmi_app\app\accessory\c)
  6R DrawMonthCalendar
  7R DrawBackground
  7R DrawMonthTitle
Guiwin.c (ms_mmi\source\mmi_gui\source\win\c)
  7R GUIWIN_SetSoftkeyTextId 
Guisoftkey.c (ms_mmi\source\mmi_gui\source\softkey\c)
  10R GetTextFont
  10R GetButtonWidth
  10R DrawButtonContent
  9B DrawAllButtons
  9B DrawSoftkeyBg
  9B CalSoftkeyRect
  8R DrawSoftkey
  7R GUISOFTKEY_SetTextId
Guistring.c (ms_mmi\source\mmi_gui\source\string\c)
  8R GUISTR_DrawTextToLCDInRect 
Mmi_theme.c (ms_mmi\source\mmi_app\app\theme\c)
  7R MMITHEME_GetResText
  7R MMITHEME_GetSoftKeyTextFont
  7R MMITHEME_DisplayCommonBg
Guicommon.c (ms_mmi\source\mmi_gui\source\common\c)
  7R GUI_CalculateStringPiexlNum
  10R GUI_DisplayBg
Guires_img.c (ms_mmi\source\mmi_gui\source\res\c)
  9B DisplayImg
  8R GUIRES_DisplayImg
Mmi_resource.c (ms_mmi\source\mmi_app\kernel\c)
  10B 7R GetNorImage        # 显示图片
  6R[ resource ] GetImage
  10B GetModuleDataAddr
  9B GetText    # module + txtTable + lang + index
  8R MMIRES_GetText
Dal_img.h (ms_ref\export\inc)
  11B IMG_RES_Display_Img


/////////////////////////////////////////////////////////////////
1T ,2L ,2R ,3T ,4L ,4R ,5L ,5R ,6L,6R ,7L ,7R ,8L ,8R ,9B ,10L ,10R ,11B
9B[ guistatusbar、guimenu、guibutton、] Construct
10L[ parse ] 参数类 (预解析) 
7L[ parse ] 抽取参数
10L[ mmitheme ]
10L[guimenu]InitStaticMenu
7L[icon]AddItem、

9B、预处理、显示方式 (IMG，数字) 
10R、参数  (左右对齐) 
8R 、具体IMG、参数、单个数字

9B 显示方式 (BMP、JPG)  
10L 尺寸、单个数字














>>>具体：
分隔：[ main ] task
名牌：[ msg ] DispatchWinMSG
契约：[ msg ] DispatchExt (KPD、timer) 、[ msg ] DispatchMSGQueue
补偿：[ kbd ] DispatchMSGKbd (动作) 、    [ timer ] 处理

感觉：[ kbd ] HandleMSG (层) 、     [ win ]WinProc(p)、        [ win ]CtrlProc(p)
满意：[ msg ] DispMsgToWin (拦截) 、[ mainapp ]HandleIdleMsg、 [ guimenu ]MenuHandleMsg
契约：[ msg ] DispMsgToFocusWin、  [ cstyle ]CommonHandleMsg、[ menu ]Key
补偿：[ msg ] DispatchToHandle、 
 
比较：[ applet ] CreateWindow、[ applet ] Proc--Msg、 [ tree ] DispatchNode
匹配：[ win ] OpenWin、        [ win ] UpdateScreen、 [ guistatusbar ] Message
名牌：[ msg ] SendMsg
补偿：[ msg ] DispatchToHandle

>>>中介：
补偿：[ win ] CreateWin
比较：[ applet ] CreateWindow、[ win ] CreateControl、draw组、细化
匹配：[ tree ] NodeNew、更新请求
编码：[ tree ] AddTree、更新电量、信号 、ctrl_area
试错：[ win ] NodeConstruct、抽取、时间
比较：、更新哪一张、哪一位 (数字) 、更新某一条
回馈：

补偿：[ menu ]ResetIconDisplay、[ menu ]DisplayActiveIcon
感觉：[ menu ]DisplayBg
满意：[ modu ]GetLabelImage
关联：[ resource ] GetImage
尝试：[ resource ] GetNorImage
感觉：[ menu ]DisplayBg
回馈：[ guires_img ] DisplayImg

>>>抽象：
回馈：[ win ] TableCreate、[ guistatusbar、guimenu、guibutton、] Construct
约束：[ parse ] 参数类 (预解析) 、[ mmitheme ]、[guimenu]InitStaticMenu
试错：[ parse ] 抽取参数、[icon]AddItem、
比较：[ win ] CreateControl、参数处理

回馈： 、预处理、显示方式 (IMG，数字) 
放任： 、参数  (左右对齐) 
尝试：
感觉： 、具体IMG、参数、单个数字

回馈：显示方式 (BMP、JPG)  
约束：尺寸、单个数字
放任： 
合并：IMG_RES_Display_Img
 
 







