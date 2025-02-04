

H30E 电池电压实测结果：
3.29V 无反应
3.30--3.41V 关机
3.42--3.50V 0格 并提示低电（3.419--3.5）
3.51--3.68V 0格（3.51 --3.679）
3.69--3.86V 2格（3.687--3.859）
3.87--3.95V 3格（3.87 --3.95）
3.96--4.14V 4格（3.96---）



// 
SPDE_PRJ/F55U_H30E_BIHEE/nvitem/ProductionParam_uix8910.nvm  dischg_bat_tab
// 0x1036--4150
SPDE_PRJ/F55U_H30E_BIHEE/nvitem/ProductionParam_uix8910.nvm  dischg_bat_tab\[0\]





电池百分比和电池格数关系（6张图）：
90-100%：图片5
70-90%：图片4
50-70%：图片3
30-50%：图片2
10-30%：图片1
  0-10%：图片0

电池曲线：
T107在nv文件production_param_T.xml中 dischg_bat_tab 中
<ITEM name="dischg_bat_tab[0]" value="0x1031" desc="4.145V capacity 100%"/>
<ITEM name="dischg_bat_tab[1]" value="0xFDC" desc="4.060V capacity 90%"/>
<ITEM name="dischg_bat_tab[2]" value="0xF8C" desc="3.980V capacity 80%"/>
<ITEM name="dischg_bat_tab[3]" value="0xF3C" desc="3.900V capacity 70%"/>
<ITEM name="dischg_bat_tab[4]" value="0xF00" desc="3.840V capacity 60%"/>
<ITEM name="dischg_bat_tab[5]" value="0xED8" desc="3.800V capacity 50%"/>
<ITEM name="dischg_bat_tab[6]" value="0xEB0" desc="3.760V capacity 40%"/>
<ITEM name="dischg_bat_tab[7]" value="0xE92" desc="3.730V capacity 30%"/>
<ITEM name="dischg_bat_tab[8]" value="0xE74" desc="3.700V capacity 20%"/>
<ITEM name="dischg_bat_tab[9]" value="0xE42" desc="3.650V capacity 15%"/>
<ITEM name="dischg_bat_tab[10]" value="0xE10" desc="3.600V capacity 5%"/>
<ITEM name="dischg_bat_tab[11]" value="0xDAC" desc="3.500V capacity 0%"/>
注意：10%这一档是没有的。

低电量报警电压和低电关机电压：
1、目前代码中原有的报警机制是遇到15% 10% 5%电量各会弹框一次；
2、目前原有的低电关机机制是遇到0%，调用关机函数；
3、如何调整两个电压，由于不确定是否和nv中的参数有关，除了在电池曲线的0,5,15，20做调整，nv里的两个值最好也调整下。
<ITEM name="voltage_warning" type="uint16" varname="voltage_warning" value="0xD7A" desc="the warning voltage"/>
<ITEM name="voltage_shutdown" type="uint16" varname="voltage_shutdown" value="0xD34" desc="the shutdown voltage"/>
4、根据金国威的需求，做了一种低电报方式，还在验证中，暂没有全部开，JGW_BAT_LOW_WARNING_MODE。
0%设置为关机电压，%5设置为报警电压。
当5%以下时，间隔十分钟弹一次报警框。

充电器限制电流参数：
电流值不能随便设置，是固定大小的
#define CHARGER_CURRENT_300MA 300
#define CHARGER_CURRENT_350MA 350
#define CHARGER_CURRENT_400MA 400
#define CHARGER_CURRENT_450MA 450
#define CHARGER_CURRENT_500MA 500
#define CHARGER_CURRENT_550MA 550
#define CHARGER_CURRENT_600MA 600
#define CHARGER_CURRENT_650MA 650
#define CHARGER_CURRENT_700MA 700
#define CHARGER_CURRENT_750MA 750
#define CHARGER_CURRENT_800MA 800
#define CHARGER_CURRENT_900MA 900
#define CHARGER_CURRENT_1000MA 1000
#define CHARGER_CURRENT_1100MA 1100
#define CHARGER_CURRENT_1200MA 1200
#define CHARGER_CURRENT_MAX 1300
<ITEM name="standard_current_type" type="uint16" varname="standard_current_type" value="0x12C" desc="standard adapter charge current,400mA,600mA,700mA,800mA,1000mA,1100mA,1200mA Please be very careful to use larger than 800mA."/>标准充电器电流限制
<ITEM name="nonstandard_current_type" type="uint16" varname="nonstandard_current_type" value="0x12C" desc="only sc8800g support this item"/>非标充电器电流限制

充电截止电流参数（nv值不确定是否起作用）：
<ITEM name="charge_end_current" type="uint16" varname="charge_end_current" value="0x78" desc="when charge current &lt; this value and voltage &gt; recharge_voltage will shutdown charge"/>












