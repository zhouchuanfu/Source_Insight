

 

13.list控件

CREATE_LISTBOX_CTRL

需要指定layout，type和ID


GUILIST_SetMaxItem

GUILIST_RemoveAllItems

GUILIST_SetNumberListStartIndex


AppendListItemByTextId


14.Lable控件

GUILABEL_SetText


15.资源

添加资源，先添加应用程序模块，然后添加各个资源。

资源文件在路径：MS_MMI\source\resource下面，里面有各个屏幕尺寸的文件夹。 16.

我首先创建了一个窗口，这个窗口包含一个编辑控件。

在窗口的处理函数中调用了“编辑输入函数”。

可是我在按下“返回”时，却无法退出该窗口，请高手帮我啊。谢谢了。

case MSG_OPEN_WINDOW: //打开窗口的消息

MMI_GetLabelTextByLang(TXT_LANPENG_TITLE,&string);//获取编辑文本的语言 GUIEDIT_SetString(ctrl_id,string.wstr_ptr,string.wstr_len);//设置所编辑的字符串:包括

汉字、数字等等。

MMK_SetAtvCtrl(handle_id,ctrl_id);

break;

打开窗口后，就执行以下两个函数: MMI_GetLabelTextByLang(TXT_LANPENG_TITLE,&string);//获取编辑文本的语言

GUIEDIT_SetString(ctrl_id,string.wstr_ptr,string.wstr_len);//设置所编辑的字符串:包括汉字、数字等等。

可是我按“返回键”一直无法退出。

请问怎么解决啊。谢谢了。case MSG_APP_CANCEL: //返回键 MMK_CloseWin(handle_id);

break;

修改为

case MSG_APP_CANCEL: //返回键

case MSG_CTL_CANCEL:

MMK_CloseWin(handle_id);

break;


MSG_APP_CANCEL返回键被编辑控件接手发MSG_CTL_CANCEL消息被当前的窗口处理

17.今日日程

MMIIDLE_DisplaySchedule

OutputIdleWinCalendar

18.调试

九宫格消息处理函数：

HandleMainMenuWinMsg：注意在mainmenu_win.c中


通话记录：

ID_COMMUNICATION_CL


模拟器：

mmimain.c文件中的APP_Task是所有事件的入口


其中的MMK_DispatchExtSig会处理外部事件的。


创建窗口：

mmk_window.c中的MMK_CreateWin函数


闹铃：

MMIALM_OpenMainWin


18. 电话本

进入电话簿

HandleWaitAndEnterPBListWinMsg

HandleTabListParentWinMsg


GetPhoneCount

获取全部账户的个数


结构_MMIPB_PHONEBOOK_ENTRY_T用来表示每个数据条目。


19.窗口模板

在mmipub.h中声明


MMIPUB_OpenAlertSuccessWin

popup窗口


wait窗口

MMIPUB_OpenWaitWin


确认窗口

MMIPUB_OpenWaitWin

20. PDP

在mmk_regapp.def中注册消息回调，只有第一个注册会被执行，后面的不执行。

REG_APP(APP_MN_ACTIVATE_PDP_CONTEXT_CNF, APP_MN_ACTIVATE_PDP_CONTEXT_CNF, &g_baidu_app)


mmi_port.c文件会引用mmk_regapp.def，生成消息处理函数数组——g_reg_app，在

DispatchSysSig的过程中，如果消息msg的回调函数返回true，则停止遍历后面的函数，否则继续。

21 上网配置

如果想使用浏览器的配置，可以获取如下数据：

MMIBROWSER_GetSim：获得SIM

MMIBROWSER_GetNetSettingIndex：根据sim卡，获取对应的设置的index


然后就可以根据index，通过MMICONNECTION_GetLinkSettingItemByIndex来获取网络设置，这里面的index就类似于MTK中的account ID的概念。

22.图片

查找图片的跟踪函数（有时图片ID很难查找到）

GetImgInfo

23.unicode码

7.2.1 wchar

【含义】

定义unicode 字符的类型。

typedef uint16 wchar

7.2.2 MMI_STRING_T

【含义】

MMI_STRING_T 定义了MMI 使用的字符串的类型。

【定义】

typedef struct

{

wchar* wstr_ptr;

uint16 wstr_len;

}MMI_STRING_T;

【参数说明】

参数名称含义

wstr_ptr unicode 字符串的指针

wstr_len unicode 字符的个数( 注意, 不是内存的size! )

7.3 接口

7.3.1 MMIAPICOM_Wstrcpy

【函数原型】

PUBLIC wchar* MMIAPICOM_Wstrcpy(

wchar *dst,

const wchar *src

);

【函数功能】

将源字符串拷贝到目标字符串

【使用说明】

建议使用MMI 封装过的MMI_WSTRNTOSTR 函数.

7.3.2 MMIAPICOM_Wstrncpy

【函数原型】

PUBLIC wchar* MMIAPICOM_Wstrncpy(

wchar *dst,

const wchar *src,

size_t count

);

【函数功能】

将指定长度的源字符串拷贝到目标字符串

【参数说明】

dst [OUT]：目标字符串

src [IN]：源字符串

7.3.3 MMIAPICOM_Wstrcat

【函数原型】
PUBLICwchar*MMIAPICOM_Ws；wchar*dst,；constwchar*src；);；【函数功能】；将源字符串连接到目标字符串之后；7.3.4MMIAPICOM_Wstrncat；【函数原型】；PUBLICwchar*MMIAPICOM_Ws；wchar*dst,；constwchar*src,；size_tcount；);；【函数功能

--------------------------------------------------------------------------------

PUBLIC wchar* MMIAPICOM_Wstrcat(

wchar *dst,

const wchar *src

);

