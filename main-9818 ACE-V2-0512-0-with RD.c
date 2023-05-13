//#include <main.h>
#include <main20220823_ACE_V2.h>

#define Constant 4096/5000

#define Vda_EMS_Level_0 1276*4096/5000

#define Vda_EMS_Level_17 3900*Constant   //add 2022.10.15用于RF+脉冲模式中的脉冲参数设置 //add 2022.11.12   //2022.11.16 4750(3.16V/3mA)-3700-3900

#define Vda_EMS_Level_1_1 2000*Constant  //add 2022.12.15   
#define Vda_EMS_Level_1_2 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_3 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_4 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_5 2000*Constant  //add 2022.12.13   
#define Vda_EMS_Level_1_6 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_7 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_8 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_9 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_10 2000*Constant  //add 2022.12.15   
#define Vda_EMS_Level_1_12 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_13 2000*Constant   //add 2022.12.15
#define Vda_EMS_Level_1_14 2000*Constant   //add 2022.12.15


#define Vda_EMS_Level_2_1 1500*Constant  //add 2022.12.15   
#define Vda_EMS_Level_2_2 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_3 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_4 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_5 1500*Constant  //add 2022.12.13   
#define Vda_EMS_Level_2_6 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_7 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_8 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_9 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_10 1500*Constant  //add 2022.12.15   
#define Vda_EMS_Level_2_12 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_13 1500*Constant   //add 2022.12.15
#define Vda_EMS_Level_2_14 1500*Constant   //add 2022.12.15


#define Vda_EMS_Level_3_1 350*Constant  //add 2022.12.15   
#define Vda_EMS_Level_3_2 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_3 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_4 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_5 350*Constant  //add 2022.12.13   
#define Vda_EMS_Level_3_6 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_7 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_8 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_9 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_10 350*Constant  //add 2022.12.15   
#define Vda_EMS_Level_3_12 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_13 350*Constant   //add 2022.12.15
#define Vda_EMS_Level_3_14 350*Constant   //add 2022.12.15


#define Vda_EMS_Level_4_1 300*Constant  //add 2023.02.24
#define Vda_EMS_Level_4_2 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_3 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_4 300*Constant  //add 2023.02.24
#define Vda_EMS_Level_4_5 300*Constant  //add 2023.02.24
#define Vda_EMS_Level_4_6 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_7 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_8 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_9 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_10 300*Constant  //add 2023.02.24  
#define Vda_EMS_Level_4_12 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_13 300*Constant   //add 2023.02.24
#define Vda_EMS_Level_4_14 300*Constant   //add 2023.02.24

#define Vda_EMS_Level_5_1 250*Constant  //add 2023.02.24
#define Vda_EMS_Level_5_2 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_3 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_4 250*Constant  //add 2023.02.24
#define Vda_EMS_Level_5_5 250*Constant  //add 2023.02.24
#define Vda_EMS_Level_5_6 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_7 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_8 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_9 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_10 250*Constant  //add 2023.02.24  
#define Vda_EMS_Level_5_12 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_13 250*Constant   //add 2023.02.24
#define Vda_EMS_Level_5_14 250*Constant   //add 2023.02.24

/////////////////////////////////////////////////////
#define Vda_RF_Level_0 1900*Constant

//////////////////////////////////////////////////
//#define Vda_RF_Level_1 1590*Constant   //add 2022.11.18  1500(29.1V)-1400(30.8V)-1300(31V)-1550(27.6V)-1300(30.4V) //2022.12.15  3.7W
//#define Vda_RF_Level_1 1570*Constant   //add 2022.12.15
//#define Vda_RF_Level_1 1550*Constant  //add 2022.12.15
//#define Vda_RF_Level_1 1530*Constant  //add 2022.12.15
//#define Vda_RF_Level_1 1510*Constant  //add 2022.12.20
//#define Vda_RF_Level_1 1490*Constant  //add 2022.12.20  //�?号样机测得功率为�?.44W
//#define Vda_RF_Level_1 1470*Constant  //add 2022.12.20
//#define Vda_RF_Level_1 1480*Constant  //add 2023.04.13
//#define Vda_RF_Level_1 1450*Constant  //add 2023.04.23
//#define Vda_RF_Level_1 1430*Constant  //add 2023.04.23
//#define Vda_RF_Level_1 1400*Constant  //add 2023.04.23
//#define Vda_RF_Level_1 1610*Constant  //add 2023.04.23
//#define Vda_RF_Level_1 1690*Constant  //add 2023.05.06
//#define Vda_RF_Level_1 1730*Constant  //add 2023.05.06
//#define Vda_RF_Level_1 1760*Constant  //add 2023.05.06
//#define Vda_RF_Level_1 1860*Constant  //add 2023.05.06
#define Vda_RF_Level_1 1800*Constant  //add 2023.05.09
///////////////////////////////////////////////////

///////////////////////////////////////////////////
//#define Vda_RF_Level_2 1570*Constant   //add 2022.11.18  1350(31.4V)-1250(31.4V)-1150(31.5)-1000(31.0V)-1150�?2V�?  //2022.12.15  4.04W
//#define Vda_RF_Level_2 1550*Constant     //add 2022.12.15
//#define Vda_RF_Level_2 1530*Constant     //add 2022.12.15
//#define Vda_RF_Level_2 1510*Constant     //add 2022.12.15
//#define Vda_RF_Level_2 1490*Constant  //add 2022.12.20
//#define Vda_RF_Level_2 1470*Constant  //add 2022.12.20  //�?号样机测得功率为�?.68W
//#define Vda_RF_Level_2 1450*Constant  //add 2022.12.20
//#define Vda_RF_Level_2 1460*Constant  //add 2023.04.13
//#define Vda_RF_Level_2 1430*Constant  //add 2023.04.23
//#define Vda_RF_Level_2 1610*Constant  //add 2023.04.23
//#define Vda_RF_Level_2 1650*Constant  //add 2023.05.06
//#define Vda_RF_Level_2 1700*Constant  //add 2023.05.06
//#define Vda_RF_Level_2 1730*Constant  //add 2023.05.06
//#define Vda_RF_Level_2 1830*Constant  //add 2023.05.06
#define Vda_RF_Level_2 1790*Constant  //add 2023.05.09
///////////////////////////////////////////////////

//////////////////////////////////////////////////
//#define Vda_RF_Level_3 1590*Constant
//#define Vda_RF_Level_3 1550*Constant   //add 2022.11.18  1200(30.8V)-1100(30.6V)-1000(30.9)-1590(29.7V)-900(30.4V)-1150(29.8V)-1000(31.5V)  //2022.12.15  4.41W
//#define Vda_RF_Level_3 1530*Constant   //add 2022.12.15
//#define Vda_RF_Level_3 1510*Constant   //add 2022.12.15
//#define Vda_RF_Level_3 1490*Constant   //add 2022.12.15
//#define Vda_RF_Level_3 1470*Constant   //add 2022.12.20
//#define Vda_RF_Level_3 1450*Constant   //add 2022.12.20   //�?号样机测得功率为�?.73W
//#define Vda_RF_Level_3 1430*Constant   //add 2022.12.20
//#define Vda_RF_Level_3 1420*Constant   //add 2023.04.23
//#define Vda_RF_Level_3 1620*Constant   //add 2023.04.23
//#define Vda_RF_Level_3 1670*Constant   //add 2023.05.06
//#define Vda_RF_Level_3 1700*Constant   //add 2023.05.06
//#define Vda_RF_Level_3 1800*Constant   //add 2023.05.06
#define Vda_RF_Level_3 1770*Constant   //add 2023.05.09
//////////////////////////////////////////////////
//#define Vda_RF_Level_4 1430*Constant  //add 2023.04.12
//#define Vda_RF_Level_4 1530*Constant   //add 2023.04.13
//#define Vda_RF_Level_4 1440*Constant   //add 2023.04.13
//#define Vda_RF_Level_4 1420*Constant   //add 2023.04.23
//#define Vda_RF_Level_4 1410*Constant   //add 2023.04.23
//#define Vda_RF_Level_4 1560*Constant   //add 2023.04.27
//#define Vda_RF_Level_4 1550*Constant   //add 2023.05.06
//#define Vda_RF_Level_4 1610*Constant   //add 2023.05.06
//#define Vda_RF_Level_4 1650*Constant   //add 2023.05.06
//#define Vda_RF_Level_4 1670*Constant   //add 2023.05.06
//#define Vda_RF_Level_4 1770*Constant   //add 2023.05.06
#define Vda_RF_Level_4 1760*Constant   //add 2023.05.09
//////////////////////////////////////////////////
//#define Vda_RF_Level_5 1430*Constant  //add 2023.04.12
//#define Vda_RF_Level_5 1500*Constant    //add 2023.04.13
//#define Vda_RF_Level_5 1430*Constant    //add 2023.04.13
//#define Vda_RF_Level_5 1410*Constant  //add 2023.04.27
//#define Vda_RF_Level_5 1530*Constant    //add 2023.04.27
//#define Vda_RF_Level_5 1630*Constant    //add 2023.05.06
//#define Vda_RF_Level_5 1650*Constant    //add 2023.05.06
#define Vda_RF_Level_5 1750*Constant    //add 2023.05.09
/////////////////////////////////////////////////
//#define Vda_RF_Level_4 1350*Constant   //add 2022.10.15用于RF+脉冲的抓握感设计
//#define Vda_RF_Level_6 1580*Constant   //add 2022.11.18  1550(27.6V)
#define Vda_RF_Level_6 1850*Constant
//////////////////////////////////////////////////
#define KEY_RF_PRESS 1                 //add 2022.10.28 用于定义RF键短�?
#define KEY_RF_LONG_PRESS 2             //add 2022.10.28 用于定义RF键长�?
#define KEY_RGB_PRESS 1                  //add 2022.10.28 用于定义RGB键短�?
#define KEY_RGB_LONG_PRESS 2             //add 2022.10.28 用于定义RGB键长�?
#define KEY_RF_RGB_LONG_PRESS 3             //add 2022.10.28 用于定义RGB键长�?


#byte   CCP1CON  = 0x293
#bit   	CCP1M_3   = 	CCP1CON.3
#bit    CCP1M_2   = 	CCP1CON.2
#bit   	CCP1M_1   = 	CCP1CON.1
#bit    CCP1M_0   = 	CCP1CON.0


#byte   CCP3CON  = 0X313
#bit   	CCP3M_3   = 	CCP3CON.3
#bit    CCP3M_2   = 	CCP3CON.2
#bit   	CCP3M_1   = 	CCP3CON.1
#bit    CCP3M_0   = 	CCP3CON.0

/////////////////////////////////////////
#byte   CCP5CON  = 0X31E       //add 2022.12.06
#bit   	CCP5M_3   = 	CCP5CON.3
#bit    CCP5M_2   = 	CCP5CON.2
#bit   	CCP5M_1   = 	CCP5CON.1
#bit    CCP5M_0   = 	CCP5CON.0
////////////////////////////////////////


#define  unit  unsigned int  //add 2022.10.28
int32 a=0; //add 2022.10.28
int32 b=0; //add 2022.10.28
int32 m=0;  //add 2022.10.28
static int8 RF_State    	= 0;       	//0 no work, 1 low level,2 middle level, 3 high level
static int8 EMS_State    	= 0;    	//0 no work, 1 low level,2 middle level, 3 high level
static int8 MOTOR_State    = 0;       	//0 no work, 1 low level,2 middle level, 3 high level
static int8 RGB_State    	= 0;    	//0 no work, 1 red led,2 green led, 3 blue led


static int1 Flag_Key_RF    	= 0;
static int1 Flag_Key_EMS   	= 0;
static int1 Flag_Level_Key_Press   	= 0;

static int1 Flag_Red_Light=0;     //add 2023.01.06
static int1 Flag_Function=0;     //add 2023.02.15

static int32 keytimecount5=0;  //判断是否为长按计�?
static int32 keytimecount6=0;  //判断是否为长按计�?
static int8 flag_led1=0; //档位�?开启标志位�?为将led_level_1状态拉高，对应led灯关�?0为将led_level_15状态拉低，对应led灯开�?
static int8 flag_led2=0; //档位�?开启标志位�?为将led_level_2状态拉高，对应led灯关�?0为将led_level_2状态拉低，对应led灯开�?
static int8 flag_led3=0; //档位�?开启标志位�?为将led_level_3状态拉高，对应led灯关�?0为将led_level_3状态拉低，对应led灯开�?
static int8 flag_led4=0; //档位�?开启标志位�?为将led_level_4状态拉高，对应led灯关�?0为将led_level_4状态拉低，对应led灯开�?
static int8 flag_led5=0; //档位�?开启标志位�?为将led_level_5状态拉高，对应led灯关�?0为将led_level_5状态拉低，对应led灯开�?
static int8 led1=0;  //记忆1档灯，标志位;1为开启，0为关�?
static int8 led2=0;  //记忆2档灯，标志位
static int8 led3=0;  //记忆3档灯，标志位
static int8 led4=0;  //记忆4档灯，标志位
static int8 led5=0;  //记忆5档灯，标志位
static int16 num=0;   //按键次数计数
static int16 num1=0;   //按键次数计数
//static int16 num2=0;   //按键次数计数
//static int16 num3=0;   //按键次数计数

static int1 Flag_key_short_press=0;  //add 2023.02.16
static int1 Flag_key_long_press_2s=0;  //add 2023.02.16
static int1 Flag_key_long_press_5s=0;  //add 2023.02.16
static int1 Flag_Key_DEBUG_Pressed 	= 0;


static int1 ucKeyLock=0;  //add 2023.03.10功能键自锁标志位
static int1 ucKeySec=0;  //add 2023.03.10被触发的按键编号


static int1 Flag_Low_Power = 0;
static int1 Flag_Full_Power = 0;

static int1 Flag_10Min_Stop = 0;

//static int16 BATTY_Voltage_AD = 0;	
static float BATTY_Voltage_AD = 0;	

//static int16 DC_Power_Voltage_AD = 0; //2022/09/22
static float DC_Power_Voltage_AD = 0; //2022/09/22

static int1 Flag_DC_Power = 0;	//2022/09/22 //=1��dc input

static float RD_Voltage_AD_CS1 = 0; //2023.04.21
static float RD_Voltage_AD_CS2 = 0; //2023.04.21

static int1 Flag_RF_Working = 0;

static int1 Flag_EMS_Working = 0;

static int8 EMS_Hz_State_1 = 0; // 1-10 ��ͣ�л���from 1 to 10
static int8 EMS_Hz_State_2 = 0; //add 2022.12.15
static int8 EMS_Hz_State_3 = 0; //add 2022.12.15
static int8 EMS_Hz_State_4 = 0; //add 2023.02.24
static int8 EMS_Hz_State_5 = 0; //add 2023.02.24

static int1 Flag_Renew_EMS_Hz_1 = 0;
static int1 Flag_Renew_EMS_Hz_2 = 0;  //add 2022.12.15
static int1 Flag_Renew_EMS_Hz_3 = 0;  //add 2022.12.15
static int1 Flag_Renew_EMS_Hz_4 = 0;  //add 2023.02.24
static int1 Flag_Renew_EMS_Hz_5 = 0;  //add 2023.02.24
static int1 Flag_Renew_EMS_H_L=0;  //add 2022.12.01

static int1 Flag_Working = 0; //


static int    Flag_Vda_EMS_Level_1=0;  //add 2022.12.06


////////////////////////////////////////
//static float Temp_Alarm	= 25.0;  //2022.11.17注释�?
static float Temp_Alarm=25.0;  //add 2022.11.17
#define  Temp_Alarm_Upper  42.5	//36.0 //46.0
#define	 Temp_Alarm_Lower  41	//32.0 //42.0
#define	 Temp_Renew  41	 //2022/09/27

static int1  High_Temp_Alarm_Count;   //Add 2022.10.10
static int1	Flag_Temp_Alarm_Upper = 0;
static int1	Flag_Temp_Alarm_Lower = 1;

static int1	Flag_Enter_Alarm_Upper = 0;
static int8	Temp_RF_State=0;    //2022.11.11将赋�?取消
/////////////////////////////////////////
static int1	 Flag_Powerup = 0;//2022/09/28
//////////////////////////////////////////
static int1 Flag_NTC_Voltage_AD = 0;//2023.03.15
#define  NTC_Alarm_39  743.79   	//39   2023.04.12 (100k/(55.38k+100k))*5V*(1024/4)=3.22*256=823.79      //2023.04.26  823.79-80=743.79
#define  NTC_Alarm_40  755.62   	//40   2023.04.12 (100k/(53.18k+100k))*5V*(1024/4)=3.264*256=835.62     //2023.04.26  835.62-80=755.62
#define  NTC_Alarm_Upper  809.80   	//43   2023.04.12 (100k/(47.16k+100k))*5V*(1024/4)=3.398*256=869.80     //2023.04.26 869.80-80=789.80     //2023.04.27 789.90+20=809.90
#define	 NTC_Alarm_Lower  797.23	//41.0  2023.04.12  (100K/(51.08K+100K))*5*(1024/4)=3.31*(1024/4)=847.23  //2023.04.26 847.23-80=767.23   //2023.04.27 767.23+30=797.23
#define	 NTC_Renew  797.23	   // 41.0   2023.04.12   (100K/(51.08K+100K))*5*(1024/4)=3.31*(1024/4)=847.23  //2023.04.26 847.23-80=767.23     //2023.04.27 767.23+30=797.23
static float NTC_Voltage_AD = 560;   //  25.0  2023.04.12  (100k/(100k+100k))*5V*(1024/4)=2.5*256=640     //2023.04.26 640-80=560

static int8	NTC_Temp_RF_State=0;  //add 2023.03.15
static int1  High_NTC_Alarm_Count;   //Add 2022.10.10
static int1	Flag_NTC_Alarm_Upper = 0;
static int1	Flag_NTC_Alarm_Lower = 1;
static int1	Flag_NTC_Enter_Alarm_Upper = 0;

/////////////////////////////////////////////
static int1 Flag_BAT_NTC_Voltage_AD = 0;//2023.04.12
#define  BAT_NTC_Alarm_0  623.24   	//0   2023.04.12 (((430k*27.219k)/(430k+27.219k))/(((430k*27.219k)/(430k+27.219k))+9.1k)))*3.3V*(1024/4)=2.435*256=623.24
#define  BAT_NTC_Alarm_Upper  294.16   	//45   2023.04.12 (((430k*4.917k)/(430k+4.917k))/(((430k*4.917k)/(430k+4.917k))+9.1k)))*3.3V*(1024/4)=1.149*256=294.16
static float BAT_NTC_Voltage_AD = 437.45;   //  25.0  2023.04.12  (((430k*10k)/(430k+10k))/(((430k*10k)/(430k+10k))+9.1k)))*3.3V*(1024/4)=1.709*256=437.45

static int1  High_BAT_NTC_Alarm_Count;   //Add 2023.04.12
static int1	Flag_BAT_NTC_Alarm_Upper = 0;  //Add 2023.04.12
static int1	Flag_BAT_NTC_Alarm_Lower = 1;  //Add 2023.04.12
static int1	Flag_BAT_NTC_Enter_Alarm_Upper = 0;  //Add 2023.04.12
///////////////////////////////////////////////

int1 test_state1=0;        //add 2022.10.28

static int32 Timer1_Count = 0;
static int1 Flag_10Min_Start=0; // add 2022.10.28
static int1 Flag_4_Hour=0;  //add 2022.11.03
static int1 Flag_5_Second = 0; // add 2022.10.28
static int1 Flag_2_Second = 0; // add 2022.10.28
static int1 Flag_Second = 0;
static int1 Flag_10_Second = 0; //2022/09/27
static int1 Flag_Half_Second = 0;
static int8 RF_Count = 0;
static int16 EMS_Count = 0;    //add 2022.12.01

//////////////////////////////////////////////////
#byte   IOCBN  = 0X395
#bit   	IOCBN0   = 	IOCBN.0
#bit   	IOCBN5   = 	IOCBN.5


#byte   IOCBP  = 0X394
#bit	IOCBP0   = 	IOCBP.0
#bit	IOCBP5   = 	IOCBP.5

void	disable_rb5_interruput(void)
{

IOCBN5 = 0;
IOCBP5  = 0;

}

void	disable_rb0_interruput(void) //2022/09/21
{

IOCBN0 = 0;
IOCBP0  = 0;

}

/////////////////////////////////

/*void U7_OE_OFF(void)  //add 2023.1.13
{
	output_high(OE);
}*/

/*void U7_OE_ON(void)  //add 2023.1.13
{
	output_low(OE);
}*/


void All_Power_On(void)
{
	output_low(Max16054_Clear);
}

void All_Power_Off(void)
{
	output_high(Max16054_Clear);
}
////////////////////////////////////   
   
////////////////////////////////////////
 void dac_i2c_EMS(unsigned int16 sample){     
   i2c_start();
   i2c_write(0b11000000);                // Device address
   i2c_write(0b01000000);                 // Internal Device address   
//   i2c_write((sample & 0xFF0) >> 4);     // Upper data bits          (D11.D10.D9.D8.D7.D6.D5.D4)
//   i2c_write((sample & 0xF) << 4);       //lower bits

	i2c_write(make8(sample<<4,1));     //Same as: i8 = MAKE8(var, offset),i8 = (((var >> (offset*8)) & 0xff) except it is done with a single byte move

	i2c_write(make8(sample<<4,0));
	
   i2c_stop();                           // Stop
   }    
   
void dac_i2c_ee_EMS(unsigned int16 sample){     
   	i2c_start();                          // Start
   	i2c_write(0b11000000);                // Device address
   	i2c_write(0b01000000);                 // Internal Device address   
//   i2c_write((sample & 0xFF0) >> 4);     // Upper data bits (D11.D10.D9.D8.D7.D6.D5.D4)
//   i2c_write((sample & 0xF) << 4);       // Lower data bits (D3.D2.D1.D0)
	i2c_write(make8(sample<<4,1));      
	i2c_write(make8(sample<<4,0));
   	i2c_stop();                           // Stop
   }      

