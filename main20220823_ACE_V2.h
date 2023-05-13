#include <16F1947.h>
//#include "m601_multidrop.c"
//#include "ieeefloat.c"
/*
#device ADC=10

///#use delay(crystal=32MHz,restart_wdt)
#use delay(internal=32MHz,restart_wdt)

//#fuses HS
//#fuses INTRC
#fuses PLL



#opt 9

#FUSES WDT                      //Watch Dog Timer
#FUSES PUT                      //Power Up Timer
#FUSES PROTECT                  //Code protected from reads
#FUSES NOBROWNOUT               //No brownout reset
#FUSES WRT                      //Program Memory Write Protected

*/


#device ADC=10


//#use delay(oscillator=16MHz)//,restart_wdt)

#use delay(internal=32MHz)

//#fuses HS
//#fuses INTRC
#fuses PLL

//2022/09/21 #FUSES WDT                      //Watch Dog Timer

#FUSES NOWDT                      //Watch Dog Timer
#FUSES PUT                      //Power Up Timer
#FUSES PROTECT                  //Code protected from reads
//2022/09/21#FUSES NOBROWNOUT               //No brownout reset

#FUSES BROWNOUT               //brownout reset

#FUSES BORV25               //brownout reset

#FUSES WRT                      //Program Memory Write Protected
//#FUSES CLKOUT
	    
#use rs232(baud=115200,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1)//,restart_wdt)

//#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1,restart_wdt,FORCE_SW)

#use i2c(Master,Fast=400000,sda=PIN_C4,scl=PIN_C3,force_sw,stream=number1)



#use FIXED_IO( A_outputs=PIN_A7,PIN_A5,PIN_A4 )

#use FIXED_IO( B_outputs=PIN_B2,PIN_B1,PIN_B0 )  //add 2023.02.09
#use FIXED_IO( C_outputs=PIN_C5,PIN_C2,PIN_C1,PIN_C0 )
#use FIXED_IO( D_outputs=PIN_D7,PIN_D6,PIN_D5,PIN_D4,PIN_D3,PIN_D2,PIN_D1,PIN_D0 )
//#use FIXED_IO( E_outputs=PIN_E6,PIN_E5,PIN_E4,PIN_E3,PIN_E2) //,PIN_E1 )

//2022/09/21 #use FIXED_IO( E_outputs=PIN_E7,PIN_E6,PIN_E5,PIN_E4,PIN_E3,PIN_E2) 
#use FIXED_IO( E_outputs=PIN_E7,PIN_E6,PIN_E5,PIN_E4,PIN_E3,PIN_E2) //2022/09/21


#use FIXED_IO( F_outputs=PIN_F5,PIN_F4,PIN_F3,PIN_F2,PIN_F0 )
#use FIXED_IO( G_outputs=PIN_G4,PIN_G3,PIN_G1,PIN_G0 )

//typedef int32_t (*stmdev_write_ptr)(void *, uint8_t, const uint8_t *, uint16_t);
//#define NTC_RD          PIN_A0   //注释�?2022.12.26
#define AD_CS2          PIN_A0      //add 2022.12.26 AN0 input
//#define AD_TEMP         PIN_A1    //注释�?2022.12.26
#define POWER_AD         PIN_A1    //add 2022.12.26  AN1  input
#define LOW_POWER_AD    PIN_A2     //电池低电压检�?  AN2 input
#define AD_CS1              PIN_A3   //add 2023.04.21  AN3 input
//#define LED_G           PIN_A4   //注释�?2022.12.26
#define DJ_CTR_3           PIN_A4  //add 2022.12.26  output
//#define LED_R           PIN_A5    //注释�?2022.12.26
#define M_DJ_CTR_4           PIN_A5  //add 2022.12.26  output

//#define CHARGE_FULL     PIN_A6
//#define CHARGE_ING      PIN_A7

//#define LED_RF_2        PIN_A6   //注释�?2022.12.26
//#define XSHUI        PIN_A6         //add 2022.12.26 output

//#define LED_RF_1        PIN_A7
//#define LED_RF_3        PIN_A7   //注释�?2022.12.26
#define START_LED_CRT     PIN_A7   //add 2022.12.26  output