【函数功能】

将源字符串连接到目标字符串之后

7.3.4 MMIAPICOM_Wstrncat

【函数原型】

PUBLIC wchar* MMIAPICOM_Wstrncat(

wchar *dst,

const wchar *src,

size_t count

);

【函数功能】

将指定长度的源字符串连接到目标字符串之后

7.3.5 MMIAPICOM_Wstrcmp

【函数原型】

PUBLIC int MMIAPICOM_Wstrcmp(

const wchar *string1,

const wchar *string2

);

【函数功能】

将源字符串连接到目标字符串之后

【参数说明】

string1 [IN]：字符串1

string2 [IN]：字符串2

【返回值】

0: 字符串相等

-1: string1 字符个数较少

1:string2 字符个数较少

【使用说明】

7.3.6 MMIAPICOM_Wstrncmp

【函数原型】

PUBLIC int MMIAPICOM_Wstrncmp(

const wchar *string1,

const wchar *string2,

第3 篇提高篇

-467-

size_t count

)

【函数功能】

将源字符串连接到目标字符串之后

【参数说明】

string1 [IN]：字符串1

string2 [IN]：字符串2

count[IN]: 比较的字符个数

【返回值】

0: 字符串相等

-1: string1 字符个数较少

1:string2 字符个数较少

【使用说明】

7.3.7 MMIAPICOM_Wstrlen

【函数原型】

PUBLIC size_t MMIAPICOM_Wstrlen(

const wchar *str

);

【函数功能】

计算字符个数

【参数说明】

str [IN]：字符串

【返回值】

字符个数

【使用说明】

7.3.8 MMIAPICOM_StrToWstr

【函数原型】

-468-

PUBLIC wchar* MMIAPICOM_StrToWstr(

const char *src,

wchar *dst

)

【函数功能】

将ascii 字符串转换成unicode 字符串

【参数说明】

src [IN]：ascii 字符串

dst [OUT]：unicode 字符串

【返回值】

Unicode 字符串的指针

【使用说明】

建议使用MMI 封装过的MMI_STRNTOWSTR 函数.

7.3.9 MMIAPICOM_WstrToStr

【函数原型】

PUBLIC char* MMIAPICOM_WstrToStr(

const wchar *src,

char *dst

)

【函数功能】

将unicode 字符串转换成ascii 字符串.

【参数说明】

src [IN]：unicode 字符串

dst [OUT]：ascii 字符串

【返回值】

Ascii 字符串的指针

【使用说明】

第3 篇提高篇

-469-

仅限在ascii 字符范围内的unicode 字符串.有非ascii 字符, 函数会在非

ascii 字符处返回.

建议使用MMI 封装过的MMI_WSTRNTOSTR 函数.

7.3.10 GUI_GBToWstr

【函数原型】

PUBLIC uint16 GUI_GBToWstr(

wchar *wstr_ptr,

const uint8 *gb_ptr,

uint16 len

);

【函数功能】

将gb 字符串转换成unicode 字符串

【参数说明】

wstr_ptr [OUT]：unicode 字符串

gb_ptr [IN]：gb 字符串

len[IN]: gb 字符串的长度

【返回值】

Unicode 字符个数

【使用说明】

目前平台支持GB2312 和GBK 编码, GBK 在GBK_SUPPORT 宏

(gui.mk 中)打开时起效, GBK 向下兼容GB1212.

不支持的unicode 码以GB 0xA1A1 (中文全角空格)代替

7.3.11 GUI_WstrToGB

【函数原型】

PUBLIC uint16 GUI_WstrToGB(

uint8 *gb_ptr,

const wchar *wstr_ptr,

uint16 wstr_len

)

-470-

【函数功能】

将unicode 字符串转换成gb 字符串


1.1 ADN FDN SDN[转]

(2012-05-22 16:04:00)

转载▼

ADN Abbreviated dialing number

FDN Fixed dialer number

BDN Barred dialing numbers

LND Last number dialed


SDN Service dialing number


ADN(SIM 电话簿) 缩位拨号。数字 + #，然后按SNED键。

FDN(SIM 固定拨号) 固定拨号。当启用后，只能拨打所设置的号码，来电不受影响。需要输入PIN2码

MSISDN(SIM 保护号码)

EN(SIM 紧急号码)

LND(合成 ME 和 SIM 最后拨号)

MSD(SIM 未接听号码)

ME(ME 电话簿)

MT(合成 ME 和 SIM 电话簿)

LIC(ME 接听号码)

SDN (系统拨叫号码) 网络服务拨号。固化的用户不能编辑。


SIM卡中最多能存放的电话号码数量等于:AND+FDN+SDN

固定拨号


这个功能是为了在手机借给第三方的时候防止非授权使用的。即A用户把手机借给B用户，只限定B用户拨打A用户指定的号码，非指定的号码不能拨出，这个功能同时也适用于在集体条件下(比如放在集体宿舍充电)防止别人使用，而且不耽误来话，但是经过使用发现，SIM中的存储固定号码的空间太小了，普通的32K SIM卡只能存一个电话号码，动感地带32K SIM卡只能存两个号码，64K 大容量SIM卡也只能存两个。当启动固定拨号的时候，SIM卡电话簿被禁止访问，同时在电话簿里出现“FDN电话簿”，FDN里显示你设定的固定拨号的号码。这时，你无法拨出FDN以外的电话号码。

在启用(取消)这个功能和添加(更改、删除)FDN号码的时候需要用到PIN2


固定拨号功能让您设置话机的使用限制，当您开启固定拨号功能后，您只可以拨打存储的固

定拨号列表中的号码。固定号码表存放在SIM卡中。能否使用固定拨号功能取决于SIM卡类型以及网络商是否提供此功能