void dac_i2c_RF(unsigned int16 sample){     
   i2c_start();
   i2c_write(0b11000010);                // Device address
   i2c_write(0b01000000);                 // Internal Device address   
//   i2c_write((sample & 0xFF0) >> 4);     // Upper data bits          (D11.D10.D9.D8.D7.D6.D5.D4)
//   i2c_write((sample & 0xF) << 4);       //lower bits

	i2c_write(make8(sample<<4,1));
	i2c_write(make8(sample<<4,0));
	
   i2c_stop();                           // Stop
   }    
   
void dac_i2c_ee_RF(unsigned int16 sample){     
   	i2c_start();                          // Start
   	i2c_write(0b11000010);                // Device address
   	i2c_write(0b01000000);                 // Internal Device address   
//   i2c_write((sample & 0xFF0) >> 4);     // Upper data bits (D11.D10.D9.D8.D7.D6.D5.D4)
//   i2c_write((sample & 0xF) << 4);       // Lower data bits (D3.D2.D1.D0)
	i2c_write(make8(sample<<4,1));
	i2c_write(make8(sample<<4,0));
   	i2c_stop();                           // Stop
   } 

/*void dac_i2c_VL53L4CD(unsigned int16 sample) //add 2023.01.13 接近传感�?
{     
   i2c_start();
   i2c_write(0b01010010);                // Device address  0x52
   i2c_write(0b01010000);                 // Internal Device address   
//   i2c_write((sample & 0xFF0) >> 4);     // Upper data bits          (D11.D10.D9.D8.D7.D6.D5.D4)
//   i2c_write((sample & 0xF) << 4);       //lower bits

	i2c_write(make8(sample<<4,1));
	i2c_write(make8(sample<<4,0));
	
   i2c_stop();                           // Stop
   }*/    

/*void dac_i2c_LSM6DSR(unsigned int16 sample) //add 2023.01.13 陀螺仪
{     
   i2c_start();
   i2c_write(0b11010110);                // Device address 0xd6
   i2c_write(0b01010000);                 // Internal Device address   
//   i2c_write((sample & 0xFF0) >> 4);     // Upper data bits          (D11.D10.D9.D8.D7.D6.D5.D4)
//   i2c_write((sample & 0xF) << 4);       //lower bits

	i2c_write(make8(sample<<4,1));
	i2c_write(make8(sample<<4,0));
	
   i2c_stop();                           // Stop
   }*/
//////////////////////////////
     
////////////////////////////

void Enable_RF_Power(void)
{
	output_high(DA_CS2);
}

void Disable_RF_Power(void)
{
	output_low(DA_CS2);
}
////////////////////////////

/////////////////////////////
void Enable_DJ13_RF_Output(void)
{	
	output_low(M_DJ_CTR_1); //add 2023.05.09
	output_low(M_DJ_CTR_3); //add 2023.05.09

	output_high(DJ_CTR_1);
	output_high(DJ_CTR_3);  //add 2022.12.28
}

void Disable_DJ13_RF_Output(void)
{
	output_low(DJ_CTR_1); 
	output_low(DJ_CTR_3); 
}

void Enable_DJ24_RF_Output(void)
{	
	output_low(M_DJ_CTR_2); //add 2023.05.09
	output_low(M_DJ_CTR_4); //add 2023.05.09

	output_high(DJ_CTR_2);
	output_high(DJ_CTR_4);	//add 2022.12.28
	
}

void Disable_DJ24_RF_Output(void)
{
	output_low(DJ_CTR_2); 
	output_low(DJ_CTR_4); 
}
//////////////////////////////////////////

void Enable_ALL_RF_Output(void)
{	
	output_low(M_DJ_CTR_1); //add 2023.05.09
	output_low(M_DJ_CTR_2); //add 2023.05.09
	output_low(M_DJ_CTR_3); //add 2023.05.09
	output_low(M_DJ_CTR_4); //add 2023.05.09
	
	output_high(DJ_CTR_1);
	output_high(DJ_CTR_2);
	output_high(DJ_CTR_3);  //add 2022.12.27
	output_high(DJ_CTR_4);	//add 2022.12.27
	 
}

void Disable_ALL_RF_Output(void)
{
	output_low(DJ_CTR_1); 
	output_low(DJ_CTR_2);
	output_low(DJ_CTR_3);  //add 2022.12.27
	output_low(DJ_CTR_4);  //add 2022.12.27

}

void Enable_RF_MOS_Driver(void)
{
	output_high(MCP14_EN);	
}

void Disable_RF_MOS_Driver(void)
{
	output_low(MCP14_EN);	
}

void Enable_EMS_Power(void)
{
	output_high(M_CTR_V);
}

void Disable_EMS_Power(void)
{
	output_low(M_CTR_V);
}
///////////////////////////////////
void Enable_M_DJ13_EMS_Output(void)
{	
	output_low(DJ_CTR_1); //add 2023..05.09
	output_low(DJ_CTR_3); //add 2023..05.09
	
	output_high(M_DJ_CTR_1);
	output_high(M_DJ_CTR_3);   //add 2022.12.28

}

void Disable_M_DJ13_EMS_Output(void)
{
	output_low(M_DJ_CTR_1);
	output_low(M_DJ_CTR_3);  //add 2022.12.28
}

void Enable_M_DJ24_EMS_Output(void)
{	
	output_low(DJ_CTR_2); //add 2023..05.09
	output_low(DJ_CTR_4); //add 2023..05.09
	
	output_high(M_DJ_CTR_2);
	output_high(M_DJ_CTR_4);    //add 2022.12.28
	
}

void Disable_M_DJ24_EMS_Output(void)
{
	output_low(M_DJ_CTR_2);
	output_low(M_DJ_CTR_4);  //add 2022.12.28	
}
///////////////////////////////////

///////////////////////////////////
void Enable_ALL_EMS_Output(void)
{	
	output_low(DJ_CTR_1); //add 2023..05.09
	output_low(DJ_CTR_2); //add 2023..05.09
	output_low(DJ_CTR_3); //add 2023..05.09
	output_low(DJ_CTR_4); //add 2023..05.09
	
	output_high(M_DJ_CTR_1);
	output_high(M_DJ_CTR_2);
	output_high(M_DJ_CTR_3);   //add 2022.12.27
	output_high(M_DJ_CTR_4);   //add 2022.12.27
	
}

void Disable_ALL_EMS_Output(void)
{
	output_low(M_DJ_CTR_1);
	output_low(M_DJ_CTR_2);
	output_low(M_DJ_CTR_3);  //add 2022.12.27
	output_low(M_DJ_CTR_4);  //add 2022.12.27
}
//////////////////////////////////

//add 2022.12.27
//////////////////////////
void LED_LEVEL_All_OFF(void)
{	
	output_high(LED_LEVEL_1);
	output_high(LED_LEVEL_2);
 	output_high(LED_LEVEL_3);
	output_high(LED_LEVEL_4);
	output_high(LED_LEVEL_5);	
}
///////////////////////////

//add 2022.12.27
///////////////////////////
void LED_LEVEL_1_ON(void)
{	
	output_low(LED_LEVEL_1);
	output_high(LED_LEVEL_2);
 	output_high(LED_LEVEL_3);
	output_high(LED_LEVEL_4);
	output_high(LED_LEVEL_5);	
}
void LED_LEVEL_2_ON(void)
{
	output_high(LED_LEVEL_1);
	output_low(LED_LEVEL_2);
 	output_high(LED_LEVEL_3);
	output_high(LED_LEVEL_4);
	output_high(LED_LEVEL_5);	
}

void LED_LEVEL_3_ON(void)
{
	output_high(LED_LEVEL_1);
	output_high(LED_LEVEL_2);
 	output_low(LED_LEVEL_3);
	output_high(LED_LEVEL_4);
	output_high(LED_LEVEL_5);
}

void LED_LEVEL_4_ON(void)
{	
	output_high(LED_LEVEL_1);
	output_high(LED_LEVEL_2);
 	output_high(LED_LEVEL_3);
	output_low(LED_LEVEL_4);
	output_high(LED_LEVEL_5);
}

void LED_LEVEL_5_ON(void)
{
		
	output_high(LED_LEVEL_1);
	output_high(LED_LEVEL_2);
 	output_high(LED_LEVEL_3);
	output_high(LED_LEVEL_4);
	output_low(LED_LEVEL_5);
}
////////////////////////////

//add 2023.02.17
////////////////////////////
void LED_LEVEL_1_OFF(void)
{
	output_high(LED_LEVEL_1);
}

void LED_LEVEL_2_OFF(void)
{
	output_high(LED_LEVEL_2);
}

void LED_LEVEL_3_OFF(void)
{
	output_high(LED_LEVEL_3);
}

void LED_LEVEL_4_OFF(void)
{
	output_high(LED_LEVEL_4);
}

void LED_LEVEL_5_OFF(void)
{
	output_high(LED_LEVEL_5);
}

////////////////////////////

//add 2022.12.27
/////////////////////////
void LED_LEVEL_All_ON(void)
{
	//if(flag_led1==0&&flag_led2==0&&flag_led3==0&&flag_led4==0&&flag_led5==0)
	{
	output_low(LED_LEVEL_1);
	output_low(LED_LEVEL_2);
 	output_low(LED_LEVEL_3);
	output_low(LED_LEVEL_4);
	output_low(LED_LEVEL_5);
	}

}
///////////////////////////////

//add 2022.12.27 RF&EMS功能切换按钮自带指示灯亮
//////////////////////////
void LED_RF_EMS_ON(void)
{
	
	output_low(LED_RF_EMS);
}
////////////////////////

//add 2022.12.27 RF&EMS功能切换按钮自带指示灯灭
//////////////////////////
void LED_RF_EMS_OFF(void)
{
	
	output_high(LED_RF_EMS);
}
////////////////////////

//add 2022.12.27 Power Key按钮自带指示灯亮
//////////////////////////
void LED_POWER_ON(void)
{
	
	output_low(LED_POWER);
}
////////////////////////

//add 2022.12.27 Power Key按钮自带指示灯灭
//////////////////////////
void LED_POWER_OFF(void)
{
	
	output_high(LED_POWER);
}
////////////////////////

//add 2022.12.27 LED_Control 头部�?颗红灯亮
//////////////////////////
void LED_control_ON(void)
{
	
	output_high(LED_control);
}
////////////////////////

/*void LED_control_toggle(void) //add 2023.02.17
{
	
	output_toggle(LED_control);
} */
////////////////////////

//add 2022.12.27 LED_Control 头部�?颗红灯灭
//////////////////////////
void LED_control_OFF(void)
{
	
	output_low(LED_control);
}
////////////////////////


////////////////////////////
void RF_State_0(void)
{
	    //output_low(FMQ_CTR); //add 2022.11.04  //2022.11.07注释�?
		//pwm_off(); //add 2022.11.04   //2022.11.07注释�?
		dac_i2c_RF(Vda_RF_Level_0);	
		

}

void RF_State_1(void)
{
        //2M
		
      	setup_timer_2(T2_DIV_BY_1,15,1);		//0.5 us overflow, 0.5 us interrupt  7->1MHz  3->2MHz  //add 2023.02.24  4*(3+1)/32=0.5us  换算频率�?MHz   3-->5   4->0.625us->1.62MHz
      	   	
       	setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07   	
     	     	
		set_pwm1_duty((int16)32);  //add 2023.02.24 占空�?8/4*(3+1)=0.5=50%  8-->12
		
		dac_i2c_RF(Vda_RF_Level_1);	
		
}  //end

void RF_State_2(void)
{
      	
		//1.3M
		
      	setup_timer_2(T2_DIV_BY_1,15,1);		//0.75 us overflow, 0.75 us interrupt  5->1.3Mhz //add 2023.02.24  4*(5+1)/32=0.75us  换算频率�?.3MHz
      	
      	setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07  
      	 	
		set_pwm1_duty((int16)32);  //add 2023.02.24 占空�?12/4*(5+1)=0.5=50%
		
		dac_i2c_RF(Vda_RF_Level_2);	
        
} //end

void RF_State_3(void)
{

	   	//1M
		
      	setup_timer_2(T2_DIV_BY_1,15,1);		//1us overflow, 1us interrupt   //2022.11.23 3->2MHz   //1us-1MHz-7    0.5us-2MHz-3   0.75us-1.3MHz-5
		                                    //2.0us -500KHz- 15   5us-200KHz-39   //2022.12.27 0.375us->2.67MHz-2   
      	
        setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07  
      	      	   
		set_pwm1_duty((int16)32);  //add 2023.02.24 占空�?16/4*(7+1)=0.5=50%
        
		dac_i2c_RF(Vda_RF_Level_3);		
	    
} //end

void RF_State_4(void)  //add 2023.02.24
{
      	
		//800KHz
		
      	setup_timer_2(T2_DIV_BY_1,15,1);		//2us overflow, 2us interrupt  4*(15+1)/32=2us 换算成频率为500KHz�?.75us-5->1.3Mhz  2us-15-500KHz 1.25us-9-800Khz
       
      	setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07  
      
		set_pwm1_duty((int16)32);  //add add 2023.02.24 占空�?32/4*(15+1)=0.5=50%
		
		dac_i2c_RF(Vda_RF_Level_4);	
      
} 

void RF_State_5(void)   //add 2023.02.24
{
      	
		//500KHz
		
      	setup_timer_2(T2_DIV_BY_1,15,1);		//5us overflow, 5us interrupt    4*(39+1)/32=5us 换算成频率为200KHz�?us-200KHz-39     5->1.3Mhz
      	
      	setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07  
      
		set_pwm1_duty((int16)32);  //add add 2023.02.24 占空�?80/4*(39+1)=0.5=50%
		
		dac_i2c_RF(Vda_RF_Level_5);	
      
} 
/////////////////////////////////////


//////////////////////////////////////////
void RF_State_6(void)   //add 2022.10.15用于RF+脉冲的抓握感RF频率状态设�?
{
	    //output_low(FMQ_CTR); //add 2022.11.04
        //1.14MHz-2022.12.28
      	setup_timer_2(T2_DIV_BY_1,6,1);		//0.875 us overflow, 0.875 us interrupt
      
       	setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07   	
     	      	
		set_pwm1_duty((int16)14);   //The 10 bit value is then used to determine the duty cycle of the PWM signal as follows:
                                    //duty cycle = value / [ 4 * (PR2 +1 ) ]
                                        //If an 8-bit value is used, the duty cycle of the PWM signal is determined as follows:
                                        //duty cycle=value/(PR2+1)
                                        //Where PR2 is the maximum value timer 2 will count to before toggling the output pin.
                                             //The 16-bit value is then used to determine the duty cycle of the PWM signal as follows:
                                             //duty cycle=value/(CCPxPRL+1)
                                             //Where CCPxPRL is the maximum value timer 2 will count to before toggling the output pin
		                                    // 2022.11.04占空比数值由162调整�?1，占空比�?0%调整�?5%
		dac_i2c_RF(Vda_RF_Level_6);	
		
}   //end
///////////////////////////////


//////////////
void EMS_State_0(void)
{
	    setup_ccp3(CCP_OFF|CCP_PWM_HALF_BRIDGE|CCP_TIMER6);   //add 2022.11.29
		setup_ccp5(CCP_OFF|CCP_PWM_HALF_BRIDGE|CCP_TIMER6);   //add 2022.12.07
		dac_i2c_EMS(Vda_EMS_Level_0);
		
} 

void EMS_State_1(void)  //1  488.28Hz 2023.02.24
{
	   
		printf("EMS_State-->1\r\n");
		//1 488.28Hz    
		setup_timer_6(T6_DIV_BY_64,255,1);	//add 2022.12.02   4*(255+1)/(32MHz/64分频)=2.048ms,换算成频率为488.28Hz
		
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
	   
		set_pwm3_duty((int16)972.8);    // 2022.11.04占空比数值由512调整�?1，占空比�?0%调整�?%
		                               // 2022.11.07占空比数值由51.2调整�?5.6，占空比�?%调整�?.5%
									   //占空�?%时电�?.5mA左右�?  占空比调�?0%   //2022.11.21占空�?5%   //2022.11.22占空�?0%
		//ems_state_1_var= Vda_EMS_Level_1_Count;
		dac_i2c_EMS(Vda_EMS_Level_1_1); //add 2022.12.06
		
	    setup_timer_6(T6_DIV_BY_64,255,1);  //add 2022.12.06
		
		//setup_timer_1(T1_DIV_BY_8,49999,1);	//add 2022.12.12
		setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6); //add 2022.12.06
		//setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER1); //add 2022.12.12
		set_pwm5_duty((int16)40.96);  //add 2022.12.06
		//ems_state_1_var= Vda_EMS_Level_1_Count;
		dac_i2c_EMS(Vda_EMS_Level_1_1);
	
       
} 

void EMS_State_2(void)  // 5  714.28Hz 2023.02.24
{
		printf("EMS_State-->5\r\n");
		
		//5 714     
		setup_timer_6(T6_DIV_BY_64,174,1);   //add 2022.12.02 4*(174+1)/(32MHz/64分频)=1.4ms,换算成频率为741.28Hz
		//setup_ccp3(CCP_PWM|CCP_PWM_HALF_BRIDGE|CCP_TIMER6,10);
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);   //add 2022.11.29
		
		set_pwm3_duty((int16)658);    // 2022.11.04占空比数值由350调整�?5，占空比�?0%调整�?%
		                              // 2022.11.07占空比数值由35调整�?7.5，占空比�?%调整�?.5%  占空比调整到8%   //2022.11.21占空�?3%  //2022.11.22占空�?0%
        dac_i2c_EMS(Vda_EMS_Level_2_5);//add 2022.12.06

        setup_timer_6(T6_DIV_BY_64,174,1);  //add 2022.12.06
		setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6); //add 2022.12.06
		set_pwm5_duty((int16)35);  //add 2022.12.06
      	dac_i2c_EMS(Vda_EMS_Level_2_5);
	  
}

void EMS_State_3(void) //10  984.25Hz 2023.02.24
{
		printf("EMS_State-->10\r\n");
		//10 984.25Hz   
		setup_timer_6(T6_DIV_BY_64,126,1);   //add 2022.12.02 4*(126+1)/(32MHz/64分频)=1.016ms,换算成频率为984.25Hz 
		//setup_ccp3(CCP_PWM|CCP_PWM_HALF_BRIDGE|CCP_TIMER6,10);
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);   //add 2022.11.29
		
		set_pwm3_duty((int16)472.44);  // 2022.11.04占空比数值由250调整�?4.8，占空比�?0%调整�?%
		                             // 2022.11.07占空比数值由24.8调整�?2.4，占空比�?%调整�?.5%   //2022.11.16占空�?%   //2022.11.21占空�?0%   //2022.11.22占空�?0%
        dac_i2c_EMS(Vda_EMS_Level_3_10);

	    setup_timer_6(T6_DIV_BY_64,126,1);  //add 2022.12.06
		setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6); //add 2022.12.06
		set_pwm5_duty((int16)30.48);  //add 2022.12.06
	   	dac_i2c_EMS(Vda_EMS_Level_3_10);
       
}

void EMS_State_4(void)  //3  600.96Hz 2023.02.24
{
		printf("EMS_State-->3\r\n");
		//3  600.96Hz    
		setup_timer_6(T6_DIV_BY_64,207,1);		//add 2022.12.02  4*(207+1)/(32MHz/64分频)=1.664ms,换算成频率为600.96Hz
		//setup_ccp3(CCP_PWM|CCP_PWM_HALF_BRIDGE|CCP_TIMER6,10);
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);   //add 2022.11.29  
		//setup_ccp3(CCP_PWM|CCP_PWM_FULL_BRIDGE|CCP_TIMER6,10);  //add 2022.11.25按键有声�?
		set_pwm3_duty((int16)790.4);  // 2022.11.04占空比数值由250调整�?4.8，占空比�?0%调整�?%
		                             // 2022.11.07占空比数值由24.8调整�?2.4，占空比�?%调整�?.5%   //2022.11.16占空�?%   //2022.11.21占空�?0%   //2022.11.22占空�?0%
        dac_i2c_EMS(Vda_EMS_Level_4_3);

	    setup_timer_6(T6_DIV_BY_64,207,1);  //add 2022.12.06
		setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6); //add 2022.12.06
		set_pwm5_duty((int16)33.28);  //add 2022.12.06
	   	dac_i2c_EMS(Vda_EMS_Level_4_3);
       
} 


void EMS_State_5(void)  //7  827.81Hz 2023.02.24
{
		printf("EMS_State-->7\r\n");
		//7 984   
		setup_timer_6(T6_DIV_BY_64,150,1);		//add 2022.12.02  4*(150+1)/(32MHz/64分频)=1.208ms,换算成频率为827.81Hz
		//setup_ccp3(CCP_PWM|CCP_PWM_HALF_BRIDGE|CCP_TIMER6,10);
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);   //add 2022.11.29 
		
		set_pwm3_duty((int16)573.8);  // 2022.11.04占空比数值由250调整�?4.8，占空比�?0%调整�?%
		                             // 2022.11.07占空比数值由24.8调整�?2.4，占空比�?%调整�?.5%   //2022.11.16占空�?%   //2022.11.21占空�?0%   //2022.11.22占空�?0%
        dac_i2c_EMS(Vda_EMS_Level_5_13);

	    setup_timer_6(T6_DIV_BY_64,150,1);  //add 2022.12.06
		setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6); //add 2022.12.06
		set_pwm5_duty((int16)24.16);  //add 2022.12.06
	   	dac_i2c_EMS(Vda_EMS_Level_5_13);
       
} 