/*
#define KEY_POWER  		PIN_B0
#define KEY_RF          PIN_B1
#define KEY_EMS         PIN_B2
#define KEY_MOTOR       PIN_B3
#define KEY_RGB		    PIN_B4
#define KEY_DEBUG       PIN_B4 //should be B5
*/

//#define KEY_POWER  		PIN_B0  //注释�?2022.12.26
#define LED_POWER     		PIN_B0   //add 2022.12.26 开机按键自带指示灯控制  output

//#define KEY_RF          PIN_B1
//#define KEY_RGB       	PIN_B2
//#define KEY_MOTOR       PIN_B3
//#define KEY_EMS		    PIN_B4

//#define KEY_RF          PIN_B1   //注释�?2022.12.26
#define LED_LEVEL_1       PIN_B1     //2023.04.21
//#define KEY_EMS         PIN_B4   //注释�?2022.12.26
//#define INT2            PIN_B4   //add 2022.12.26陀螺仪中断信号2 input
//#define KEY_MOTOR       PIN_B2  //注释�?2022.12.26
#define DJ_CTR_4               PIN_B2   //add 2023.04.21 output
//#define KEY_RGB		    PIN_B3   //注释�?2022.12.26
#define LED_LEVEL_KEY	 PIN_B3   //add 2022.12.26 带灯档位�?output



#define KEY_DEBUG       PIN_B5  //input


#define LOW_POWER_LED   PIN_C0  //red output

//#define LED_B           PIN_C1   //注释�?2022.12.26
//#define PWM_EMS_N            PIN_C1  //add 2022.12.26 output
#define MCU_RF_P        PIN_C2     //output
#define SCL           PIN_C3
#define SDA           PIN_C4
//#define START_LED_CTR   PIN_C5  //blue  注释�?2022.12.29
#define M_CS            PIN_C5    //add 2022.12.26 U16 CS output
#define TX              PIN_C6
#define RX              PIN_C7
//#define CHARGE_CTR      PIN_D0   //注释�?2022.12.27
#define LED_control      PIN_D0    //add 2022.12.27 头部灯珠控制信号 output
#define M_CTR_V         PIN_D1 //lm2733 pin4 /SHDN Shutdown ems power output
//#define MOTOR_CTR       PIN_D2   //注释�?2022.12.27
#define DJ_CTR_1       PIN_D2 // output
    //add 2022.12.27
//#define DJ_CTR_1        PIN_D3
#define DJ_CTR_2        PIN_D3   //output
//#define DJ_CTR_2        PIN_D4     //注释�?2022.12.26
#define M_CS_1          PIN_D4       //add 2022.12.26 U2片选信�? output
//#define M_DJ_CTR_1      PIN_D5     //注释�?2022.12.26
#define M_DJ_CTR_2      PIN_D5     //add 2022.12.26 output
//#define M_DJ_CTR_2      PIN_D6
#define M_DJ_CTR_1      PIN_D6     //add 2022.12.26 output
//#define RF_POWER_CTR    PIN_D7    //注释�?2022.12.26
#define CHARGE_FULL_LED    PIN_D7   //add 2022.12.26 output


//#define LED_RF_2        PIN_E0
//#define LED_RF_1        PIN_E1
#define CHARGE_ING      PIN_E0   //input
#define CHARGE_FULL     PIN_E1   //input


//2022/09/21	#define DA_CS1          PIN_E2
#define PWM_EMS_N          PIN_E2   //add 2023.02.09  output
//#define Max16054_Clear     PIN_E2	//2022/09/21
#define DA_CS2          PIN_E3 //U4 lm3224 pin3 /SHDN Shutdown RF Power output
#define Max16054_Clear     PIN_E4  //add 2022.12.27 output


//#define EMS_N           PIN_E4
//#define EMS_N           PIN_G4  //add 2022.12.05
#define MCP14_EN        PIN_E5 //MCP14E4-E/SN PIN 1 AND PIN 8,HIGH WORK output
#define MCU_RF_N        PIN_E6 //output

//#define Max16054_Out        PIN_E7 //2022/09/21 input! //注释�?2022.12.26
#define PWM_EMS_P        PIN_E7   //add 2023.02.09  output

//#define LED_RGB_3     	PIN_F0
//#define LED_MOTOR_3     	PIN_F0     //注释�?2022.12.26
#define LED_RF_EMS     	PIN_F0     //add 2022.12.26 output