///////////////////////////////////
void EMS_State_6(void)   //add 2022.10.15用于RF+脉冲模式中的脉冲产生函数
{
		printf("EMS_State-->10\r\n");
		//11 658Hz    //2022.11.16   11  256.67Hz   //2022.11.22   11  992.06Hz
		setup_timer_6(T6_DIV_BY_64,125,1);		//1.0 ms overflow, 1.0 ms interrupt	   189->396-189
				
		//setup_ccp3(CCP_PWM|CCP_PWM_HALF_BRIDGE|CCP_TIMER6,10);
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);   //add 2022.11.29
		
		set_pwm3_duty((int16)468.72);   // 2022.11.04占空比数值由380调整�?8，占空比�?0%调整�?%
		                            // 2022.11.07占空比数值由38调整�?.6，占空比�?%调整�?%    //2022.11.16占空�?.5% //2022.11.21占空�?5%   //2022.11.22占空�?0%

		dac_i2c_EMS(Vda_EMS_Level_17);
       
        setup_timer_6(T6_DIV_BY_64,125,1);  //add 2022.12.06
		setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6); //add 2022.12.06
		set_pwm5_duty((int16)30.24);  //add 2022.12.06
	   	dac_i2c_EMS(Vda_EMS_Level_17); //add 2022.12.06

}

////////////////////////////////


//add 2023.01.07 4个电极头全部输出RF信号函数
////////////////////////////////////////
/*void Swtich_RF_State(void)
{
	
	EMS_State_0();			// mutual exclusion

    Disable_EMS_Power(); 
    Disable_ALL_EMS_Output();
      
	Disable_RF_Power();
    Disable_ALL_RF_Output();
    Disable_RF_MOS_Driver(); 
      			
   	RF_PWM1_OFF(); 	
	  	
	Flag_EMS_Working = 0;
	
	
   switch(RF_State)
   {
   
	   	   
      
      case 0:
      {

      printf("RF_State-->0\r\n");
	  Flag_RF_Working = 0;  //add 2022.10.31 //2022.11.11注释掉与main20220928-backup-1111-2.c文件保持一�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
      Flag_Red_Light =0;    //add 2023.01.06
	  
      Disable_RF_Power();
      Disable_ALL_RF_Output();
      Disable_RF_MOS_Driver();
    
      RF_State_0();
      LED_control_OFF();  //add 2023.01.06 头部板红灯全�?
      break;
      }      
         
      case 1:
      {
	  
      printf("RF_State-->1\r\n");
      
      Flag_RF_Working = 1; 
	  Flag_Red_Light =1;    //add 2023.01.06
	  Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
      
      RF_State_1(); 
 
      LED_LEVEL_1_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
        
      break;
      }
      
      case 2:
      {
	  
      printf("RF_State-->2\r\n");
      
      Flag_RF_Working = 1;
	  Flag_Red_Light =1;    //add 2023.01.06
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  
      RF_State_2();  
  
      LED_LEVEL_2_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
              
      break;   
      }
      
      case 3:
      {
	  
      printf("RF_State-->3\r\n");
      
      Flag_RF_Working = 1;
	  Flag_Red_Light =1;    //add 2023.01.06      
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	 
      RF_State_3();   
      
      LED_LEVEL_3_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
            
      break;
      }
    
      default:
      {

 
	  Disable_RF_Power();
      Disable_ALL_RF_Output();
      Disable_RF_MOS_Driver();    
      LED_LEVEL_All_OFF();   //add 2022.12.28
      
      break;
      }
   }
} */
///////////////////////////////////

//add 2023.01.07 2个电极头DJ13输出RF信号函数
//////////////////////////////////
/*void Swtich_DJ13_RF_State(void)
{
	
	//EMS_State_0();			// mutual exclusion
    Enable_EMS_Power();  //add 2023.01.07
    //Disable_EMS_Power(); 
    //Disable_ALL_EMS_Output();
	Disable_M_DJ13_EMS_Output();
	Enable_M_DJ24_EMS_Output();

	Enable_RF_Power();  
	//Disable_RF_Power();
    //Disable_ALL_RF_Output();
	Disable_DJ13_RF_Output();
	Enable_DJ24_RF_Output();
    //Disable_RF_MOS_Driver(); 
    Enable_RF_MOS_Driver(); 			
   	RF_PWM1_OFF(); 	
	  	
	Flag_EMS_Working = 1;
	
	
   switch(RF_State)
   {
   
	   	   
      
      case 0:
      {

      printf("RF_State-->0\r\n");
	  Flag_RF_Working = 0;  //add 2022.10.31 //2022.11.11注释掉与main20220928-backup-1111-2.c文件保持一�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
      Flag_Red_Light =0;    //add 2023.01.06
	  
	  Enable_RF_Power();
      //Disable_RF_Power();
	  Disable_DJ13_RF_Output();
	  Enable_DJ24_RF_Output();
      //Disable_ALL_RF_Output();
      //Disable_RF_MOS_Driver();
	  Enable_RF_MOS_Driver();
    
      RF_State_0();
      LED_control_OFF();  //add 2023.01.06 头部板红灯全�?
      break;
      }      
         
      case 1:
      {
	  
      printf("RF_State-->1\r\n");
      
      Flag_RF_Working = 1; 
	  Flag_Red_Light =1;    //add 2023.01.06
	  Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
      Enable_DJ13_RF_Output();
	  Disable_DJ24_RF_Output();
      RF_State_1(); 
 
      LED_LEVEL_1_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
        
      break;
      }
      
      case 2:
      {
	  
      printf("RF_State-->2\r\n");
      
      Flag_RF_Working = 1;
	  Flag_Red_Light =1;    //add 2023.01.06
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_DJ13_RF_Output();
	  Disable_DJ24_RF_Output();
      RF_State_2();  
  
      LED_LEVEL_2_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
              
      break;   
      }
      
      case 3:
      {
	  
      printf("RF_State-->3\r\n");
      
      Flag_RF_Working = 1;
	  Flag_Red_Light =1;    //add 2023.01.06      
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_DJ13_RF_Output();
	  Disable_DJ24_RF_Output();
      RF_State_3();   
      
      LED_LEVEL_3_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
            
      break;
      }
    
      default:
      {

      Enable_RF_Power();
	  //Disable_RF_Power();
      //Disable_ALL_RF_Output();
	  Disable_DJ13_RF_Output();
	  Enable_DJ24_RF_Output();
      Enable_RF_MOS_Driver();
      //Disable_RF_MOS_Driver();    
      LED_LEVEL_All_OFF();   //add 2022.12.28
      
      break;
      }
   }
} */
///////////////////////////////////

//add 2023.01.07 2个电极头DJ24输出RF信号函数
//////////////////////////////////
/*void Swtich_DJ24_RF_State(void)
{
	
	//EMS_State_0();			// mutual exclusion
    Enable_EMS_Power();  //add 2023.01.07
    //Disable_EMS_Power(); 
    //Disable_ALL_EMS_Output();
	Disable_M_DJ24_EMS_Output();
	Enable_M_DJ13_EMS_Output();

	Enable_RF_Power();  
	//Disable_RF_Power();
    //Disable_ALL_RF_Output();
	Disable_DJ24_RF_Output();
	Enable_DJ13_RF_Output();
    //Disable_RF_MOS_Driver(); 
    Enable_RF_MOS_Driver(); 			
   	RF_PWM1_OFF(); 	
	  	
	Flag_EMS_Working = 1;
	
	
   switch(RF_State)
   {
   	   
      
      case 0:
      {

      printf("RF_State-->0\r\n");
	  Flag_RF_Working = 0;  //add 2022.10.31 //2022.11.11注释掉与main20220928-backup-1111-2.c文件保持一�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
      Flag_Red_Light =0;    //add 2023.01.06
	  
	  Enable_RF_Power();
      //Disable_RF_Power();
	  Disable_DJ24_RF_Output();
	  Enable_DJ13_RF_Output();
      //Disable_ALL_RF_Output();
      //Disable_RF_MOS_Driver();
	  Enable_RF_MOS_Driver();
    
      RF_State_0();
      LED_control_OFF();  //add 2023.01.06 头部板红灯全�?
      break;
      }      
         
      case 1:
      {
	  
      printf("RF_State-->1\r\n");
      
      Flag_RF_Working = 1; 
	  Flag_Red_Light =1;    //add 2023.01.06
	  Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
      Enable_DJ24_RF_Output();
	  Disable_DJ13_RF_Output();
      RF_State_1(); 
 
      LED_LEVEL_1_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
        
      break;
      }
      
      case 2:
      {
	  
      printf("RF_State-->2\r\n");
      
      Flag_RF_Working = 1;
	  Flag_Red_Light =1;    //add 2023.01.06
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_DJ24_RF_Output();
	  Disable_DJ13_RF_Output();
      RF_State_2();  
  
      LED_LEVEL_2_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
              
      break;   
      }
      
      case 3:
      {
	  
      printf("RF_State-->3\r\n");
      
      Flag_RF_Working = 1;
	  Flag_Red_Light =1;    //add 2023.01.06      
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_DJ24_RF_Output();
	  Disable_DJ13_RF_Output();
      RF_State_3();   
      
      LED_LEVEL_3_ON(); //add 2022.12.28
	  LED_control_ON();  //add 2023.01.06 头部板红灯全�?
            
      break;
      }
    
      default:
      {

      Enable_RF_Power();
	  //Disable_RF_Power();
      //Disable_ALL_RF_Output();
	  Disable_DJ24_RF_Output();
	  Enable_DJ13_RF_Output();
      Enable_RF_MOS_Driver();
      //Disable_RF_MOS_Driver();    
      LED_LEVEL_All_OFF();   //add 2022.12.28
      
      break;
      }
   }
} */
///////////////////////////////////

//RF+RED Light 射频+头部红灯函数 利用Switch语句实现//add 2023.02.23
////////////////////////////////////
void Switch_RF_Red_Light_State_1(void)
{
	    //Key_Handle(); //add 2023.03.13
	    //LED_control_ON();
		LED_RF_EMS_OFF();
		//LED_LEVEL_ALL_OFF(); //add 2023.03.07

		//以下代码移植�?2023.02.23
        /////////////////////////
		EMS_State_0();			// mutual exclusion
        Disable_EMS_Power(); 
        Disable_ALL_EMS_Output();
        Disable_RF_Power();
        Disable_ALL_RF_Output();
        Disable_RF_MOS_Driver(); 
      	RF_PWM1_OFF(); 	
	  	Flag_EMS_Working = 0;
        //////////////////////////

		switch(RF_State)
		{
			case 0:
			{
			
		   //以下代码移植�?2023.02.23
           /////////////////////////
           printf("RF_State-->0\r\n");
	       Flag_RF_Working = 0;  //add 2022.10.31 //2022.11.11注释掉与main20220928-backup-1111-2.c文件保持一�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
           Flag_Red_Light =0;    //add 2023.01.06
	       Disable_RF_Power();
           Disable_ALL_RF_Output();
           Disable_RF_MOS_Driver();
           RF_State_0();
		   LED_RF_EMS_OFF(); //add 2023.02.27
		   LED_control_OFF(); //add 2023.02.23 头部板红灯close
		   LED_LEVEL_ALL_OFF(); //add 2023.03.07
           //////////////////////////
			break;
			}

			case 1:
			{
			    
             //以下代码移植�?2023.02.23
           /////////////////////////
           printf("RF_State-->1\r\n");
           Flag_RF_Working = 1; 
	       Flag_Red_Light =1;    //add 2023.01.06
	       Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
           Enable_RF_Power();  //add 2023.03.07
		   Enable_RF_MOS_Driver();  //add 2023.03.07
		   Enable_ALL_RF_Output();  //add 2023.03.07
		   //Enable_DJ24_RF_Output(); //add 2023.03.15
		   //Disable_DJ13_RF_Output(); //add 2023.03.15
		   //RF_PWM1_ON();  //add 2023.03.07
		   RF_State_1();
		   LED_LEVEL_1_ON();  //add 2023.03.07
		   //LED_control_ON(); //add 2023.02.23
		   //LED_control_OFF();
		   LED_RF_EMS_OFF(); //add 2023.02.27
		  //////////////////////////
			break;	
			}

			case 2:
			{
			
            //以下代码移植�?2023.02.23
           /////////////////////////
		    printf("RF_State-->2\r\n");
            Flag_RF_Working = 1;
	        Flag_Red_Light =1;    //add 2023.01.06
            Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	        Enable_RF_Power();  //add 2023.03.07
		    Enable_RF_MOS_Driver();  //add 2023.03.07
		    Enable_ALL_RF_Output();  //add 2023.03.07
		    //RF_PWM1_ON();  //add 2023.03.07
		    RF_State_2(); 
			LED_LEVEL_2_ON();  //add 2023.03.07
			//LED_control_ON(); //add 2023.02.23
			//LED_control_OFF();
			LED_RF_EMS_OFF(); //add 2023.02.27
			////////////////////////
			break;	
			}

			case 3:
			{
			
           //以下代码移植�?2023.02.23
           /////////////////////////
		    printf("RF_State-->3\r\n");
            Flag_RF_Working = 1;
	        Flag_Red_Light =1;    //add 2023.01.06      
            Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	        Enable_RF_Power();  //add 2023.03.07
		    Enable_RF_MOS_Driver();  //add 2023.03.07
		    Enable_ALL_RF_Output();  //add 2023.03.07
		    //RF_PWM1_ON();  //add 2023.03.07
			RF_State_3();
			LED_LEVEL_3_ON();  //add 2023.03.07
			//LED_control_ON(); //add 2023.02.23
			//LED_control_OFF();
			LED_RF_EMS_OFF(); //add 2023.02.27
			////////////////////////
			break;	
			}

			case 4:
			{
			
			//以下代码移植�?2023.02.24
           /////////////////////////
		    printf("RF_State-->4\r\n");
            Flag_RF_Working = 1;
	        Flag_Red_Light =1;    //add 2023.01.06      
            Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	        Enable_RF_Power();  //add 2023.03.07
		    Enable_RF_MOS_Driver();  //add 2023.03.07
		    Enable_ALL_RF_Output();  //add 2023.03.07
		    //RF_PWM1_ON();  //add 2023.03.07
			RF_State_4();
			LED_LEVEL_4_ON();  //add 2023.03.07
			//LED_control_ON(); //add 2023.02.23
			//LED_control_OFF();
			LED_RF_EMS_OFF(); //add 2023.02.27
			////////////////////////
			break;	
			}
   
            case 5:
			{
			
			//以下代码移植�?2023.02.24
           /////////////////////////
		    printf("RF_State-->5\r\n");
            Flag_RF_Working = 1;
	        Flag_Red_Light =1;    //add 2023.01.06      
            Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	        Enable_RF_Power();  //add 2023.03.07
		    Enable_RF_MOS_Driver();  //add 2023.03.07
		    Enable_ALL_RF_Output();  //add 2023.03.07
		    //RF_PWM1_ON();  //add 2023.03.07
			RF_State_5();
			LED_LEVEL_5_ON();  //add 2023.03.07
			//LED_control_ON(); //add 2023.02.23
			//LED_control_OFF();
			LED_RF_EMS_OFF(); //add 2023.02.27
			///////////////////////////
			break;	
			} 
			
			default:
			{
			Disable_RF_Power();
            Disable_ALL_RF_Output();
            Disable_RF_MOS_Driver(); 
			LED_RF_EMS_OFF(); //add 2023.02.27
			LED_LEVEL_ALL_OFF(); //add 2023.03.07
			break;
			}
		}
}
////////////////////////////////////

//add 2023.01.07 4个电极头输出EMS信号函数
///////////////////////////////////
/*void Swtich_EMS_State(void)
{
	LED_LEVEL_ALL_OFF();	// mutual exclusion
	RF_State_0();		// mutual exclusion

	Disable_RF_Power();
    Disable_ALL_RF_Output();
    Disable_RF_MOS_Driver(); 
    
   	Flag_RF_Working = 0;
	
   switch(EMS_State)
   {
      
      case 0:
      {
      printf("EMS_State-->0\r\n");
     
      Flag_EMS_Working = 0;  //add 2022.10.31 //2022.11.11注释�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	 
      Disable_EMS_Power(); 
      Disable_ALL_EMS_Output();
      
      LED_LEVEL_ALL_OFF();      
      EMS_State_0();
       
      break;
      }
         
      case 1:
      {
      printf("EMS_State-->1\r\n");
      
      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  
	  Enable_EMS_Power();
	  Enable_ALL_EMS_Output();
      
      LED_LEVEL_1_ON();       
      EMS_State_1(); 
	 
      break;
      }
      
      case 2:
      {
      printf("EMS_State-->2\r\n");
      
      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_EMS_Power();
	  Enable_ALL_EMS_Output();
	  
      LED_LEVEL_2_ON(); 
      EMS_State_2(); 
         
      break;   
      }
      
      case 3:
      {   
      printf("EMS_State-->3\r\n");

      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	 
      Enable_EMS_Power();
	  Enable_ALL_EMS_Output();
      
      LED_LEVEL_3_ON(); 
      EMS_State_3();          
      break;
      }
      
      default:
      {
      Disable_EMS_Power(); 
      Disable_ALL_EMS_Output();
      
      LED_LEVEL_ALL_OFF();  
	  
      break;
      }
   }
} */
//////////////////////////////////////////

//add 2023.01.07 2个电极头M_DJ13输出EMS信号函数
///////////////////////////////////
/*void Swtich_M_DJ13_EMS_State(void)
{
	LED_LEVEL_ALL_OFF();	// mutual exclusion
	//RF_State_0();		// mutual exclusion
    Enable_RF_Power();
	//Disable_RF_Power();
    //Disable_ALL_RF_Output();
	Disable_DJ13_RF_Output();
	Enable_DJ24_RF_Output();
    //Disable_RF_MOS_Driver(); 
	Enable_RF_MOS_Driver();
    
   	Flag_RF_Working = 1;
	
   switch(EMS_State)
   {
      
      case 0:
      {
      printf("EMS_State-->0\r\n");
     
      Flag_EMS_Working = 0;  //add 2022.10.31 //2022.11.11注释�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_EMS_Power();
      //Disable_EMS_Power(); 
      //Disable_ALL_EMS_Output();
      Disable_M_DJ13_EMS_Output();
	  Enable_M_DJ24_EMS_Output();

      LED_LEVEL_ALL_OFF();      
      EMS_State_0();
       
      break;
      }
         
      case 1:
      {
      printf("EMS_State-->1\r\n");
      
      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  
	  Enable_EMS_Power();
	  Enable_M_DJ13_EMS_Output();
	  Disable_M_DJ24_EMS_Output();
	  //Enable_ALL_EMS_Output();
      
      LED_LEVEL_1_ON();       
      EMS_State_1(); 
	 
      break;
      }
      
      case 2:
      {
      printf("EMS_State-->2\r\n");
      
      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_EMS_Power();
	  Enable_M_DJ13_EMS_Output();
	  Disable_M_DJ24_EMS_Output();
	  //Enable_ALL_EMS_Output();
	  
      LED_LEVEL_2_ON(); 
      EMS_State_2(); 
         
      break;   
      }
      
      case 3:
      {   
      printf("EMS_State-->3\r\n");

      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	 
      Enable_EMS_Power();
	  Enable_M_DJ13_EMS_Output();
	  Disable_M_DJ24_EMS_Output();
	  //Enable_ALL_EMS_Output();
      
      LED_LEVEL_3_ON(); 
      EMS_State_3();          
      break;
      }
      
      default:
      {
	  Enable_EMS_Power();
      //Disable_EMS_Power(); 
	  Disable_M_DJ13_EMS_Output();
	  Enable_DJ24_RF_Output();
      //Disable_ALL_EMS_Output();
      
      LED_LEVEL_ALL_OFF();  
	  
      break;
      }
   }
} */
//////////////////////////////////////////

//add 2023.01.07 2个电极头M_DJ24输出EMS信号函数
///////////////////////////////////
/*void Swtich_M_DJ24_EMS_State(void)
{
	LED_LEVEL_ALL_OFF();	// mutual exclusion
	//RF_State_0();		// mutual exclusion
    Enable_RF_Power();
	//Disable_RF_Power();
    //Disable_ALL_RF_Output();
	Disable_DJ24_RF_Output();
	Enable_DJ13_RF_Output();
    //Disable_RF_MOS_Driver(); 
	Enable_RF_MOS_Driver();
    
   	Flag_RF_Working = 1;
	
   switch(EMS_State)
   {
      
      case 0:
      {
      printf("EMS_State-->0\r\n");
     
      Flag_EMS_Working = 0;  //add 2022.10.31 //2022.11.11注释�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_EMS_Power();
      //Disable_EMS_Power(); 
      //Disable_ALL_EMS_Output();
      Disable_M_DJ24_EMS_Output();
	  Enable_M_DJ13_EMS_Output();

      LED_LEVEL_ALL_OFF();      
      EMS_State_0();
       
      break;
      }
         
      case 1:
      {
      printf("EMS_State-->1\r\n");
      
      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  
	  Enable_EMS_Power();
	  Enable_M_DJ24_EMS_Output();
	  Disable_M_DJ13_EMS_Output();
	  //Enable_ALL_EMS_Output();
      
      LED_LEVEL_1_ON();       
      EMS_State_1(); 
	 
      break;
      }
      
      case 2:
      {
      printf("EMS_State-->2\r\n");
      
      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  Enable_EMS_Power();
	  Enable_M_DJ24_EMS_Output();
	  Disable_M_DJ13_EMS_Output();
	  //Enable_ALL_EMS_Output();
	  
      LED_LEVEL_2_ON(); 
      EMS_State_2(); 
         
      break;   
      }
      
      case 3:
      {   
      printf("EMS_State-->3\r\n");

      Flag_EMS_Working = 1; 
      Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	 
      Enable_EMS_Power();
	  Enable_M_DJ24_EMS_Output();
	  Disable_M_DJ13_EMS_Output();
	  //Enable_ALL_EMS_Output();
      
      LED_LEVEL_3_ON(); 
      EMS_State_3();          
      break;
      }
      
      default:
      {
	  Enable_EMS_Power();
      //Disable_EMS_Power(); 
	  Disable_M_DJ24_EMS_Output();
	  Enable_DJ13_RF_Output();
      //Disable_ALL_EMS_Output();
      
      LED_LEVEL_ALL_OFF();  
	  
      break;
      }
   }
} */
//////////////////////////////////////////

//RF+EMS+RED Light 射频+EMS+头部红灯函数 利用Switch语句实现//add 2023.02.23
////////////////////////////////////
void Switch_RF_EMS_Red_Light_State_1(void)
{
	    //LED_control_ON();
		//LED_RF_EMS_ON();
        //LED_LEVEL_ALL_OFF(); //add 2023.03.07
	    //以下代码移植�?2023.02.23
        /////////////////////////
		//RF_State_0(); //add 2023.03.14
		//EMS_State_0();			// mutual exclusion
        Disable_EMS_Power(); 
        Disable_ALL_EMS_Output();
        Disable_RF_Power();
        Disable_ALL_RF_Output();
		//Disable_DJ24_RF_Output(); //add 2023.03.14
        Disable_RF_MOS_Driver(); 
      	RF_PWM1_OFF(); 	
	  	//Flag_RF_Working = 0;
        //////////////////////////

		
		switch(EMS_State)
		{
			case 0:
			{
			   
           //以下代码移植�?2023.02.23
           ///////////////////////// 
		    printf("RF_State-->0\r\n");
	        //Flag_RF_Working = 0;  //add 2022.10.31 //2022.11.11注释掉与main20220928-backup-1111-2.c文件保持一�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
            Flag_Red_Light =0;    //add 2023.01.06
	        Disable_RF_Power();
            Disable_ALL_RF_Output();
			//Disable_DJ24_RF_Output(); //add 2023.03.14
            Disable_RF_MOS_Driver();
            RF_State_0();

            printf("EMS_State-->0\r\n");
            Flag_EMS_Working = 0;  //add 2022.10.31 //2022.11.11注释�?//2022.11.15验证注释掉此处会导致由功能状态切换至待机状态时一直蓝灯，无法进入充电模式
            //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	        Disable_EMS_Power(); 
            Disable_ALL_EMS_Output();
			EMS_State_0(); //add 2023.03.14
			LED_control_OFF(); //add 2023.02.23
			LED_LEVEL_ALL_OFF(); //add 2023.03.07
			/////////////////////////
			break;
			}

			case 1:
			{
			
            //以下代码移植�?2023.02.23
           ///////////////////////// 
		    printf("RF_State-->1\r\n");
            //Flag_RF_Working = 1; 
	        //Flag_Red_Light =1;    //add 2023.01.06
	        //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
            //Enable_RF_Power();
			Enable_RF_MOS_Driver();
			Enable_EMS_Power();  //add 2023.03.15
			Enable_DJ24_RF_Output();
			//Enable_M_DJ13_EMS_Output(); //add 2023.03.15
			//Enable_ALL_RF_Output(); //add 2023.03.14
			//Disable_DJ13_RF_Output();
            RF_State_1();

			printf("EMS_State-->1\r\n");
            Flag_EMS_Working = 1; 
            //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  	    Enable_EMS_Power();
			Enable_M_DJ13_EMS_Output();
			//Enable_ALL_EMS_Output(); //add 2023.03.14
	        //Disable_M_DJ24_EMS_Output();
            EMS_State_1();
            
			//LED_RF_EMS_ON(); //add 2023.02.27
			//LED_control_ON(); //add 2023.02.23
			LED_LEVEL_1_ON();  //add 2023.03.07
			///////////////////////////
			break;	
			}

			case 2:
			{
			
			 //以下代码移植�?2023.02.24
           ///////////////////////// 
		    printf("RF_State-->2\r\n");
            //Flag_RF_Working = 1; 
	        //Flag_Red_Light =1;    //add 2023.01.06
	        //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
            Enable_RF_Power();
			Enable_RF_MOS_Driver();
			Enable_DJ24_RF_Output();
			//Enable_ALL_RF_Output(); //add 2023.03.14
			//Disable_DJ13_RF_Output();
            RF_State_2();

			//printf("EMS_State-->2\r\n");
            Flag_EMS_Working = 1; 
            //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  	    Enable_EMS_Power();
			Enable_M_DJ13_EMS_Output();
			//Enable_ALL_EMS_Output(); //add 2023.03.14
	        //Disable_M_DJ24_EMS_Output();
            EMS_State_2();
			//LED_control_ON(); //add 2023.02.23
			LED_LEVEL_2_ON();  //add 2023.03.07
			///////////////////////////
			break;	
			}

			case 3:
			{
			
			 //以下代码移植�?2023.02.24
           ///////////////////////// 
		    printf("RF_State-->3\r\n");
            //Flag_RF_Working = 1; 
	        //Flag_Red_Light =1;    //add 2023.01.06
	        //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
            Enable_RF_Power();
			Enable_RF_MOS_Driver();
			Enable_DJ24_RF_Output();
			//Enable_ALL_RF_Output(); //add 2023.03.14
			//Disable_DJ13_RF_Output();
            RF_State_3();

			//printf("EMS_State-->3\r\n");
            Flag_EMS_Working = 1; 
            //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  	    Enable_EMS_Power();
			Enable_M_DJ13_EMS_Output();
			//Enable_ALL_EMS_Output(); //add 2023.03.14
	        //Disable_M_DJ24_EMS_Output();
            EMS_State_3();
			//LED_control_ON(); //add 2023.02.23
			LED_LEVEL_3_ON();  //add 2023.03.07
			//////////////////////////
			break;	
			}

			case 4:
			{
			
			 //以下代码移植�?2023.02.24
           ///////////////////////// 
		    printf("RF_State-->4\r\n");
            //Flag_RF_Working = 1; 
	        //Flag_Red_Light =1;    //add 2023.01.06
	        //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
            Enable_RF_Power();
			Enable_RF_MOS_Driver();
			Enable_DJ24_RF_Output();
			//Enable_ALL_RF_Output(); //add 2023.03.14
			//Disable_DJ13_RF_Output();
            RF_State_4();

			printf("EMS_State-->4\r\n");
            Flag_EMS_Working = 1; 
            //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  	    Enable_EMS_Power();
			Enable_M_DJ13_EMS_Output();
			//Enable_ALL_EMS_Output(); //add 2023.03.14
	        //Disable_M_DJ24_EMS_Output();
            EMS_State_4();
			//LED_control_ON(); //add 2023.02.23
			LED_LEVEL_4_ON();  //add 2023.03.07
			///////////////////////////
			break;	
			}
   
            case 5:
			{
			
			 //以下代码移植�?2023.02.24
           ///////////////////////// 
		    printf("RF_State-->5\r\n");
            //Flag_RF_Working = 1; 
	        //Flag_Red_Light =1;    //add 2023.01.06
	        //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15  //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
            Enable_RF_Power();
			Enable_RF_MOS_Driver();
			Enable_DJ24_RF_Output();
			//Enable_ALL_RF_Output(); //add 2023.03.14
			//Disable_DJ13_RF_Output();
            RF_State_5();

			printf("EMS_State-->5\r\n");
            Flag_EMS_Working = 1; 
            //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15   //2022.11.18已验证增加此条不会影响高温报警和状态恢�?
	  	    Enable_EMS_Power();
			Enable_M_DJ13_EMS_Output();
			//Enable_ALL_EMS_Output(); //add 2023.03.14
	        //Disable_M_DJ24_EMS_Output();
            EMS_State_5();
			//LED_control_ON(); //add 2023.02.23
			LED_LEVEL_5_ON();  //add 2023.03.07
			/////////////////////////
			break;	
			} 
			
			default:
			{
			Disable_EMS_Power();    //add 2023.03.07
            Disable_ALL_EMS_Output();  //add 2023.03.07
            Disable_RF_Power();    //add 2023.03.07
            Disable_ALL_RF_Output(); //add 2023.03.07
            Disable_RF_MOS_Driver();  //add 2023.03.07
			LED_LEVEL_ALL_OFF(); //add 2023.03.07
			break;
			}
		}
		
}
////////////////////////////////////


//////////////////////////////////////
void Lao_Hua_Key_Handle_Long_Press_5s(void)   //add 2023.02.16
{
	static int32 keytimecount1=0;
	
	if(input(LED_LEVEL_KEY)==0)   //add 2022.11.15 改成同时按RF+RGB按键进入老化模式，规避之前只要按RF+任意键都可以进入老化模式的bug
	{	
		delay_ms(10);  //add 2022.11.02 按键消抖
		
		if(input(LED_LEVEL_KEY)==0) //add 2022.11.15 改成同时按RF+RGB按键进入老化模式，规避之前只要按RF+任意键都可以进入老化模式的bug
		{
			keytimecount1++;
			
		}
							
        if(keytimecount1>312)   //add 2023.03.09数值为312�?0s左右
		//if(keytimecount1>156)   //2022.11.15数值为156约等�?s左右
			{
			Flag_Working=0;
			//test_state1=1;
			Flag_key_long_press_5s=1;
			Flag_key_long_press_2s=0;  //add 2023.03.09
			
			}
		}
	     else keytimecount1=0;

	
	
	
}   //end  
////////////////////////////////////////

//add 2023.02.14 RF+EMS功能切换键长�?s函数 
//////////////////////////////////////////////////////////////////////
	//begin
void RF_EMS_Switch_Key_Handle_Long_Press_2s(void)  //进入RF+EMS功能  2023.02.17验证有效
{
		
	if(input(LED_LEVEL_KEY)==1)  //按键没有按下，及时清零一些标志位
	{
		delay_ms(10);  //add 2023.04.14
		if(input(LED_LEVEL_KEY)==1)  //按键没有按下，及时清零一些标志位
		{
		  keytimecount5=0;  //按键按下延时计数清零
		//Timer1_Count=0; //add 2023.04.14
		//Flag_Level_Key_Press=0;  //add 2023.04.14
		  return;
		}
	}
	
	if(input(LED_LEVEL_KEY)==0) 
	
	{	
		delay_ms(10);  //add 2023.01.06 按键消抖
		
		if(input(LED_LEVEL_KEY)==0) 
		{
			keytimecount5++;
			//Timer1_Count++;
			//Flag_Level_Key_Press=1;
		
		}

		if(keytimecount5<1)   //add 2023.02.23数值小�?约等�?.3s左右，忽略所有按�?
		//if(Flag_Level_Key_Press==0&& Flag_Second==0) //0.3s
		//if( (Timer1_Count%5)< 5-1) //0.3s
			{
			
			//Flag_Working=1;
			test_state1=0;
			Flag_key_short_press=0;
			Flag_key_long_press_2s=0;
			Flag_key_long_press_5s=0;
			//Flag_Second=1; //2023.04.14
			//keytimecount5=0; //add 2023.03.09
			//LED_LEVEL_ALL_OFF(); //add 2023.02.27
		    } 

		if(keytimecount5>=1)  //add 2023.02.23数值为5约等�?.5s左右
		//if(Flag_Level_Key_Press==0&&  Flag_Second==1) //0.3s
		//if( (keytimecount5%20)> 20-1) //1s	
			{
			//Flag_Working=1;
			test_state1=0;
			Flag_key_short_press=1;
			Flag_key_long_press_2s=0;  //add 2023.02.23
			Flag_key_long_press_5s=0;  //add 2023.02.23
			//keytimecount5=0; //add 2023.03.09
			//Flag_Second=0; //2023.04.14
			}
			
		 if(keytimecount5>16)   //2023.01.06数值为62�?s左右
		 //if( Flag_Level_Key_Press==0&&  Flag_2_Second==1) //2s  //add 2023.04.14
		 //if( (keytimecount5%40)> 40-1) //2s
		 	{
			
		    Flag_Function=~Flag_Function; //add 2023.02.15
			Flag_Working=1;
			test_state1=0;
			Flag_key_short_press=0;      //add 2023.03.08 清除按键的短按标�?
			Flag_key_long_press_2s=1;  //add 2023.03.08 激活按键长按的有效标志
			Flag_key_long_press_5s=0;  //add 2023.03.08
			
			keytimecount5=0;
			//Timer1_Count=0; //add 2023.04.14
			//Flag_2_Second=0; //2023.04.14
			
			}
		
		}
	
}   //end  
///////////////////////////////////////////////////////

/////////////////////////////////////////////////////////
void Key_Handle(void)
{

    //RF+红光模式按键松开  2023.03.07
	/////////////////////////////////
	if(!(Flag_Function)==1)
	{
     if(Flag_key_short_press)
	 {
		if(input(LED_LEVEL_KEY))
		{
			//keytimecount5=0; //add 2023.03.08
			Flag_key_short_press=0;
			Flag_Key_RF=1;
			Flag_key_long_press_2s=0; //add 2023.03.10
			//Flag_Function=1;  //add 2023.03.09
		}
	 }
	}
	
	//RF+EMS+红光模式按键松开 2023.03.07
	////////////////////////////////////
	//if(Flag_key_long_press_2s) //add 2023.03.10
	//{
	  if(Flag_Function==1)
	  {
       if(Flag_key_short_press)
	   {
		 if(input(LED_LEVEL_KEY))
		 {
			//keytimecount5=0; //add 2023.03.08
			Flag_key_short_press=0;
			Flag_Key_EMS=1;
			Flag_key_long_press_2s=0; //add 2023.03.10
			//Flag_Function=0;  //add 2023.03.09
			
		 }
	   }
	  }
   // }
   //RF+红光模式按键换挡计数 2023.03.07
   ////////////////////////
   if(Flag_Key_RF)
   {
	RF_State++;
    RF_State %= 6;
   }
   
   //RF+EMS+红光模式按键换挡计数 2023.03.07
   ////////////////////////////
   if(Flag_Key_EMS)
   {
	 EMS_State++;
     EMS_State %= 6;
	 //num1++;
	 //num1 %= 6;
   }   
	
} 
///////////////////////////////////////

//RGB Control Function
//////////////////////////////////////     
 void Main_RGB_All_Off(void)
 {    
     output_high(LOW_POWER_LED);  //red
     output_high(CHARGE_FULL_LED);   //green  
     output_high(START_LED_CRT); //blue   
  }   
  	
 void Main_RGB_R_On(void)
 {    
     output_low(LOW_POWER_LED);  //red on

  }     
  	
 void Main_RGB_G_On(void)
 {      	
      output_low(CHARGE_FULL_LED);   //green  on
 }   
  	
 void Main_RGB_B_On(void)	
{
     output_low(START_LED_CRT); //blue on
	
 }   	

 void Main_RGB_R_Off(void)
 {    
     output_high(LOW_POWER_LED);  //red off
 }     
  	
 void Main_RGB_G_Off(void)
 {      	
     output_high(CHARGE_FULL_LED);   //green  off
  }   
  	
 void Main_RGB_B_Off(void)	
{
	output_high(START_LED_CRT); //blue off
 } 
/////////////////////////////////////////////

//////////////////////////////////////////////
void Power_RGB(void)
{

	if(Flag_Working)
	{
	
	    /////////////////////////////////////////////
		if(Flag_RF_Working) //2022/09/27
		{	
			//if(  (RF_State == 0)  && (MOTOR_State == 0) && (RGB_State == 0) )
			//if(RF_State == 0||RF_State==1)
			if(RF_State == 0)
			{
				//Main_RGB_B_On();//blue on
				Main_RGB_B_Off();  //add 2023.04.14
				
			}
			
			/*else
			{
			Main_RGB_B_Off();
			}*/
		if(RF_State!=0) //add 2022.10.15
		{EMS_State=0;}             //add 2022.10.15  解决由RF档重新切换到EMS档时，让EMS始终保持�?�?
		}
		
		////////////////////////////////
		if(Flag_EMS_Working)//2022/09/27
		{	
			//if(  (EMS_State == 0)  && (MOTOR_State == 0) && (RGB_State == 0) )
			//if(EMS_State == 0||EMS_State==1)
			if(EMS_State == 0)
			{
				//Main_RGB_B_On();//blue on
				Main_RGB_B_Off();  //add 2023.04.14
				
			}
			/*else
			{
			Main_RGB_B_Off();
			}*/
		if(EMS_State!=0) //add 2022.10.15
		{RF_State=0;}             //add 2022.10.15 解决由EMS档重新切换到RF档时，让RF始终保持�?�?
		}
		
      /////////////////////////////////////////////
		/*if(  (MOTOR_State != 0) || (RGB_State != 0) ) //2022/09/28
			{
				Main_RGB_B_Off();//blue off
				
			}*/

		//if(  (RF_State == 0) && (EMS_State == 0) && (MOTOR_State == 0) && (RGB_State == 0) )	
        if(  (RF_State == 0) && (EMS_State == 0))
			{
				//Main_RGB_B_On();//blue on
				Main_RGB_B_Off();  //add 2023.04.14
				
			}

		
	}
	
	else //Charging
	{
		
		if(Flag_Full_Power)
		{
			Main_RGB_G_On();
			Main_RGB_B_Off();		
		
		}
	
	}
	
}  //end
/////////////////////////////////////

/////////////////////////////////////////
void Ten_Min_Stop(void)
{
	if(Flag_10Min_Stop)
	{
		Flag_10Min_Stop = 0;
		printf("\r\nEnter 10Min Stop\r\n");
		restart_wdt();
		delay_ms(10);
		printf("\r\nExit 10Min Stop\r\n");		
	
	}

}
/////////////////////////////////////////

//////////////////////////////////////////
int16 Read_ADC_Channel(int8 Channel)
{
	int16 AD_value= 0;
	int1 done = 0;
	read_adc(ADC_START_ONLY);
	set_adc_channel(Channel);                       // Set ADC channel to AN11
 

 	done = adc_done();


	while(!done) {   
	
	done = adc_done();
	
	}

	AD_value = read_adc(ADC_READ_ONLY);
	
	return AD_value;
}
//////////////////////////////////////////

////////////////////////////////////////
#INT_IOC
void  IOC_isr(void) 
{
//printf("\r\nRB isr\r\n");

   /* if (interrupt_active(INT_IOC_B0))
    {
      clear_interrupt(INT_IOC_B0); 
      
     Flag_Key_POWER_Pressed 	= 1;
	 //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15 
     printf("\r\nB0 isr\r\n"); 
    
 
    } */
    //////////////////////////
  
    
    //if(Flag_Working)
    //{
	   /* if (interrupt_active(INT_IOC_B1))
	    {
	      clear_interrupt(INT_IOC_B1);
	     
	     Flag_Key_RF_Pressed 	= 1; 
		 High_Temp_Alarm_Count=1;  //add 2022.11.18
		 //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15
	     printf("\r\nB1 rf key isr\r\n"); 
	     
	    }   */
	    
	     /*if (interrupt_active(INT_IOC_B4))
	    {
	      clear_interrupt(INT_IOC_B4);
	      
	      Flag_Key_EMS_Pressed 	= 1;   
		  High_Temp_Alarm_Count=1;  //add 2022.11.18   
	      //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15 
	      
	     printf("\r\nB4 ems key isr\r\n"); 
	     
	    		      
	    } */
	    
	    /* if (interrupt_active(INT_IOC_B2))
	    {
	      clear_interrupt(INT_IOC_B2); 
	      Flag_Key_MOTOR_Pressed 	= 1;
		 // Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15 
	     printf("\r\nB3 key motor isr\r\n"); 
	      
	
	    }    */ 
	    
	   /*if (interrupt_active(INT_IOC_B3)&&Flag_RF_Light==1)  //add 2023.01.06
	    {
	      clear_interrupt(INT_IOC_B3); 
	    
		  Flag_Key_RF_Pressed 	= 1;   //add 2022.12.27
		  Flag_key_fall=1; //add 2023.02.17
		
	     printf("\r\nB3 key level isr\r\n"); 
	     
	    }  */ //2023.02.14注释�?

		/*if (interrupt_active(INT_IOC_B3)&&Flag_RF_EMS_Light==1)  //add 2023.01.06
	    {
	      clear_interrupt(INT_IOC_B3); 
	  
		  Flag_Key_EMS_Pressed 	= 1;   //add 2022.12.27
	
	      printf("\r\nB3 key level isr\r\n"); 
	     
	    }   */ //2023.02.14注释�?

		/*if (interrupt_active(INT_IOC_B3))  //add 2023.02.16
		{
	    {
	      clear_interrupt(INT_IOC_B3); 
	  
		  Flag_key_fall = 1;   //add 2023.02.16
	
	      printf("\r\nB3 key level isr\r\n"); 
	     
	    }  
		if(Flag_key_fall == 1) 
		{
			if(input(LED_LEVEL_KEY)==0)
			{
				if(Flag_key_holdon_ms<=156)
				{ 
					Flag_key_holdon_ms++;
				}
				else   //按键按下�?s就判断长按时间成立，生成长按5s标志�?
				{
                    Flag_key_holdon_ms=0;   
					Flag_key_short_press=0;  //清短按键标志
					Flag_key_long_press_2s=0; //清长按键2s标志
					Flag_key_long_press_5s=1; //长按�?s标志位置�?
					Flag_key_fall=0;          //清按键按下标�?

				}
				if(Flag_key_holdon_ms<=62)
				{
					Flag_key_holdon_ms++;
				}
				else   //按键按下�?s就判断长按时间成立，生成长按2s标志�?
				{
                    Flag_key_holdon_ms=0;   
					Flag_key_short_press=0;  //清短按键标志
					Flag_key_long_press_2s=1; //长按�?s标志位置�?
					Flag_key_long_press_5s=0; //清按�?s标志
					Flag_key_fall=0;          //清按键按下标�?
				}

			}
			else  //按键抬起
			{
				if(Flag_key_holdon_ms>1)  //按键按下时间大于107ms，生成单击标�?
				{
					Flag_key_holdon_ms=0;    
					Flag_key_short_press=1;  //短按键标志位置位
					Flag_key_long_press_2s=0; //清长按键2s标志
					Flag_key_long_press_5s=0; //清按�?s标志
					Flag_key_fall=0;          //清按键按下标�?
				}
				else    //按键按下时间小于107ms，忽�?
				{
				    Flag_key_holdon_ms=0;    
					Flag_key_short_press=0;  //清按键短按标�?
					Flag_key_long_press_2s=0; //清长按键2s标志
					Flag_key_long_press_5s=0; //清按�?s标志
					Flag_key_fall=0;          //清按键按下标�?
				}
			}
		}
		} */
    
   // }    
    
    if (interrupt_active(INT_IOC_B5))
    {
      clear_interrupt(INT_IOC_B5); 
      
      Flag_Key_DEBUG_Pressed 	= 1;
	  //Flag_Temp_Alarm_Upper = 0;  //add 2022.11.15 
     printf("\r\nB5 key debug isr\r\n"); 
     

      
    }    
	//RF_EMS_Switch_Key_Handle_Long_Press_2s();
} 