//#define LED_RGB_2     	PIN_F1     //注释�?2022.12.26
#define NTC_AD2     	PIN_F1     //add 2022.12.26 AN6 input


//#define LED_RGB_1     	PIN_F2
//#define LED_RGB_3     	PIN_F2      //注释�?2022.12.26
#define LED_LEVEL_2     	PIN_F2        //add 2022.12.26 output

//#define LED_MOTOR_3     PIN_F3
//#define LED_EMS_1     	PIN_F3       //注释�?2022.12.26
#define LED_LEVEL_3     	PIN_F3       //add 2022.12.26  output

//#define LED_MOTOR_2     PIN_F4
//#define LED_EMS_2     	PIN_F4     //注释�?2022.12.26
#define LED_LEVEL_4     	PIN_F4     //add 2022.12.26 output


//#define LED_MOTOR_1     PIN_F5
//#define LED_EMS_3     	PIN_F5  //注释�?2022.12.26
#define LED_LEVEL_5     	PIN_F5     //add 2022.12.26 output

//#define LED_EMS_3       PIN_F6
//#define LED_RGB_1       PIN_F6      //注释�?2022.12.26
#define Max16054_Out       PIN_F6   //add 2022.12.26 input

//#define LED_EMS_2       PIN_F7
//#define LED_MOTOR_1       PIN_F7  //注释�?2022.12.26
#define NTC_AD       PIN_F7      //add 2022.12.26 AN5 input


#define EMS_P           PIN_G0  //output

//#define LED_RF_3        PIN_G1
//#define LED_RF_1        PIN_G1     //注释�?2022.12.26
#define M_DJ_CTR_3        PIN_G1     //add 2022.12.26 output

//#define LED_EMS_1       PIN_G2
//#define LED_MOTOR_2       PIN_G2  //注释�?2022.12.26
#define BAT_TEMP       PIN_G2       //add 2022.12.26 AN14 input

#define FMQ_CTR         PIN_G3  // CCP4 output

//#define CHARGE_FULL_LED   PIN_G4 //green
#define EMS_N   PIN_G4  //add 2023.02.09 output
//#define CHARGE_FULL_LED   PIN_E4 //green  //add 2022.12.06


///#use rs232(baud=9600,parity=N,xmit=PIN_C6,rcv=PIN_C7,bits=8,stream=PORT1,restart_wdt,FORCE_SW)

//#use timer(timer=1,tick=100us,bits=32,NOISR)

//#use timer(timer=1,tick=10ms,bits=32,NOISR)

#use pwm(CCP4,TIMER=4)//,STEAM=BEEP)  // 2022.12.03注释�?

//#use pwm(CCP1,TIMER=2,steam=RF)
//#use pwm(CCP3,TIMER=6,steam=EMS)

#define TICK_TYPE unsigned int32
//#USE TOUCHPAD(RANGE=H, THRESHOLD=6, SCANTIME=32, PIN_A3='k')

#zero_ram


// The following define selects the pin to use as the data pin for the DS18B20
// sensors.  Must be defined before the DS18B20_multidrop.c driver is included
// to change the pin, the default pin is PIN_B5 if not defined.
#define PIN_DS18B20_DATA         PIN_B5//PIN_B2

// The following define sets the max number of DS18B20 sensors driver can be
// used with.  Must be defined before the DS18B20_multidrop.c driver is included
// to change the number of sensor, the default value is 8 if not defined.
#define  MAX_DS18B20_SENSORS     1//8
void RF_PWM1_OFF(void);

#include "m601_multidrop.c"

#include "ieeefloat.c"

//#include "lsm6dsr_reg.c"   //add 2023.02.28

// The following define selects which functions are used to read the temperature
// from the DS18B20 sensors.
//#define WAIT_FOR_CONVERSION

 

void PrintSerialNumber(DS18B20_ROM_CODE ROMCode)
{
   uint8_t i;
   
   printf(" %X", ROMCode.FamilyCode);
   
   for(i=0;i<6;i++)
      printf(" %X", ROMCode.SerialNumber[i]);
   
   printf(" %X", ROMCode.CRC);
}