// NOTE - User must include loader.c in future versions of the project
///#include <loader.c>

///#define PUSH_BUTTON PIN_B5

///*
TICK_TYPE GetTickDifference(TICK_TYPE currTick, TICK_TYPE prevTick)
{
   return(currTick-prevTick);
}

//*/

void Timer_Tick(void)
{
	

   //TODO: User Code
} 

//static int32 Timer4_Count = 0;


///////////////////////////////////////
void	Ten_Minutes_Alarm(void)
{
	printf("Ten_Minutes_Alarm\r\n");
	int8 i=0;
	
	setup_timer_4(T6_DIV_BY_16,184,1);		//370 us overflow, 370 us interrupt
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)74);    //modify 370 to 74 2022.11.07 调节占空比数值可以调整beep锐度
	
	for(i=0; i<3; i++)
	{
		pwm_on();
		delay_ms(200);
		pwm_off();
		delay_ms(200);	
	}
	
}
/////////////////////////////////////////

/////////////////////////////////////////
void	Low_Cell_Voltage_Alarm(void)
{
	printf("Low_Cell_Voltage_Alarm\r\n");
	setup_timer_4(T6_DIV_BY_16,184,1);		//370 us overflow, 370 us interrupt
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)370);
	Main_RGB_B_Off();		//blue off	
	
	//add 2022.10.29   �?声和红灯闪烁3次同时进�?
	pwm_on();         //�?次蜂鸣器�?
	delay_ms(30);     //延时30ms
    pwm_off();        //�?次蜂鸣器�?
	delay_ms(750);	  //延时700ms
	pwm_on();         //�?次蜂鸣器�?
	delay_ms(30);     //延时30ms
    pwm_off();        //�?次蜂鸣器�?
	delay_ms(250);	  //延时250ms
	Main_RGB_R_On();  //red on �?次红灯开
	delay_ms(100);	  //延时100ms
    Main_RGB_R_Off(); //red off	�?次红灯关
	delay_ms(400);    //延时400ms
	pwm_on();         //�?次蜂鸣器�?
	delay_ms(30);     //延时30ms
    pwm_off();       //�?次蜂鸣器�?
    delay_ms(600);    //延时600ms
	Main_RGB_R_On();  //red on  �?次红灯开
    delay_ms(100);    //延时100ms
    Main_RGB_R_Off(); //red off �?次红灯关
	delay_ms(50);    //延时50ms
	pwm_on();         //�?次蜂鸣器�?
    delay_ms(30);     //延时30ms
    pwm_off();       //�?次蜂鸣器�?
	delay_ms(750);    //延时750ms
    pwm_on();         //�?次蜂鸣器�?
    delay_ms(30);	  //延时30ms
	pwm_off();       //�?次蜂鸣器�?
    delay_ms(200);	  //延时200ms  
    Main_RGB_R_On();  //red on  �?次红灯开
    delay_ms(100);       //延时100ms
	Main_RGB_R_Off(); //red off �?次红灯关
	delay_ms(10);	  //延时10ms
	Main_RGB_B_Off();  //add 2022.11.07
}   //end
////////////////////////////////////////

//EMS 10个频率产生函�?
/////////////////////////////////////////
void Switch_EMS_Hz_State_1(void)
{
	printf("\r\nEnter Switch_EMS_Hz_State_1\r\n");
	switch(EMS_Hz_State_1)
	{	
		case 1:  //1  488.28Hz
		{
		printf("EMS_Hz_State_1-->1\r\n");
		//1  488.28Hz 
		setup_timer_6(T6_DIV_BY_64,255,1);		//2.048 ms overflow, 2.048 ms interrupt   255->396->255
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)972.8);   //2022.11.01占空比数值由512调整�?56，占空比�?0%调整�?5%
		                             // 2022.11.04占空比数值由256调整�?1.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由51.2调整�?5.6，占空比�?%调整�?.5%
									 //占空�?%�?.5mA左右�?%�?.5mA左右 2022.11.15-占空�?0%   //2022.11.16占空�?%  2022.11.21占空�?5%  //2022.11.22占空�?0%
		dac_i2c_EMS(Vda_EMS_Level_1_1); //add 2022.11.23
				
        setup_timer_6(T6_DIV_BY_64,255,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)40.96);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_1);   //add 2022.12.07
		
		break;
		}

		case 2:   //7  827.81Hz
		{
		printf("EMS_Hz_State_1-->7\r\n");
		//7  827.81Hz 
		setup_timer_6(T6_DIV_BY_64,150,1);		//1.208 ms overflow, 1.208 ms interrupt    150->189->150
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)573.8);   //2022.11.01占空比数值由302调整�?51，占空比�?0%调整�?5%
		                              // 2022.11.04占空比数值由302调整�?0.2，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由30.2调整�?5.1，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_13); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,150,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)24.16);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_13);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}

		case 3:   //4  657.89Hz 
		{	
		printf("EMS_Hz_State_1-->4\r\n");
		//4  657.89Hz 
		setup_timer_6(T6_DIV_BY_64,189,1);		//1.520 ms overflow, 1.520 ms interrupt   189->255->189
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)737.2); //2022.11.01占空比数值由380调整�?90，占空比�?0%调整�?5%
		                            // 2022.11.04占空比数值由190调整�?8，占空比�?5%调整�?%
									// 2022.11.07占空比数值由38调整�?9，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_14); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,189,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)15.2);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_14);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}
		
		case 4:  //8  886.52Hz
		{
		printf("EMS_Hz_State_1-->8\r\n");
		//8  886.52Hz 
		setup_timer_6(T6_DIV_BY_64,140,1);		//1.128 ms overflow, 1.128 ms interrupt   140->174->140
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)541.44);  //2022.11.01占空比数值由282调整�?41，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由141调整�?8.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由28.2调整�?4.1，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_8); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,140,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)16.92);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_8);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 5:   //5  714.29Hz 
		{
		printf("EMS_Hz_State_1-->5\r\n");
		//5  714.29Hz 
		setup_timer_6(T6_DIV_BY_64,174,1);		//1.400 ms overflow, 1.400 ms interrupt   174->228->174
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)658);   //2022.11.01占空比数值由350调整�?75，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由175调整�?5，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由35调整�?7.5，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?3% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_5); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,174,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)35);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_5);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 6:   //2  545.85Hz
		{	
		printf("EMS_Hz_State_1-->2\r\n");
		//2  545.85Hz 
		setup_timer_6(T6_DIV_BY_64,228,1);		//1.832 ms overflow, 1.832 ms interrupt  228->334->228
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)879.36);   //2022.11.01占空比数值由458调整�?29，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由229调整�?5.8，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由45.8调整�?2.9，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_2); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,228,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)27.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_2);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break;	

		}
		
		
		/*case 7:   //6  771.60Hz
		{
		printf("EMS_Hz_State_1-->6\r\n");
		//6  771.60Hz 
		setup_timer_6(T6_DIV_BY_64,161,1);		//1.296 ms overflow, 1.296 ms interrupt    161->207->161
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)602.64);		 //2022.11.01占空比数值由324调整�?62，占空比�?0%调整�?5%
                                          // 2022.11.04占空比数值由162调整�?2.4，占空比�?5%调整�?%
										  // 2022.11.07占空比数值由32.4调整�?6.2，占空比�?%调整�?.5%  //2022.11.16占空�?%    2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_6); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,161,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)38.88);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_6);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break; 
		}*/

		/*case 8:   //9  939.85Hz 
		{
		printf("EMS_Hz_State_1-->9\r\n");
		//9  939.85Hz 
		setup_timer_6(T6_DIV_BY_64,132,1);		//1.064 ms overflow, 1.0 ms interrupt   132->161->132
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)505.4);	//2022.11.01占空比数值由266调整�?33，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由133调整�?6.6，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由26.6调整�?3.3，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?5% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_9); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,132,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)21.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_9);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/

		/*case 9:  //3  600.96Hz 
		{	
		printf("EMS_Hz_State_1-->3\r\n");
		//3  600.96Hz 
		setup_timer_6(T6_DIV_BY_64,207,1);		//1.664 ms overflow, 1.664 ms interrupt   207->289->207
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)790.4); //2022.11.01占空比数值由416调整�?08，占空比�?0%调整�?5%
			                        // 2022.11.04占空比数值由208调整�?1.6，占空比�?5%调整�?%
									// 2022.11.07占空比数值由41.6调整�?0.8，占空比�?%调整�?.5%  //2022.11.16占空�?%  2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_3); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,207,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)33.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_3);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break; 
		}*/
		
		/*case 10:    //10  984.25Hz 
		{
		printf("EMS_Hz_State_1-->10\r\n");
		//10  984.25Hz 
		setup_timer_6(T6_DIV_BY_64,126,1);		//1.0 ms overflow, 1.0 ms interrupt //add 2022.10.25由之前的124改为123对应频率�?000Hz改为984Hz左右   121->150->126
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)472.44); //add 2022.10.25由之前的250改为248，占空比�?0%  //2022.11.01占空比数值由248调整�?24，占空比�?0%调整�?5%
                                    // 2022.11.04占空比数值由124调整�?4.4，占空比�?5%调整�?%
									// 2022.11.07占空比数值由24.4调整�?2.2，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_1_10); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,126,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)30.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_1_10);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/
		
		default:
		{
		break;
		}
	}
}
//////////////////////////////////////////////


//EMS 10个频率产生函�?//add 2022.12.15
/////////////////////////////////////////
void Switch_EMS_Hz_State_2(void)
{
	printf("\r\nEnter Switch_EMS_Hz_State_2\r\n");
	switch(EMS_Hz_State_2)
	{	
		case 1:  //1 488.28Hz
		{
		printf("EMS_Hz_State_2-->1\r\n");
		//1 488.28Hz 
		setup_timer_6(T6_DIV_BY_64,255,1);		//2.048 ms overflow, 2.048 ms interrupt   255->396->255
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)972.8);   //2022.11.01占空比数值由512调整�?56，占空比�?0%调整�?5%
		                             // 2022.11.04占空比数值由256调整�?1.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由51.2调整�?5.6，占空比�?%调整�?.5%
									 //占空�?%�?.5mA左右�?%�?.5mA左右 2022.11.15-占空�?0%   //2022.11.16占空�?%  2022.11.21占空�?5%  //2022.11.22占空�?0%
		dac_i2c_EMS(Vda_EMS_Level_2_1); //add 2022.11.23
				
        setup_timer_6(T6_DIV_BY_64,255,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)40.96);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_1);   //add 2022.12.07
											
		break;
		}

		case 2:   //7  827.81Hz 
		{
		printf("EMS_Hz_State_2-->7\r\n");
		//7  827.81Hz 
		setup_timer_6(T6_DIV_BY_64,150,1);		//1.208 ms overflow, 1.208 ms interrupt    150->189->150
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)573.8);   //2022.11.01占空比数值由302调整�?51，占空比�?0%调整�?5%
		                              // 2022.11.04占空比数值由302调整�?0.2，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由30.2调整�?5.1，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_13); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,150,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)24.16);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_13);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}

		case 3:  //4  657.89Hz 
		{	
		printf("EMS_Hz_State_2-->4\r\n");
		//4  657.89Hz 
		setup_timer_6(T6_DIV_BY_64,189,1);		//1.520 ms overflow, 1.520 ms interrupt   189->255->189
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)737.2); //2022.11.01占空比数值由380调整�?90，占空比�?0%调整�?5%
		                            // 2022.11.04占空比数值由190调整�?8，占空比�?5%调整�?%
									// 2022.11.07占空比数值由38调整�?9，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_14); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,189,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)15.2);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_14);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}
				
		case 4:  //8  886.52Hz 
		{
		printf("EMS_Hz_State_2-->8\r\n");
		//8  886.52Hz 
		setup_timer_6(T6_DIV_BY_64,140,1);		//1.128 ms overflow, 1.128 ms interrupt   140->174->140
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)541.44);  //2022.11.01占空比数值由282调整�?41，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由141调整�?8.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由28.2调整�?4.1，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_8); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,140,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)16.92);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_8);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 5:   //5  714.29Hz 
		{
		printf("EMS_Hz_State_2-->5\r\n");
		//5  714.29Hz 
		setup_timer_6(T6_DIV_BY_64,174,1);		//1.400 ms overflow, 1.400 ms interrupt   174->228->174
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)658);   //2022.11.01占空比数值由350调整�?75，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由175调整�?5，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由35调整�?7.5，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?3% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_5); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,174,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)35);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_5);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 6:    //2  545.85Hz 
		{	
		printf("EMS_Hz_State_2-->2\r\n");
		//2  545.85Hz 
		setup_timer_6(T6_DIV_BY_64,228,1);		//1.832 ms overflow, 1.832 ms interrupt  228->334->228
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)879.36);   //2022.11.01占空比数值由458调整�?29，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由229调整�?5.8，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由45.8调整�?2.9，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_2); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,228,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)27.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_2);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break;	

		}
		
		
		/*case 7:   //6  771.60Hz 
		{
		printf("EMS_Hz_State_2-->6\r\n");
		//6  771.60Hz 
		setup_timer_6(T6_DIV_BY_64,161,1);		//1.296 ms overflow, 1.296 ms interrupt    161->207->161
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)602.64);		 //2022.11.01占空比数值由324调整�?62，占空比�?0%调整�?5%
                                          // 2022.11.04占空比数值由162调整�?2.4，占空比�?5%调整�?%
										  // 2022.11.07占空比数值由32.4调整�?6.2，占空比�?%调整�?.5%  //2022.11.16占空�?%    2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_6); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,161,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)38.88);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_6);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break; 
		}*/

		/*case 8:  //9  939.85Hz 
		{
		printf("EMS_Hz_State_2-->9\r\n");
		//9  939.85Hz 
		setup_timer_6(T6_DIV_BY_64,132,1);		//1.064 ms overflow, 1.0 ms interrupt   132->161->132
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)505.4);	//2022.11.01占空比数值由266调整�?33，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由133调整�?6.6，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由26.6调整�?3.3，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?5% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_9); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,132,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)21.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_9);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/

		/*case 9:  //3  600.96Hz
		{	
		printf("EMS_Hz_State_2-->3\r\n");
		//3  600.96Hz 
		setup_timer_6(T6_DIV_BY_64,207,1);		//1.664 ms overflow, 1.664 ms interrupt   207->289->207
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)790.4); //2022.11.01占空比数值由416调整�?08，占空比�?0%调整�?5%
			                        // 2022.11.04占空比数值由208调整�?1.6，占空比�?5%调整�?%
									// 2022.11.07占空比数值由41.6调整�?0.8，占空比�?%调整�?.5%  //2022.11.16占空�?%  2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_3); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,207,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)33.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_3);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break; 
		}*/
		
		/*case 10:   //10  984.25Hz 
		{
		printf("EMS_Hz_State_2-->10\r\n");
		//10  984.25Hz 
		setup_timer_6(T6_DIV_BY_64,126,1);		//1.0 ms overflow, 1.0 ms interrupt //add 2022.10.25由之前的124改为123对应频率�?000Hz改为984Hz左右   121->150->126
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)472.44); //add 2022.10.25由之前的250改为248，占空比�?0%  //2022.11.01占空比数值由248调整�?24，占空比�?0%调整�?5%
                                    // 2022.11.04占空比数值由124调整�?4.4，占空比�?5%调整�?%
									// 2022.11.07占空比数值由24.4调整�?2.2，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_2_10); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,126,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)30.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_2_10);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/
		
		default:
		{
		break;
		}
	}
}
//////////////////////////////////////////////


//EMS 10个频率产生函�?//add 2022.12.15
/////////////////////////////////////////
void Switch_EMS_Hz_State_3(void)
{
	printf("\r\nEnter Switch_EMS_Hz_State_3\r\n");
	switch(EMS_Hz_State_3)
	{	
		case 1: //1 488.28Hz
		{
		printf("EMS_Hz_State_3-->1\r\n");
		//1 488.28Hz 
		setup_timer_6(T6_DIV_BY_64,255,1);		//2.048 ms overflow, 2.048 ms interrupt   255->396->255
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)972.8);   //2022.11.01占空比数值由512调整�?56，占空比�?0%调整�?5%
		                             // 2022.11.04占空比数值由256调整�?1.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由51.2调整�?5.6，占空比�?%调整�?.5%
									 //占空�?%�?.5mA左右�?%�?.5mA左右 2022.11.15-占空�?0%   //2022.11.16占空�?%  2022.11.21占空�?5%  //2022.11.22占空�?0%
		dac_i2c_EMS(Vda_EMS_Level_3_1); //add 2022.11.23
				
        setup_timer_6(T6_DIV_BY_64,255,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)40.96);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_1);   //add 2022.12.07
					
		break;
		}

		case 2:  //7 827.81Hz
		{
		printf("EMS_Hz_State_3-->7\r\n");
		//7  827.81Hz 
		setup_timer_6(T6_DIV_BY_64,150,1);		//1.208 ms overflow, 1.208 ms interrupt    150->189->150
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)573.8);   //2022.11.01占空比数值由302调整�?51，占空比�?0%调整�?5%
		                              // 2022.11.04占空比数值由302调整�?0.2，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由30.2调整�?5.1，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_13); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,150,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)24.16);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_13);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}

		case 3:  //4 657.89Hz
		{	
		printf("EMS_Hz_State_3-->4\r\n");
		//4  657.89Hz 
		setup_timer_6(T6_DIV_BY_64,189,1);		//1.520 ms overflow, 1.520 ms interrupt   189->255->189
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)737.2); //2022.11.01占空比数值由380调整�?90，占空比�?0%调整�?5%
		                            // 2022.11.04占空比数值由190调整�?8，占空比�?5%调整�?%
									// 2022.11.07占空比数值由38调整�?9，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_14); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,189,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)15.2);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_14);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}
		
		
		case 4:  //8 886.52Hz
		{
		printf("EMS_Hz_State_3-->8\r\n");
		//8  886.52Hz 
		setup_timer_6(T6_DIV_BY_64,140,1);		//1.128 ms overflow, 1.128 ms interrupt   140->174->140
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)541.44);  //2022.11.01占空比数值由282调整�?41，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由141调整�?8.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由28.2调整�?4.1，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_8); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,140,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)16.92);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_8);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 5: //5 714.29Hz
		{
		printf("EMS_Hz_State_3-->5\r\n");
		//5 714.29Hz 
		setup_timer_6(T6_DIV_BY_64,174,1);		//1.400 ms overflow, 1.400 ms interrupt   174->228->174
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)658);   //2022.11.01占空比数值由350调整�?75，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由175调整�?5，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由35调整�?7.5，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?3% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_5); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,174,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)35);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_5);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 6:  //2 545.85Hz
		{	
		printf("EMS_Hz_State_3-->2\r\n");
		//2  545.85Hz 
		setup_timer_6(T6_DIV_BY_64,228,1);		//1.832 ms overflow, 1.832 ms interrupt  228->334->228
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)879.36);   //2022.11.01占空比数值由458调整�?29，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由229调整�?5.8，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由45.8调整�?2.9，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_2); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,228,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)27.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_2);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break;	

		}
		
		
		/*case 7:  //6 771.60Hz
		{
		printf("EMS_Hz_State_3-->6\r\n");
		//6  771.60Hz 
		setup_timer_6(T6_DIV_BY_64,161,1);		//1.296 ms overflow, 1.296 ms interrupt    161->207->161
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)602.64);		 //2022.11.01占空比数值由324调整�?62，占空比�?0%调整�?5%
                                          // 2022.11.04占空比数值由162调整�?2.4，占空比�?5%调整�?%
										  // 2022.11.07占空比数值由32.4调整�?6.2，占空比�?%调整�?.5%  //2022.11.16占空�?%    2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_6); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,161,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)38.88);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_6);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break; 
		}*/

		/*case 8:  	//9  939.85Hz 
		{
		printf("EMS_Hz_State_3-->9\r\n");
		//9  939.85Hz 
		setup_timer_6(T6_DIV_BY_64,132,1);		//1.064 ms overflow, 1.0 ms interrupt   132->161->132
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)505.4);	//2022.11.01占空比数值由266调整�?33，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由133调整�?6.6，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由26.6调整�?3.3，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?5% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_9); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,132,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)21.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_9);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/

		/*case 9:  //3  600.96Hz 
		{	
		printf("EMS_Hz_State_3-->3\r\n");
		//3  600.96Hz 
		setup_timer_6(T6_DIV_BY_64,207,1);		//1.664 ms overflow, 1.664 ms interrupt   207->289->207
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)790.4); //2022.11.01占空比数值由416调整�?08，占空比�?0%调整�?5%
			                        // 2022.11.04占空比数值由208调整�?1.6，占空比�?5%调整�?%
									// 2022.11.07占空比数值由41.6调整�?0.8，占空比�?%调整�?.5%  //2022.11.16占空�?%  2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_3); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,207,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)33.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_3);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break; 
		}*/
		
		/*case 10:   //10 984.25Hz
		{
		printf("EMS_Hz_State_3-->10\r\n");
		//10 984.25Hz   
		setup_timer_6(T6_DIV_BY_64,126,1);		//1.0 ms overflow, 1.0 ms interrupt //add 2022.10.25由之前的124改为123对应频率�?000Hz改为984Hz左右   121->150->126
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)472.44); //add 2022.10.25由之前的250改为248，占空比�?0%  //2022.11.01占空比数值由248调整�?24，占空比�?0%调整�?5%
                                    // 2022.11.04占空比数值由124调整�?4.4，占空比�?5%调整�?%
									// 2022.11.07占空比数值由24.4调整�?2.2，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_3_10); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,126,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)30.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_3_10);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/
		

		default:
		{
		break;
		}
	}
}
//////////////////////////////////////////////

//EMS 10个频率产生函�?/add 2023.02.27
/////////////////////////////////////////
void Switch_EMS_Hz_State_4(void)
{
	printf("\r\nEnter Switch_EMS_Hz_State_4\r\n");
	switch(EMS_Hz_State_4)
	{	
		case 1: //1 488.28Hz
		{
		printf("EMS_Hz_State_4-->1\r\n");
		//1 488.28Hz //2022.11.16  1  314.86Hz    //2022.11.17  1  488.28Hz 
		setup_timer_6(T6_DIV_BY_64,255,1);		//2.048 ms overflow, 2.048 ms interrupt   255->396->255
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)972.8);   //2022.11.01占空比数值由512调整�?56，占空比�?0%调整�?5%
		                             // 2022.11.04占空比数值由256调整�?1.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由51.2调整�?5.6，占空比�?%调整�?.5%
									 //占空�?%�?.5mA左右�?%�?.5mA左右 2022.11.15-占空�?0%   //2022.11.16占空�?%  2022.11.21占空�?5%  //2022.11.22占空�?0%
		dac_i2c_EMS(Vda_EMS_Level_4_1); //add 2022.11.23
		
        setup_timer_6(T6_DIV_BY_64,255,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)40.96);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_1);   //add 2022.12.07
											
		break;
		}

		case 2: //7 827.81Hz
		{
		
		printf("EMS_Hz_State_4-->7\r\n");
		//7 827.81Hz    
		setup_timer_6(T6_DIV_BY_64,150,1);		//1.208 ms overflow, 1.208 ms interrupt    150->189->150
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)573.8);   //2022.11.01占空比数值由302调整�?51，占空比�?0%调整�?5%
		                              // 2022.11.04占空比数值由302调整�?0.2，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由30.2调整�?5.1，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_13); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,150,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)24.16);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_13);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}

		case 3: //4 657.89Hz
		{	
		
		printf("EMS_Hz_State_4-->4\r\n");
		
		//4 657.89Hz  
		setup_timer_6(T6_DIV_BY_64,189,1);		//1.520 ms overflow, 1.520 ms interrupt   189->255->189
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)737.2); //2022.11.01占空比数值由380调整�?90，占空比�?0%调整�?5%
		                            // 2022.11.04占空比数值由190调整�?8，占空比�?5%调整�?%
									// 2022.11.07占空比数值由38调整�?9，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_14); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,189,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)15.2);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_14);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}
		
		
		case 4: //8 886.52Hz
		{
		
		printf("EMS_Hz_State_4-->8\r\n");
		//8 886.52Hz   
		setup_timer_6(T6_DIV_BY_64,140,1);		//1.128 ms overflow, 1.128 ms interrupt   140->174->140
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)541.44);  //2022.11.01占空比数值由282调整�?41，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由141调整�?8.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由28.2调整�?4.1，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_8); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,140,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)16.92);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_8);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 5:  //5 714.29Hz
		{
		printf("EMS_Hz_State_4-->5\r\n");
		//5 714.29Hz     
		setup_timer_6(T6_DIV_BY_64,174,1);		//1.400 ms overflow, 1.400 ms interrupt   174->228->174
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)658);   //2022.11.01占空比数值由350调整�?75，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由175调整�?5，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由35调整�?7.5，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?3% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_5); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,174,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)35);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_5);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 6: //2 545.85Hz
		{	
		printf("EMS_Hz_State_4-->2\r\n");
		//2 545.85Hz 
		setup_timer_6(T6_DIV_BY_64,228,1);		//1.832 ms overflow, 1.832 ms interrupt  228->334->228
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)879.36);   //2022.11.01占空比数值由458调整�?29，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由229调整�?5.8，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由45.8调整�?2.9，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_2); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,228,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)27.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_2);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break;	
		}
		
		
		/*case 7:  //6  771.60Hz
		{
		printf("EMS_Hz_State_4-->6\r\n");
		//6 771.60Hz   
		setup_timer_6(T6_DIV_BY_64,161,1);		//1.296 ms overflow, 1.296 ms interrupt    161->207->161
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)602.64);		 //2022.11.01占空比数值由324调整�?62，占空比�?0%调整�?5%
                                          // 2022.11.04占空比数值由162调整�?2.4，占空比�?5%调整�?%
										  // 2022.11.07占空比数值由32.4调整�?6.2，占空比�?%调整�?.5%  //2022.11.16占空�?%    2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_6); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,161,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)38.88);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_6);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break; 
		}*/

		/*case 8:  //9 939.85Hz
		{
		printf("EMS_Hz_State_4-->9\r\n");
		//9  939.85Hz 
		setup_timer_6(T6_DIV_BY_64,132,1);		//1.064 ms overflow, 1.0 ms interrupt   132->161->132
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)505.4);	//2022.11.01占空比数值由266调整�?33，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由133调整�?6.6，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由26.6调整�?3.3，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?5% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_9); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,132,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)21.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_9);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/

		/*case 9: //3 600.96Hz
		{	
		printf("EMS_Hz_State_4-->3\r\n");
		//3  600.96Hz 
		setup_timer_6(T6_DIV_BY_64,207,1);		//1.664 ms overflow, 1.664 ms interrupt   207->289->207
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)790.4); //2022.11.01占空比数值由416调整�?08，占空比�?0%调整�?5%
			                        // 2022.11.04占空比数值由208调整�?1.6，占空比�?5%调整�?%
									// 2022.11.07占空比数值由41.6调整�?0.8，占空比�?%调整�?.5%  //2022.11.16占空�?%  2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_3); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,207,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)33.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_3);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break; 
		}*/
		
		/*case 10: //10 984.25Hz
		{
		printf("EMS_Hz_State_4-->10\r\n");
		//10 984.25Hz  
		setup_timer_6(T6_DIV_BY_64,126,1);		//1.0 ms overflow, 1.0 ms interrupt //add 2022.10.25由之前的124改为123对应频率�?000Hz改为984Hz左右   121->150->126
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)472.44); //add 2022.10.25由之前的250改为248，占空比�?0%  //2022.11.01占空比数值由248调整�?24，占空比�?0%调整�?5%
                                    // 2022.11.04占空比数值由124调整�?4.4，占空比�?5%调整�?%
									// 2022.11.07占空比数值由24.4调整�?2.2，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_4_10); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,126,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)30.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_4_10);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/
		

		default:
		{
		break;
		}
	}
}
//////////////////////////////////////////////

//EMS 10个频率产生函�?/add 2023.02.27
/////////////////////////////////////////
void Switch_EMS_Hz_State_5(void)
{
	printf("\r\nEnter Switch_EMS_Hz_State_5\r\n");
	switch(EMS_Hz_State_5)
	{	
		case 1: //1 488.28Hz
		{
		printf("EMS_Hz_State_5-->1\r\n");
		//1 488.28Hz //2022.11.16  1  314.86Hz    //2022.11.17  1  488.28Hz 
		setup_timer_6(T6_DIV_BY_64,255,1);		//2.048 ms overflow, 2.048 ms interrupt   255->396->255
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)972.8);   //2022.11.01占空比数值由512调整�?56，占空比�?0%调整�?5%
		                             // 2022.11.04占空比数值由256调整�?1.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由51.2调整�?5.6，占空比�?%调整�?.5%
									 //占空�?%�?.5mA左右�?%�?.5mA左右 2022.11.15-占空�?0%   //2022.11.16占空�?%  2022.11.21占空�?5%  //2022.11.22占空�?0%
		dac_i2c_EMS(Vda_EMS_Level_5_1); //add 2022.11.23
		
        setup_timer_6(T6_DIV_BY_64,255,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)40.96);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_1);   //add 2022.12.07
											
		break;
		}

		case 2: //7 827.81Hz
		{
		
		printf("EMS_Hz_State_5-->7\r\n");
		//7 827.81Hz    
		setup_timer_6(T6_DIV_BY_64,150,1);		//1.208 ms overflow, 1.208 ms interrupt    150->189->150
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)573.8);   //2022.11.01占空比数值由302调整�?51，占空比�?0%调整�?5%
		                              // 2022.11.04占空比数值由302调整�?0.2，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由30.2调整�?5.1，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_13); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,150,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)24.16);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_13);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}

		case 3: //4 657.89Hz
		{	
		
		printf("EMS_Hz_State_5-->4\r\n");
		
		//4 657.89Hz  
		setup_timer_6(T6_DIV_BY_64,189,1);		//1.520 ms overflow, 1.520 ms interrupt   189->255->189
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)737.2); //2022.11.01占空比数值由380调整�?90，占空比�?0%调整�?5%
		                            // 2022.11.04占空比数值由190调整�?8，占空比�?5%调整�?%
									// 2022.11.07占空比数值由38调整�?9，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_14); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,189,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)15.2);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_14);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}
		
		
		case 4: //8 886.52Hz
		{
		
		printf("EMS_Hz_State_5-->8\r\n");
		//8 886.52Hz   
		setup_timer_6(T6_DIV_BY_64,140,1);		//1.128 ms overflow, 1.128 ms interrupt   140->174->140
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)541.44);  //2022.11.01占空比数值由282调整�?41，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由141调整�?8.2，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由28.2调整�?4.1，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?6% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_8); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,140,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)16.92);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_8);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 5:  //5 714.29Hz
		{
		printf("EMS_Hz_State_5-->5\r\n");
		//5 714.29Hz     
		setup_timer_6(T6_DIV_BY_64,174,1);		//1.400 ms overflow, 1.400 ms interrupt   174->228->174
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)658);   //2022.11.01占空比数值由350调整�?75，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由175调整�?5，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由35调整�?7.5，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?3% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_5); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,174,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)35);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_5);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;	
		}

		case 6: //2 545.85Hz
		{	
		printf("EMS_Hz_State_5-->2\r\n");
		//2 545.85Hz 
		setup_timer_6(T6_DIV_BY_64,228,1);		//1.832 ms overflow, 1.832 ms interrupt  228->334->228
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)879.36);   //2022.11.01占空比数值由458调整�?29，占空比�?0%调整�?5%
			                          // 2022.11.04占空比数值由229调整�?5.8，占空比�?5%调整�?%
									  // 2022.11.07占空比数值由45.8调整�?2.9，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_2); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,228,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)27.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_2);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break;	
		}
		
		
		/*case 7:  //6  771.60Hz
		{
		printf("EMS_Hz_State_5-->6\r\n");
		//6 771.60Hz   
		setup_timer_6(T6_DIV_BY_64,161,1);		//1.296 ms overflow, 1.296 ms interrupt    161->207->161
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)602.64);		 //2022.11.01占空比数值由324调整�?62，占空比�?0%调整�?5%
                                          // 2022.11.04占空比数值由162调整�?2.4，占空比�?5%调整�?%
										  // 2022.11.07占空比数值由32.4调整�?6.2，占空比�?%调整�?.5%  //2022.11.16占空�?%    2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_6); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,161,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)38.88);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_6);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break; 
		}*/

		/*case 8:  //9 939.85Hz
		{
		printf("EMS_Hz_State_5-->9\r\n");
		//9  939.85Hz 
		setup_timer_6(T6_DIV_BY_64,132,1);		//1.064 ms overflow, 1.0 ms interrupt   132->161->132
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)505.4);	//2022.11.01占空比数值由266调整�?33，占空比�?0%调整�?5%
			                         // 2022.11.04占空比数值由133调整�?6.6，占空比�?5%调整�?%
									 // 2022.11.07占空比数值由26.6调整�?3.3，占空比�?%调整�?.5%  //2022.11.16占空�?% 2022.11.21占空�?5% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_9); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,132,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)21.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_9);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/

		/*case 9: //3 600.96Hz
		{	
		printf("EMS_Hz_State_5-->3\r\n");
		//3  600.96Hz 
		setup_timer_6(T6_DIV_BY_64,207,1);		//1.664 ms overflow, 1.664 ms interrupt   207->289->207
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)790.4); //2022.11.01占空比数值由416调整�?08，占空比�?0%调整�?5%
			                        // 2022.11.04占空比数值由208调整�?1.6，占空比�?5%调整�?%
									// 2022.11.07占空比数值由41.6调整�?0.8，占空比�?%调整�?.5%  //2022.11.16占空�?%  2022.11.21占空�?4% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_3); //add 2022.11.23

        setup_timer_6(T6_DIV_BY_64,207,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)33.28);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_3);   //add 2022.12.07
        delay_ms(100);  //add 2022.12.09
		break; 
		}*/
		
		/*case 10: //10 984.25Hz
		{
		printf("EMS_Hz_State_5-->10\r\n");
		//10 984.25Hz  
		setup_timer_6(T6_DIV_BY_64,126,1);		//1.0 ms overflow, 1.0 ms interrupt //add 2022.10.25由之前的124改为123对应频率�?000Hz改为984Hz左右   121->150->126
		setup_ccp3(CCP_PWM|CCP_PWM_L_L|CCP_TIMER6);
		set_pwm3_duty((int16)472.44); //add 2022.10.25由之前的250改为248，占空比�?0%  //2022.11.01占空比数值由248调整�?24，占空比�?0%调整�?5%
                                    // 2022.11.04占空比数值由124调整�?4.4，占空比�?5%调整�?%
									// 2022.11.07占空比数值由24.4调整�?2.2，占空比�?%调整�?.5%   //2022.11.16占空�?%  2022.11.21占空�?0% //2022.11.22占空�?0% 
		dac_i2c_EMS(Vda_EMS_Level_5_10); //add 2022.11.23

		setup_timer_6(T6_DIV_BY_64,126,1);  //add 2022.12.07
        setup_ccp5(CCP_PWM|CCP_PWM_H_H|CCP_TIMER6);  //add 2022.12.07
		set_pwm5_duty((int16)30.48);   //add 2022.12.07
        dac_i2c_EMS(Vda_EMS_Level_5_10);   //add 2022.12.07
		delay_ms(100);  //add 2022.12.09
		break;
		}*/
		

		default:
		{
		break;
		}
	}
}
//////////////////////////////////////////////

///////////////////////////////////
void RF_PWM1_OFF(void)
{
	Disable_RF_Power();
    Disable_ALL_RF_Output();
    Disable_RF_MOS_Driver(); 
	CCP1M_3 = 0;
	CCP1M_2 = 0;	
	CCP1M_1 = 0;	
	CCP1M_0 = 0;
}

void RF_PWM1_ON(void)
{
	 Enable_RF_Power();
     Enable_RF_MOS_Driver();
     Enable_ALL_RF_Output();	      
     setup_ccp1(CCP_PWM|CCP_PWM_HALF_BRIDGE);   //2022/09/07  

}
/////////////////////////////////////////////

void EMS_PWM3_OFF(void)
{
	CCP3M_3 = 0;
	CCP3M_2 = 0;	
	CCP3M_1 = 0;	
	CCP3M_0 = 0;
	
}

/////////////////////////////////////////////
void EMS_PWM5_OFF(void)   //add 2022.12.06
{
	CCP5M_3 = 0;
	CCP5M_2 = 0;	
	CCP5M_1 = 0;	
	CCP5M_0 = 0;
	
}
/////////////////////////////////////////
#byte ANSELE = 0x190

#bit ANSE0 = ANSELE.0
#bit ANSE1 = ANSELE.1
#bit ANSE2 = ANSELE.2

void Charge_Check(void) //2022/09/06
{	
	ANSE0 = 0;	
	ANSE1 = 0;	
	ANSE2 = 0;
	set_tris_e(0x03);
	//set_tris_e(0x83);  //add 2022.10.31�?x03改为0x83，将RE7由输出改为输入接�?
	delay_cycles(1); //2022.11.04注释�?
	
	if(!input(CHARGE_ING))
	{
		output_toggle(CHARGE_FULL_LED);
		printf("\r\Charging\r\n");
				
	}
	
	if(!input(CHARGE_FULL))
	{  
		pwm_off(); //add 2022.11.06
		Main_RGB_G_On();
		printf("\r\Charge full\r\n");		

	}	
//} //add 2022.11.06
}