float M601_Test(void)
{
	
   DS18B20_ROM_CODE ROMCode[MAX_DS18B20_SENSORS];
   //printf("M601_Test_Start1\r\n");
   uint8_t Count;
   float Temp[MAX_DS18B20_SENSORS];
  #ifndef WAIT_FOR_CONVERSION
   int16_t Reading;
  #endif
   uint8_t i;
   
   
   static union U1
{
    int32 l;   
    float d;
//    char s[4];

}u1,u2;  
	
//	port_b_pullups(0b00000100);      // Enable the internal pullup on PIN_B2, this is only needed if an external
                                    // pullup resistor is not use
///   port_b_pullups(0b00100000); 
   
//   delay_ms(100);
   
//   printf("ex_ds18b20_multidrop.c - %s\r\n", getenv("DEVICE"));
   
   ds18b20_init();
   //printf("M601_Test_Start2\r\n");
   
   Count = ds18b20_search_rom(ROMCode);   // Determine how many DS18B20 sensor are connected
   //printf("M601_Test_Start3\r\n");
/*   
   printf("Sensors - %u\r\n", Count);
   
   if(Count > 0)
   {
      for(i=0;i<Count;i++) {
         printf("   %u) SN:", i);
         PrintSerialNumber(ROMCode[i]);
         printf("\r\n");
      }
      
      printf("\r\n");
   }

*/
 //2022/09/21  while(TRUE)
   {
      if(Count > 0)
      {
        #ifdef WAIT_FOR_CONVERSION
          ds18b20_read_temp(Temp, ROMCode, Count);   // Start conversion and read results to Temp for all sensors
        #else
         int1 Converting;
        
         ds18b20_start_conversion(NULL);  // Start conversion on all sensors
         //printf("M601_Test_Start4\r\n");
         Converting = FALSE;
         
         while(!Converting)      // While conversions are occurring
         {
           if(ds18b20_done())    // Check if conversions are finished
           {
               Converting = 1;
           }
            
            output_toggle(PIN_B5);  // Toggle pin, Red LED on PIC18F45K22 development kit
            delay_ms(100);
            //printf("M601_Test_Start5\r\n");
         }
         
         for(i = 0; i < Count; i++)
         {
            ds18b20_get_conversion(&Reading, &ROMCode[i]);  // Get conversion results from each sensor
            //printf("M601_Test_Start6\r\n");
            Temp[i] = ds18b20_convert_temp(Reading);        // Convert result to a float value in degrees C
            //printf("ds18b20_get_conversion\r\n");
         }
        #endif
         
         for(i = 0; i < Count; i++)    //Print temperature for each sensor
         {
            //printf("M601_Test_Start7\r\n");
            printf("%i) SN:", i);
            PrintSerialNumber(ROMCode[i]);
            printf(", Temperature: %0.4f C\r\n", Temp[i]);
          
         u1.d  = Temp[i];
         
          
          
         }
         
         
         return Temp[0];
         
//         u1.d= 27.6757;
         
     //    for(i = 3; i == 0; i--)
    //     putc(u1.s[i]);
         
//         printf("Temperature: %0.4f C\r\n", u1.d);
         
//         printf("Temperature: %lX C\r\n", u1.l);
         
    //      printf("Temperature: %x%x%x%x C\r\n", u1.s[3],u1.s[2],u1.s[1],u1.s[0]);        
         
//         printf("Temperature: %x%x%x%x C\r\n", make8(u1.d,0),make8(u1.d,1),make8(u1.d,2),make8(u1.d,3));  
         
//2022/09/22         u2.l=f_PICtoIEEE(u1.l);
         
//         printf("Temperature: %x%x%x%x C\r\n", make8(u2.d,3),make8(u2.d,2),make8(u2.d,1),make8(u2.d,0));      

/*
         putc(0x03);putc(0xFC);
//         putc(make8(u2.d,3));         putc(make8(u2.d,2));         putc(make8(u2.d,1));         putc(make8(u2.d,0));
          putc(make8(u2.d,0));         putc(make8(u2.d,1));         putc(make8(u2.d,2));         putc(make8(u2.d,3));        
         
         putc(0xFC);putc(0x03);
         
*/         
        // printf("\r\n");
      }
      
      
 //     reset_cpu();
 
 //2022/09/21		delay_ms(65535);
   }
   
}