#INT_TIMER1
void  TIMER1_isr(void) 
{	
	setup_timer_1(T1_INTERNAL|T1_DIV_BY_8); //1us
	set_timer1(65535-49999); //50ms
//	set_timer1(65535-9999); //10ms	
//	set_timer1(65535-999); //1ms
		
//	set_timer1(65535-499); //500us
//	set_timer1(65535-199); //200us
			
	Timer1_Count++;
	RF_Count++;
	EMS_Count++; //add 2022.12.01
	

	if( (Timer1_Count%20)== 20-1) //1s
	{
		Flag_Second =1;
		printf("\r\n1 Sencond\r\n");
	}
	
	if( (Timer1_Count%10)== 10-1) //0.5s
	
	{
		Flag_Half_Second =1;
		printf("\r\n0.5 Sencond\r\n");
		
	}	
	
////////////////////////////////////////
	if( (Timer1_Count%(20*10))== 20*10-1) //10 Second
	{
		
		Flag_10_Second = 1;
		printf("\r\n10 Sencond\r\n");	
	}
/////////////////////////////////////////  
	
	 if( (Timer1_Count%(20*5))== 20*5-1) //5 Second //add 2022.10.24开�?s定时�?
	  {
		
		Flag_5_Second = 1;  //5 Second //add 2022.10.24开�?s定时器标志位
		printf("\r\n5 Sencond\r\n");
		
	  } 	
/////////////////////////////////////////
	
//	if( (Timer1_Count%(20*600))== 20*600-1) //10min

	if( (Timer1_Count%(20*500))== 20*500-1) //10min //2022/09/22
	{
		Flag_10Min_Start=1;
		printf("\r\n10minutes\r\n");
	
		if(Flag_Working) //2022/09/22
		{
		Ten_Minutes_Alarm();
		All_Power_Off();	//off the all power
		}
	}  //end
	////////////////////////////////
    
	//add 2022.11.03 4小时倒计�?
    ///////////////////////////////////////
       if( (Timer1_Count%(24*20*500))== 24*20*500-1) //4 hours //2022/10/19
	{
		Flag_4_Hour = 1; //add 2022.11.03 增加4小时标志
		printf("\r\n4 hours\r\n");	
	}
   //////////////////////////////////////

	//////////////////////////////////

	//if( (Timer1_Count%40)== 40-1) //2s
	if( (Timer1_Count%5)== 5-1) //0.25s   //add 2022.11.24
	//if( (Timer1_Count%60)== 60-1) //3s     //add 2022.12.09
	//if( (Timer1_Count%2)== 2-1) //0.1s   //add 2022.12.15
	//if( (Timer1_Count%5)== 5-1) //0.3s   //add 2022.12.15
	//if( (Timer1_Count%4)== 4-1) //0.2s   //add 2022.12.15
	{			
		if(Flag_EMS_Working)
		{
			EMS_Hz_State_1 %=10;
			EMS_Hz_State_1++;
			Flag_Renew_EMS_Hz_1 = 1;	
			printf("\r\nEMS_Hz_State_1=%d\r\n",EMS_Hz_State_1);
			
		}	
	}	
//////////////////////////////////////////

//add 2022.12.15
////////////////////////////////////////////
//if( (Timer1_Count%40)== 40-1) //2s
	if( (Timer1_Count%5)== 5-1) //0.25s   //add 2022.11.24
	//if( (Timer1_Count%60)== 60-1) //3s     //add 2022.12.09
	//if( (Timer1_Count%2)== 2-1) //0.1s   //add 2022.12.15
	//if( (Timer1_Count%5)== 5-1) //0.3s   //add 2022.12.15
	//if( (Timer1_Count%4)== 4-1) //0.2s   //add 2022.12.15
	{	
		if(Flag_EMS_Working)
		{
			EMS_Hz_State_2 %=10;
			EMS_Hz_State_2++;
			Flag_Renew_EMS_Hz_2 = 1;
			printf("\r\nEMS_Hz_State_2=%d\r\n",EMS_Hz_State_2);
		}	
	}	
//////////////////////////////////////////

//add 2022.12.15
/////////////////////////////////////////
//if( (Timer1_Count%40)== 40-1) //2s
	if( (Timer1_Count%5)== 5-1) //0.25s   //add 2022.11.24
	//if( (Timer1_Count%60)== 60-1) //3s     //add 2022.12.09
	//if( (Timer1_Count%2)== 2-1) //0.1s   //add 2022.12.15
	//if( (Timer1_Count%5)== 5-1) //0.3s   //add 2022.12.15
	//if( (Timer1_Count%4)== 4-1) //0.2s   //add 2022.12.15
	{
				
		if(Flag_EMS_Working)
		{
			EMS_Hz_State_3 %=10;
			EMS_Hz_State_3++;
			Flag_Renew_EMS_Hz_3 = 1;		
			printf("\r\nEMS_Hz_State_3=%d\r\n",EMS_Hz_State_3);
			
		}	
	}	
//////////////////////////////////////////

//add 2023.02.24
/////////////////////////////////////////
//if( (Timer1_Count%40)== 40-1) //2s
	if( (Timer1_Count%5)== 5-1) //0.25s   //add 2022.11.24
	//if( (Timer1_Count%60)== 60-1) //3s     //add 2022.12.09
	//if( (Timer1_Count%2)== 2-1) //0.1s   //add 2022.12.15
	//if( (Timer1_Count%5)== 5-1) //0.3s   //add 2022.12.15
	//if( (Timer1_Count%4)== 4-1) //0.2s   //add 2022.12.15
	{
		if(Flag_EMS_Working)
		{	 
			EMS_Hz_State_4 %=10;
			EMS_Hz_State_4++;
			Flag_Renew_EMS_Hz_4 = 1;
			printf("\r\nEMS_Hz_State_4=%d\r\n",EMS_Hz_State_4);
		}	
	}	
//////////////////////////////////////////

//add 2023.02.24
/////////////////////////////////////////
//if( (Timer1_Count%40)== 40-1) //2s
	if( (Timer1_Count%5)== 5-1) //0.25s   //add 2022.11.24
	//if( (Timer1_Count%60)== 60-1) //3s     //add 2022.12.09
	//if( (Timer1_Count%2)== 2-1) //0.1s   //add 2022.12.15
	//if( (Timer1_Count%5)== 5-1) //0.3s   //add 2022.12.15
	//if( (Timer1_Count%4)== 4-1) //0.2s   //add 2022.12.15
	{		
		if(Flag_EMS_Working)
		{		 
			EMS_Hz_State_5 %=10;
			EMS_Hz_State_5++;
			Flag_Renew_EMS_Hz_5 = 1;
			printf("\r\nEMS_Hz_State_5=%d\r\n",EMS_Hz_State_5);
		}	
	}	
//////////////////////////////////////////

//add 2023.04.14
/////////////////////////////////////////
/*if(Flag_Level_Key_Press)
//if(LED_LEVEL_KEY==0)
{
	keytimecount5++;
	if( (Timer1_Count%40)== 40-1) //2s
	{
		Flag_2_Second=1;
	}
	if( (Timer1_Count%20)== 20-1) //1s
	{
		Flag_Second=1;
	}
}*/
 
//////////////////////////////////////////

/////////////////////////////
	if(Flag_RF_Working)
	{
		EMS_PWM3_OFF();
		EMS_PWM5_OFF();   //add 2022.12.07

		/*if(RF_State == 1)           //2022.11.11由RF_STATE改为RF_State
			{	
												
				if( (RF_Count%50 > 45)	)	//2022/09/09
				{
				Disable_RF_Power();
      			Disable_ALL_RF_Output();
      			Disable_RF_MOS_Driver(); 
      			RF_PWM1_OFF();     			
				}
								
				else //2022/09/09
				{		
				RF_State_1();
				Enable_RF_Power();       
      			Enable_RF_MOS_Driver();
      			Enable_ALL_RF_Output();
				}				
			}*/
			
		/*if(RF_State == 2)         //2022.11.11由RF_STATE改为RF_State
			{	
				
				if( (RF_Count%50 > 45)	)
				{

				Disable_RF_Power();
      			Disable_ALL_RF_Output();
      			Disable_RF_MOS_Driver();
				RF_PWM1_OFF(); 
				
				}
				
				else //2022/09/09
				{
				RF_State_2();
				Enable_RF_Power();         
      			Enable_RF_MOS_Driver();
      			Enable_ALL_RF_Output();
				}				
			}*/
			
		/*if(RF_State == 3)            //2022.11.11由RF_STATE改为RF_State
			{	
												
				if( (RF_Count%50 > 45)	)//2022/09/09
				
				{

				Disable_RF_Power();
      			Disable_ALL_RF_Output();
      			Disable_RF_MOS_Driver(); 
      			RF_PWM1_OFF(); 			
      		  
				}
				
				else
				
				{
				
				//RF_PWM1_ON();
				RF_State_3();
				Enable_RF_Power();      
      			//delay_us(10);      
      			Enable_RF_MOS_Driver();
      			//delay_us(10);
      			Enable_ALL_RF_Output();
				//pwm_off();   //add 2022.11.04  //2022.11.07注释�?
				}				
			}*/			

		/*if(RF_State == 4)         //2022.11.11由RF_STATE改为RF_State
			{	
				
				if( (RF_Count%50 > 45)	)
				{

				Disable_RF_Power();
      			Disable_ALL_RF_Output();
      			Disable_RF_MOS_Driver();
				RF_PWM1_OFF(); 
				
				}
				
				else //2022/09/09
				{
				RF_State_2();
				Enable_RF_Power();         
      			Enable_RF_MOS_Driver();
      			Enable_ALL_RF_Output();
				}				
			}*/

		/*if(RF_State == 5)         //2022.11.11由RF_STATE改为RF_State
			{	
				
				if( (RF_Count%50 > 45)	)
				{

				Disable_RF_Power();
      			Disable_ALL_RF_Output();
      			Disable_RF_MOS_Driver();
				RF_PWM1_OFF(); 
				
				}
				
				else //2022/09/09
				{
				RF_State_2();
				Enable_RF_Power();         
      			Enable_RF_MOS_Driver();
      			Enable_ALL_RF_Output();
				}				
			}*/					
		
	}
	
	/*if(Flag_EMS_Working)   //add 2022.12.01 此函数功能是隔段时间关断EMS PWM输出
	{
		
		RF_PWM1_OFF();

		
		   if(EMS_State == 1)           
			{	
																
				if( (EMS_Count%50 > 45)	)	//2022/09/09
				{
	
				Disable_EMS_Power();
      			Disable_EMS_Output();
      			    			
      			EMS_PWM3_OFF();     			
				
				}
								
				else 
				{
				
					
				EMS_State_1();
				
				Enable_EMS_Power();      
      		
      			Enable_EMS_Output();
				
				}				
			}
			
		   if(EMS_State == 2)         
			{	
				
				if( (EMS_Count%50 > 45)	)
				{

				Disable_EMS_Power();
      			Disable_EMS_Output();
      			      			
				EMS_PWM3_OFF();     	 
					 				
				}
				
				
				else 
				{
				
				
				EMS_State_2();
				
				Enable_EMS_Power();      
      		        		
      		  	Enable_EMS_Output();
      			
      			
				}				
			}
			
		   if(EMS_State == 3)            
			{	
						
				if( (EMS_Count%50 > 45)	)
				
				{

				Disable_EMS_Power();
      			Disable_EMS_Output();
      			
				EMS_PWM3_OFF();     	  			
      		    				
				}
				
				else
				
				{
				
				
				EMS_State_3();
				Enable_EMS_Power();      
      			
      			Enable_EMS_Output();
				
				}				
			}			
							
		
	}
*/


}  //end

//////////////////////////////////////////////

//自定�?0分钟延时函数
////////////////////////////////////////////
void delay107ms(int32 m)  //add 2022.10.28
{
	int32 a;
	int32 b;
   	for(b=m; b>0; b--)
	{for(a=60000; a>0; a--);}
	
}
/////////////////////////////////

//关机前初始化函数
//////////////////////////////////////
void Before_Sleep_Init(void)
{
    pwm_off(); 	
    Main_RGB_All_Off(); //add 2023.04.14
	pwm_off(); //add 2022.11.07 //2022.11.11
	LED_LEVEL_ALL_OFF(); //add 2023.01.06
  	LED_control_OFF(); //add 2023.01.06头部板红灯全�?
	LED_RF_EMS_OFF();  //add 2023.01.06 RF&EMS功能按键自带指示灯灭 
    LED_POWER_OFF(); //2023.04.25

 	RF_State = 0;
 	Switch_RF_Red_Light_State_1();
 	EMS_State = 0;
 	Switch_RF_EMS_Red_Light_State_1();	
 	pwm_off(); 	
 	RF_PWM1_Off();
 	EMS_PWM3_Off();
 	 
}
/////////////////////////////////////

//低温报警函数
/////////////////////////////////
void Alarm_Lower(void)
{
	int8 i=0;
	printf("Temp Alarm_Lower\r\n");
	setup_timer_4(T6_DIV_BY_16,184,1);		//370 us overflow, 370 us interrupt
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)74);    //modify 370 to 74 2022.11.07 调节占空比数值可以调整beep锐度
	
//	for(i=0; i<5; i++)
	for(i=0; i<20; i++)    //add 2022.10.13   低温每隔10s报警一次程�?
	{
		pwm_on();                  //蜂鸣器开�? 2022.10.13
		delay_ms(100);   //add 2022.10.13  蜂鸣器开�?.1s  
		pwm_off();           //蜂鸣器关�?2022.10.13
		delay_ms(10000);	//add 2022.10.13   //间隔10s
	}


} //end
/////////////////////////////////

//高温报警函数
/////////////////////////////////////////
void Alarm_Upper(void)
{
	printf("Temp Alarm_Upper\r\n");
	int8 i=0;
	setup_timer_4(T6_DIV_BY_16,184,1);		//370 us overflow, 370 us interrupt
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)370);   //modify 370 to 74 2022.11.07 调节占空比数值可以调整beep锐度
	
	for(i=0; i<5; i++)  //高温报警连续�?声程�?2022.10.13
	{ 
		pwm_on();      //蜂鸣器开�?  2022.10.13
		delay_ms(200);   //蜂鸣器响声持�?.2s    2022.10.13
		pwm_off();       //蜂鸣器关�?   2022.10.13
		delay_ms(200);	 //蜂鸣器关闭后延时0.2s，再响下一�?2022.10.13
	}
	
}  //end
////////////////////////////////////////////////

//电池高温报警函数 2023.04.12
/////////////////////////////////////////
void BAT_Alarm_Upper(void)
{
	printf("BAT_Temp Alarm_Upper\r\n");
	int8 i=0;
	setup_timer_4(T6_DIV_BY_16,184,1);		
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)370);   
	
	for(i=0; i<2; i++)  
	{ 
		pwm_on();      
		delay_ms(200);   
		pwm_off();       
		delay_ms(200);	 
	}
	
}  //end
////////////////////////////////////////////////

//开机声音函�?
//////////////////////////////////////////
void Startup_Alarm(void)   //开机蜂鸣器声音控制函数
{
	printf("Startup_Alarm\r\n");
	setup_timer_4(T6_DIV_BY_16,184,1);		//370 us overflow, 370 us interrupt
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)148);	  //modify 370 to 74 2022.10.08 调节占空比数值可以调整beep锐度  //2022.11.15�?7改为148
    
	//delay_ms(10);//add 2022.10.25增加蜂鸣器打开延时
	pwm_on();
	delay_ms(50);
	pwm_off();
	//delay_ms(100);//add 2022.10.25增加蜂鸣器关闭后再打开延时
}  //end
 
///////////////////////////////////////////

//增加一组关机声音函�?
/////////////////////////////////////////
 void Shutdown_Alarm(void)       //关机蜂鸣器声音控制函�?add 2022.10.25
{
	printf("Shutdown_Alarm\r\n");
	setup_timer_4(T6_DIV_BY_16,184,1);		//370 us overflow, 370 us interrupt   调节此参数可以调整beep的响�?2022.10.08
	setup_ccp4(CCP_PWM|CCP_TIMER4);
	set_pwm4_duty((int16)111);	              //add 2022.10.25 调节占空比数值可以调整beep锐度  //2022.11.15�?7改为111
    output_high(FMQ_CTR); //add 2022.10.31
    //delay_ms(100);//add 2022.10.25增加关机蜂鸣器延�?
	//output_low(FMQ_CTR); //add 2022.10.31
	pwm_on();
	delay_ms(100);  //2022.11.15�?0ms改为100ms
	pwm_off();
	output_low(FMQ_CTR); //add 2022.11.17
	//restart_wdt();  //add 2022.11.17   验证对消除待机充电声音无�?
	//delay_ms(100);//add 2022.10.25增加蜂鸣器关闭后再打开延时
}  //end
////////////////////////////////////////////////////////

//高温42度报警待机进入后的RF+脉冲产生函数
//////////////////////////////////////////////
void RF_EMS_State_Enable(void)  //add 2022.10.15用于实现当温度达到高温报警时RF+脉冲混合输出
{
	int8 i;
	for(i=0; i<15; i++)             //2022.11.10由之前的20次循环改�?次循�? //2022.11.15由之前的5次循环改�?次循�?
	{
	// Flag_RF_Working = 1;        //add 2022.10.15 RF模式工作标志�?�?
	 //Flag_EMS_Working = 1;       //add 2022.10.15 EMS模式工作标志�?�?
	 RF_PWM1_ON();                 //add 2022.11.10 打开RF电源。MOS驱动和控制信�?
	 RF_State_6();                 //add 2022.10.15 打开RF�?档模�?
	 delay_ms(300);                //add 2022.10.18  延时300ms         
	 RF_PWM1_OFF();                //add 2022.10.18  关闭RF电源、MOS驱动和控制信�?        
     delay_ms(100);               //add 2022.10.18  延时100ms     
	 Enable_EMS_Power();          //add 2022.10.15 打开EMS电源
	 Enable_ALL_EMS_Output();         //add 2022.10.15 打开EMS控制信号
	 EMS_State_6();               //add 2022.10.18 打开EMS�?档模�?
	 //delay_ms(100);               //add 2022.10.18  延时100ms-即脉冲持续时�?00ms 2022.11.12注释�?
	 delay_ms(100);                //add 2022.11.12 延时10ms-即脉冲打开时间10ms
	 Disable_EMS_Power();         //add 2022.10.18 关闭EMS电源
	 Disable_ALL_EMS_Output();        //add 2022.10.18 关闭EMS控制信号
	 //RF_PWM1_ON();               //add 2022.10.18  打开RF电源。MOS驱动和控制信�?
	 //delay_ms(10);               //add 2022.10.18 延时10ms，进入下一个循�?
     delay_ms(100);                //add 2022.11.12 延时100ms-即脉冲关闭时�?00ms
	 }                    //add 2022.10.15

} //end
/////////////////////////////////////////////

//高温42度报警待机进入后的RF+脉冲关闭函数
//////////////////////////////////////////
void RF_EMS_State_disable(void)  //add 2022.10.15用于实现当温度达到高温报警时RF+脉冲混合输出
{
	// Flag_RF_Working=1�?
	 Flag_EMS_Working = 0;          //add 2022.10.15 EMS模式工作标志�?�?
	// RF_State_4();
	 Disable_EMS_Power();            //add 2022.10.15 关闭EMS电源
	 Disable_ALL_EMS_Output();            //add 2022.10.15 关闭EMS控制信号
	 EMS_State_0();                    //add 2022.10.15 将EMS切换�?�?

}  //end
////////////////////////////////////////

//测试模式函数
////////////////////////////////////////////////////
void test_mode()  // add 2022.10.28 测试模式调用函数
{
printf("\r\n\r\nEnter Burn-In Mode...\r\n");
Flag_Working=0;   //add 2022.11.08
int32 i=0;
Main_RGB_B_Off(); //add 2022.11.04
Main_RGB_G_On();
LED_control_ON();  //add 2023.01.06头部板红灯常�?
LED_LEVEL_All_ON();  //add 2023.02.14 5档状态指示灯全亮
LED_RF_EMS_ON();   //add 2023.02.16
BAT_Alarm_Upper(); //add 2023.04.14
//while(TRUE)
{
for(i=0; i<12; i++)    // add 2022.10.28 
{
printf("\r\n\r\nRF Mode Open, EMS Mode Close\r\n");
Main_RGB_G_On();   //add 2022.11.09
delay_ms(10);  //add 2022.11.07
Disable_EMS_Power(); //add 2023.03.09
Disable_ALL_EMS_Output(); //add 2023.03.09
EMS_PWM3_OFF();     //add 2022.11.08
EMS_PWM5_OFF();    //add 2022.12.07
EMS_State_0();   //add 2022.11.07
RF_PWM1_ON();    //add 2022.11.08
RF_State_1();   //add 2022.11.07
LED_LEVEL_All_ON();  //add 2023.01.06开启所有档位指示灯
LED_control_ON();  //add 2023.01.06头部板红灯常�?
delay107ms(1800); //add 2022.11.08  1800*107ms=192.6s=3.21分钟
Startup_Alarm();  //add 2023.04.14
LED_control_OFF();  //add 2023.01.06头部板红灯常�?
LED_LEVEL_All_OFF(); //add 2023.02.14关闭所有档位指示灯
delay107ms(1800);  //add 2022.11.08  1800*107ms=192.6s=3.21分钟
Startup_Alarm();  //add 2023.04.14
LED_control_ON();  //add 2023.01.06头部板红灯常�?
LED_LEVEL_All_ON(); //add 2023.02.14开启所有档位指示灯
delay107ms(2000);     // add 2022.10.28  2000*107ms=192.6s=3.57分钟
//delay_ms(60000);     // add 2022.10.28 
Startup_Alarm();  //add 2023.04.14
printf("\r\n\r\nRF Mode change to EMS Mode\r\n");

RF_PWM1_OFF();     //add 2022.11.08
RF_State_0();   //add 2022.11.07
Enable_EMS_Power(); //add 2023.03.07
Enable_ALL_EMS_Output(); //add 2023.03.07
EMS_State_1();       //add 2022.11.07
LED_LEVEL_All_OFF();  //add 2023.01.06关闭所有档位指示灯
LED_control_OFF();  //add 2023.01.06头部板红灯常�?
delay107ms(1800);   //add 2022.11.08  1800*107ms=192.6s=3.21分钟
Shutdown_Alarm();   //add 2023.04.14
LED_control_ON();  //add 2023.01.06头部板红灯常�?
LED_LEVEL_All_ON(); //add 2023.02.14开启所有档位指示灯
delay107ms(1800);   //add 2022.11.08  1800*107ms=192.6s=3.21分钟
Shutdown_Alarm();   //add 2023.04.14
LED_control_OFF();  //add 2023.01.06头部板红灯常�?
LED_LEVEL_All_OFF(); //add 2023.02.14关闭所有档位指示灯
delay107ms(2000);      // add 2022.10.28  2000*107ms=192.6s=3.57分钟
//delay_ms(60000);     // add 2022.10.28 
Shutdown_Alarm();   //add 2023.04.14
printf("\r\n\r\nEMS Mode change to RF Mode\r\n");
}
}

LED_LEVEL_All_OFF();  //add 2023.01.06关闭所有档位指示灯
LED_control_OFF();  //add 2023.01.06头部板红灯常�?
LED_RF_EMS_OFF();   //add 2023.02.16
RF_State_0();       // add 2022.10.28 
EMS_State_0();      // add 2022.10.28
Main_RGB_G_Off();   //add 2022.11.08
Main_RGB_B_On();    // add 2022.10.28

} //end
////////////////////////////////////////////////////////

//IO 初始化函�?2022.10.31
///////////////////////////////////////
void IO_init(void) //add 2022.10.31新增IO初始化函�?
{
	Before_Sleep_Init();
    port_b_pullups(0x20);//add 2022.10.31  //需要修�?2023.02.09
	//port_b_pullups(0x28);  //add 2023.02.17将RB3初始化为拉高
	//pwm_off();//add 2022.10.31
	setup_lcd(LCD_DISABLED); //add 2022.10.31
    disable_interrupts(GLOBAL); //add 2022.10.31
    LED_LEVEL_All_OFF();  //add 2023.01.06关闭所有档位指示灯
	 	
	Main_RGB_All_Off();
	setup_vref(VREF_ADC_4v096 | TEMPERATURE_INDICATOR_ENABLED | TEMPERATURE_RANGE_HIGH | VREF_COMP_DAC_4v096);
    setup_adc_ports(sAN0 |sAN1 | sAN2 |sAN3| sAN5 | sAN6 |sAN14  , VSS_FVR);//add 2022.10.31
    setup_adc(ADC_CLOCK_INTERNAL);
    set_timer1(65535-49999); //50ms	
	setup_timer_1(T1_INTERNAL|T1_DIV_BY_8); //1us
    enable_interrupts(INT_TIMER1);
	enable_interrupts(INT_IOC); //add 2022.11.10
	disable_rb0_interruput();  //add 2022.10.31
    disable_rb5_interruput();
	enable_interrupts(GLOBAL); //add 2022.11.10
    disable_interrupts(INT_TIMER0);
	disable_interrupts(INT_TIMER4); //add 2022.11.04
    delay_ms(10);
    printf("\r\n\r\nApplication...\r\n");
	//Before_Sleep_Init();
    //Flag_Working	= 1;//add 2022.10.31 注释掉会导致关机状态时插充电器没有很响的滴声
    Timer1_Count = 0;
    Flag_Powerup = 1;//add 2022.10.31
	Flag_Temp_Alarm_Upper=0;  //add 2022.11.17  验证有助于改善按开机键、RF键和EMS键触发的高温报警 //2022.11.18已验证增加此条不影响高温报警和状态恢�?
	High_Temp_Alarm_Count=1;  //add 2022.11.17 验证有助于改善按开机键、RF键和EMS键触发的高温报警  //2022.11.18已验证增加此条不影响高温报警和状态恢�?
}
///////////////////////////////////////////////////////


//add 2022.11.03 Start Up Function
/////////////////////////////////////////
void Start_Up(void)
{
   //if(!Flag_Working) //2023.04.25会导致开不了机
   if(Flag_DC_Power==1||Flag_DC_Power==0) //2023.04.25
   
   {
	if(input(Max16054_Out)) //add 2022.11.03  //2022.11.07注释�?
	//if(input(Max16054_Out)==1||Flag_DC_Power==1)	//2023.04.25 导致关机插充电器时电源按键指示灯亮，但功能键无法使用
	//if((input(Max16054_Out)==1&&Flag_DC_Power==1)||(input(Max16054_Out)==1&&Flag_DC_Power==0))	//2023.04.25 导致关机插充电器时电源按键指示灯亮，但功能键无法使用
	{	
		delay_ms(10);
		if(input(Max16054_Out)) //add 2022.11.03  //2022.11.07注释�?
		//if(input(Max16054_Out)==1||Flag_DC_Power==1)	//2023.04.25 导致关机插充电器时电源按键指示灯亮，但功能键无法使用
		//if((input(Max16054_Out)==1&&Flag_DC_Power==1)||(input(Max16054_Out)==1&&Flag_DC_Power==0))	//2023.04.25 导致关机插充电器时电源按键指示灯亮，但功能键无法使用
		
		//if(Flag_DC_Power==1||Flag_DC_Power==0) //2023.04.25
   
		{
		//All_Power_On();
		LED_POWER_ON();  //add 2023.01.06电源按键自带指示灯亮
		//Main_RGB_B_On(); 
		//Main_RGB_R_On(); 
		//Main_RGB_B_Off(); //add 2023.04.14 
		//Main_RGB_All_Off(); //add 2023.04.14 
		delay_ms(10);  //add 2022.11.15
		Startup_Alarm();  //2022.11.17注释�?
		Flag_Working=1;  //add 2023.02.14
		
		}
		
	}

   }

}//end //add 2022.11.07

//////////////////////////////////////

//add 2022.11.06 Shut Down Function
////////////////////////////////////////////
void Shut_Down(void)
{
 if(Flag_Working)  //add 2022.11.06如果注释掉此条件，待机充电后再次拿开设备有声音，如果打开此条件则没有声音
 {
	//if(!input(Max16054_Out)==1&&input(CHARGE_ING)==1&&input(CHARGE_FULL)==1) //2022.11.06 待机或工作状态插上充电器关不了机
	//if(!input(Max16054_Out)==1||input(CHARGE_ING)==1||input(CHARGE_FULL)==1) //2023.04.25 导致开不了机
	if(!input(Max16054_Out))  //2023.04.25 待机或工作状态插上充电器能正常关机
	{		
		delay_ms(10);
		//if(!input(Max16054_Out)==1&&input(CHARGE_ING)==1&&input(CHARGE_FULL)==1) //2022.11.06 待机或工作状态插上充电器关不了机
		//if(!input(Max16054_Out)==1||input(CHARGE_ING)==1||input(CHARGE_FULL)==1) //2023.04.25 导致开不了机
		if(!input(Max16054_Out)) //2023.04.25 待机或工作状态插上充电器能正常关机
		{
		Shutdown_Alarm();  //2022.11.06打开
		delay_ms(10);  //add 2022.11.15
		Before_Sleep_Init();	//2022.11.15注释�?
		//All_Power_Off(); 
		LED_POWER_OFF(); //add 2023.01.06 电源按键自带指示灯灭	
		Flag_Working=0;  //add 2023.02.14
		}
	}
	if(Flag_DC_Power)
	{
		Flag_DC_Power=0;
	}
 }
if(Flag_Working==0)
 {
		
	if(!input(Max16054_Out)==1&&input(CHARGE_ING)==0)   //add 2022.11.07
	{
	 pwm_off();
		
	}
		
 }
	
}
////////////////////////////////////////////

//Main Function
///////////////////////////////////////
void main()
{

   IO_init(); //add 2022.10.31  //2022.11.10封装函数对高温报警无影响
   
   Start_Up(); //add 2022.11.10  //2022.11.10验证 封装成函数，不影响高温报�?
   
   while(TRUE)
   {
		
	if(Flag_Half_Second)
	{
	  Flag_Half_Second = 0;
	
	  DC_Power_Voltage_AD=Read_ADC_Channel(1); //DC Charge Voltage detection
	  //printf("DC Power Voltage AD: %0.4f C\r\n", DC_Power_Voltage_AD);
	
	//if(!Flag_RF_Working&&!Flag_EMS_Working) //2022.10.31实现了功能状态不充电，关机和待机状态充电的功能	
	//if(Flag_RF_Working==0||Flag_EMS_Working==0||Flag_RF_Working==1||Flag_EMS_Working==1)  //2023.04.25 实现功能状态、关机和待机充电状态指示
	if(Flag_RF_Working==0||Flag_EMS_Working==0||Flag_RF_Working==1||Flag_EMS_Working==1||Flag_Working==0||Flag_Working==1)  //2023.04.25
	{	
	
		if(DC_Power_Voltage_AD > 200)	//200-190	
		{
			Flag_DC_Power = 1;   //add 2022.10.31注释�?
			//printf("\r\n\r\nFlag_DC_Power=1\r\n");
			
			//Flag_Working = 0; //add 2022.10.31导致插上充电器无法正常进入工作模式
			//Flag_Working = 1; //add 2023.04.25
			Charge_Check();
			//Enable_interrupts(INT_CCP4); //add 2022.11.16 验证对改善待机充电时有响声无�?
			Main_RGB_B_Off();  //add 2022.10.31注释�?
			
			//Before_Sleep_Init();   //add 2022.10.31导致功能关闭
				
			//All_Power_Off(); //2022/09/28	  //add 2022.10.31导致关机
			
	  }  //add 2022.10.31
		
	   else 
		{
			
			Flag_DC_Power = 0;   //add 2022.10.31注释�?
			//printf("\r\n\r\nFlag_DC_Power=0\r\n");
			//Flag_Working = 1; //add 2022.10.31注释�? 注释掉此状态会导致RF等功能无�?
			//Flag_Working = 0; ////add 2022.10.31
			Main_RGB_G_Off();		//2022/09/28	 //add 2022.10.31注释�?
			

		 }  //add 2022.10.31注释�?
		 
		
	} //add 2022.10.31注释�?
    ///////////////////////////////////////////////
    
	RD_Voltage_AD_CS1=Read_ADC_Channel(3);
    printf("RD Voltage AD_CS1 empty: %0.4f C\r\n", RD_Voltage_AD_CS1);
	if(RD_Voltage_AD_CS1>3)
		{
			printf("RD Voltage AD_CS1 trigger: %0.4f C\r\n", RD_Voltage_AD_CS1);
			LED_control_ON(); //add 2023.04.21
		}
		else
		{ 
		    LED_control_OFF(); //add 2023.04.21
		}
	////////////////////////////////////////////////
    
	RD_Voltage_AD_CS2=Read_ADC_Channel(0);
    //printf("RD Voltage AD_CS2 empty: %0.4f C\r\n", RD_Voltage_AD_CS2);
	/*if(RD_Voltage_AD_CS1>100)
		{
			printf("RD Voltage AD_CS2 trigger: %0.4f C\r\n", RD_Voltage_AD_CS2);
			LED_control_ON(); //add 2023.04.21
		}
		else
		{ 
		    LED_control_OFF(); //add 2023.04.21
		}*/
	////////////////////////////////////////////////

		
		Power_RGB();
	
		if(Flag_Working)	
		{	if(Flag_Powerup) 
			{	
				Flag_Powerup = 0;
				
				BATTY_Voltage_AD=Read_ADC_Channel(2);
				//printf("Batty Voltage AD: %0.4f C\r\n", BATTY_Voltage_AD);
		 
		 //2022/09/27		if(BATTY_Voltage_AD < 1.6*1024/4) //3.256V //注释�?）如何根据参考电压设置为3.256V时，计算出参�?.6，因程序中采用的参考电压为4.096V   2022.10.13
		                                                                      // 2)则假设需要设置的参数为x �?.256/4.096=x/1024,求得x=814                         2022.10.13
																		       //3)因ADC采样时钟�?分频，则计算得出814/�?024/4�?3.18                             2022.10.13 
																		       //4)又因为AD采样电路上设计R9和R10都是10k，则实际采样值需要除�?，则3.18/2=1.59,四舍五入得到1.6的参�? 2022.10.13
		 
		 
		 		//if(BATTY_Voltage_AD < 1.747*1024/4) //3.55 ?  1.747-->1.25
				if(BATTY_Voltage_AD < 1.497*1024/4) //3.55 ?  1.747-->1.25  //add 2023.04.24
				{
					Flag_Low_Power = 1;	
				}
				
				else
				{
					Flag_Low_Power = 0;		
				}
					
					
				if(Flag_Low_Power)
				{
					
				Low_Cell_Voltage_Alarm(); //off_power();
					
				All_Power_Off();	//off the all power			
				
				}
				
				else 
				{
					Main_RGB_R_Off();		//red off
				}
			
			}
		}
    //////////////////////////////////////////

	//电池温度报警检测条�?NCP15XH103F03RC-10k NTC	add 2023.04.12
	///////////////////////////////////////////////////////
	    if(Flag_Working)
		{	
		  //if(Flag_NTC_Voltage_AD)
		  {
			Flag_BAT_NTC_Voltage_AD=0;
			BAT_NTC_Voltage_AD=Read_ADC_Channel(14);	
			//printf("BAT_NTC_Voltage_AD: %f C\r\n", BAT_NTC_Voltage_AD);	
			
			//////////////////////////////////////////
				
				if(BAT_NTC_Voltage_AD > BAT_NTC_Alarm_Upper )
				{
					
				Flag_BAT_NTC_Alarm_Upper = 1;
				Flag_BAT_NTC_Alarm_Lower = 0;
				High_BAT_NTC_Alarm_Count==0; //add 2022.11.15	//2022.11.17注释此条对是否进入高温报警无影响
				
				if(Flag_BAT_NTC_Alarm_Upper==1&&High_BAT_NTC_Alarm_Count==0 )   //add 2022.10.10 42.5度高温报警判断条�?
				   {
					
                       BAT_Alarm_Upper();
					   High_BAT_NTC_Alarm_Count=1;   //add 2022.10.10 42度高温报警蜂鸣器响声次数计算  //注释�?2022.10.17
					   Flag_BAT_NTC_Alarm_Upper==0;  //add 2022.11.11
				   }
				
				Flag_BAT_NTC_Enter_Alarm_Upper = 1; //2022/09/27
				
				
				//printf("Enter_BAT_NTC_Alarm_Upper\r\n");
				Flag_BAT_NTC_Enter_Alarm_Upper = 0;
								
				}
				
				else if(BAT_NTC_Voltage_AD > BAT_NTC_Alarm_0)
				{
				Flag_BAT_NTC_Alarm_Lower = 1;
				Flag_BAT_NTC_Alarm_Upper = 0;			
				}
					
				else
				{
				Flag_BAT_NTC_Alarm_Lower = 0;
				Flag_BAT_NTC_Alarm_Upper = 0;
				
				}
			
		    }
		}	
    ///////////////////////////////////////////////////////

	//温度报警检测条�?黑色NTC温控头MEB13-104F3950UFA02070  100K	add 2023.03.15		
	///////////////////////////////////////////////////////
	    if(Flag_Working)
		{	
		  //if(Flag_NTC_Voltage_AD)
		  {
			Flag_NTC_Voltage_AD=0;
			NTC_Voltage_AD=Read_ADC_Channel(5);	
			printf("NTC_Voltage_AD: %f C\r\n", NTC_Voltage_AD);	
			
			if((NTC_Voltage_AD<NTC_Alarm_39)||(NTC_Voltage_AD>NTC_Alarm_40)) //2023.03.15
			
			{
				
				//if(	(Temp_Alarm < 41.0) && (RF_State != 0)	)
				if(	(NTC_Voltage_AD <NTC_Alarm_Lower) && (NTC_Temp_RF_State != 0) )
				{
					
				printf("NTC_Voltage_AD<41.0: %f C\r\n", NTC_Voltage_AD);	
				
				printf("Exit_Alarm_Upper,Restart RF\r\n");
				RF_EMS_State_disable(); //add 2022.10.15 调用RF+脉冲模式关闭函数  //2022.11.11启用
				Flag_NTC_Enter_Alarm_Upper = 0;
				RF_State = NTC_Temp_RF_State;
					if(Flag_RF_Working)
					{
						Switch_RF_Red_Light_State_1();
					}
				
				NTC_Temp_RF_State = 0 ;
				High_NTC_Alarm_Count=0; //add 2022.10.17 将高温报警次数重新归�?，下次出现高温时继续报警
				
				}
				//////////////////////////////////////////
				
				if(NTC_Voltage_AD > NTC_Alarm_Upper )
				{
					
				Flag_NTC_Alarm_Upper = 1;
				Flag_NTC_Alarm_Lower = 0;
				High_NTC_Alarm_Count==0; //add 2022.11.15	//2022.11.17注释此条对是否进入高温报警无影响
				
				if(Flag_NTC_Alarm_Upper==1&&High_NTC_Alarm_Count==0 )   //add 2022.10.10 42.5度高温报警判断条�?
				   {
					
                       Alarm_Upper();
					   High_NTC_Alarm_Count=1;   //add 2022.10.10 42度高温报警蜂鸣器响声次数计算  //注释�?2022.10.17
					   Flag_NTC_Alarm_Upper==0;  //add 2022.11.11
				   }
				
				Flag_NTC_Enter_Alarm_Upper = 1; //2022/09/27
				
				
				printf("Enter_NTC_Alarm_Upper\r\n");
				Flag_NTC_Enter_Alarm_Upper = 0;
				
					if(NTC_Temp_RF_State == 0)
						{
						
						NTC_Temp_RF_State = RF_State;	//将当前射频状态赋值给临时变量Temp_RF_State	
						RF_State = 0;		//将射频状态置0     2022.10.13  //2022.11.18已验证注释掉此句会导致蓝色指示灯在脉冲信号产生时熄灭
						RF_PWM1_OFF();       //add 2022.11.18
						LED_LEVEL_ALL_OFF(); //add 2023.01.06
						Main_RGB_B_On(); //add 2022.11.11	
						RF_EMS_State_Enable(); //add 2022.10.15 调用RF+脉冲模式产生函数  //2022.11.11启用
						}
					
				}
				
				else if(NTC_Voltage_AD > NTC_Alarm_Lower)
				{
				Flag_NTC_Alarm_Lower = 1;
				Flag_NTC_Alarm_Upper = 0;			
				}
					
				else
				{
				Flag_NTC_Alarm_Lower = 0;
				Flag_NTC_Alarm_Upper = 0;
				
				}
			}
		 }
		}	
    ///////////////////////////////////////////////////////
		
		//温度报警检测条�?M601温控芯片	
		///////////////////////////////////////////////	
		if(Flag_Working)
		{	
			//printf("Temp_Alarm Start\r\n");
			Temp_Alarm	= M601_Test();//2022/09/21	
			printf("Temp_Alarm: %0.4f C\r\n", Temp_Alarm);	
					
			if((Temp_Alarm<39)||(Temp_Alarm>40)) //2022/09/22   //注释�?2022.10.13  //2022.11.16注释�?
			
			{
								
				if(	(Temp_Alarm <41.0) && (Temp_RF_State != 0) )
				{
					
				printf("Temp_Alarm<41.0: %0.4f C\r\n", Temp_Alarm);	
				
				printf("Exit_Alarm_Upper,Restart RF\r\n");
				
				RF_EMS_State_disable(); //add 2022.10.15 调用RF+脉冲模式关闭函数  //2022.11.11启用
				Flag_Enter_Alarm_Upper = 0;
				RF_State = Temp_RF_State;
					if(Flag_RF_Working)
					{
						Switch_RF_Red_Light_State_1();
					}
				
				Temp_RF_State = 0 ;
				High_Temp_Alarm_Count=0; //add 2022.10.17 将高温报警次数重新归�?，下次出现高温时继续报警
				
				}
				//////////////////////////////////////////
				
				if(Temp_Alarm > Temp_Alarm_Upper )
				{
					
				Flag_Temp_Alarm_Upper = 1;
				Flag_Temp_Alarm_Lower = 0;
				High_Temp_Alarm_Count==0; //add 2022.11.15	//2022.11.17注释此条对是否进入高温报警无影响
				
				if(Flag_Temp_Alarm_Upper==1&&High_Temp_Alarm_Count==0 )   //add 2022.10.10 42.5度高温报警判断条�?
				   {
					
                       Alarm_Upper();
					   High_Temp_Alarm_Count=1;   //add 2022.10.10 42度高温报警蜂鸣器响声次数计算  //注释�?2022.10.17
					   Flag_Temp_Alarm_Upper==0;  //add 2022.11.11
				   }
				
				Flag_Enter_Alarm_Upper = 1; //2022/09/27
				
				
				printf("Enter_Alarm_Upper\r\n");
				Flag_Enter_Alarm_Upper = 0;
				
					if(Temp_RF_State == 0)
						{
						
						Temp_RF_State = RF_State;	//将当前射频状态赋值给临时变量Temp_RF_State	
						RF_State = 0;		//将射频状态置0     2022.10.13  //2022.11.18已验证注释掉此句会导致蓝色指示灯在脉冲信号产生时熄灭
						RF_PWM1_OFF();       //add 2022.11.18
						LED_LEVEL_ALL_OFF(); //add 2023.01.06
						Main_RGB_B_On(); //add 2022.11.11	
						RF_EMS_State_Enable(); //add 2022.10.15 调用RF+脉冲模式产生函数  //2022.11.11启用
						}
					
				}
				
				else if(Temp_Alarm > Temp_Alarm_Lower  )
				{
				Flag_Temp_Alarm_Lower = 1;
				Flag_Temp_Alarm_Upper = 0;			
				}
					
				else
				{
				Flag_Temp_Alarm_Lower = 0;
				Flag_Temp_Alarm_Upper = 0;
				
				}
			}
		}	
		/////////////////////////////////////////
		
}

	////////////////////////////////
	Shut_Down(); //add 2022.11.06  将关机声音集成为一个函数直接调用，验证有效

    //////////////////////////////////////

	
//////////////////////////////////
   restart_wdt();  //add 2022.11.02注释�?
 ////////////////////////////////////////  	

 //////////////////////////////////////////////
	if(Flag_Working)
	{
   	
	//add 2023.02.17
	/////////////////////////////////////////////////
    RF_EMS_Switch_Key_Handle_Long_Press_2s();
	//RF_Key_Handle_Long_Press_2s();
	Key_Handle();  //add 2023.03.07

	//if(Flag_Function==1)  //RF+EMS+红灯功能
	{
		
		//if(Flag_key_short_press)  //add 2023.02.23 
		if(Flag_Key_EMS)   //add 2023.03.07 //RF+EMS+红灯功能
		{
			//Key_Handle(); //add 2023.03.13
			Flag_Key_EMS=0; //add 2023.03.13 缺少此句会导致进入RF+EMS功能�?个档位指示灯一直轮流切换闪�?
			Flag_RF_Working=0;   //add 2023.03.07
			Flag_EMS_Working=1;   //add 2023.03.07
			LED_RF_EMS_ON(); //add 2023.02.27
			Switch_RF_EMS_Red_Light_State_1();
			
		}  //add 2023.02.23

	}
    
	//if(!(Flag_Function)==1)   //RF功能+红灯功能
	{			
		  if(Flag_Key_RF)   //add 2023.03.07 //RF功能+红灯功能
		  {
			
			Flag_Key_RF=0; //add 2023.03.07
			Flag_RF_Working=1;   //add 2023.03.07
			Flag_EMS_Working=0;   //add 2023.03.07
			LED_RF_EMS_OFF(); //add 2023.02.27
			Switch_RF_Red_Light_State_1(); 
		  } //add 2023.02.23
	}
	//////////////////////////////////////////////////

	///////////////////////////////////////////////
	Lao_Hua_Key_Handle_Long_Press_5s();    //add 2022.11.03
	 
	//if(test_state1==1)  //add 2022.11.03   同时按住电源�?RF�?s可进入老化模式
	if(Flag_key_long_press_5s) //add 2023.03.10
	{
		
	    test_mode();
	    restart_wdt(); //add 2022.11.07  //2022.11.11注释掉来验证是否影响高温报警后的状态返�?//2022.11.11 19:24验证注释掉此函数高温报警和状态返回正�?
	  
	}   //end  
	   //////////////////////////////////
          if(Flag_Renew_EMS_Hz_1==1&EMS_State==1)  //2022.11.29注释
		  //if(Flag_Renew_EMS_Hz)  //2022.11.29注释
		   {
		   	Switch_EMS_Hz_State_1();
		   	Flag_Renew_EMS_Hz_1 = 0;
		   } 
       /////////////////////////////////////

	   //add 2022.12.15
	   /////////////////////////////////////
	   if(Flag_Renew_EMS_Hz_2==1&EMS_State==2)  //2022.11.29注释
		  //if(Flag_Renew_EMS_Hz)  //2022.11.29注释
		   {
		   	Switch_EMS_Hz_State_2();
		   	Flag_Renew_EMS_Hz_2 = 0;
		   } 
        //////////////////////////////////
 
         //add 2022.12.15
		  //////////////////////////////////
		   if(Flag_Renew_EMS_Hz_3==1&EMS_State==3)  //2022.11.29注释
		  //if(Flag_Renew_EMS_Hz)  //2022.11.29注释
		   {
		   	Switch_EMS_Hz_State_3();
		   	Flag_Renew_EMS_Hz_3 = 0;
		   }
         //////////////////////////////////

		 //add 2022.12.15
		  //////////////////////////////////
		   if(Flag_Renew_EMS_Hz_4==1&EMS_State==4)  //2022.11.29注释
		  //if(Flag_Renew_EMS_Hz)  //2022.11.29注释
		   {
		    Switch_EMS_Hz_State_4();
		   	Flag_Renew_EMS_Hz_4 = 0;
		   } 
         //////////////////////////////////

		 //add 2022.12.15
		  //////////////////////////////////
		   if(Flag_Renew_EMS_Hz_5==1&EMS_State==5)  //2022.11.29注释
		  //if(Flag_Renew_EMS_Hz)  //2022.11.29注释
		   {
		    Switch_EMS_Hz_State_5();
		   	Flag_Renew_EMS_Hz_5 = 0;
		   } 
         //////////////////////////////////

      	} //2022/09/22  
	      //TODO: User Code
   }

}
