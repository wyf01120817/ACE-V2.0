///////////////////////////////////////////////////////////////////////////
////                        ieeefloat.c                                ////
////                                                                   ////
////    This library converts IEEE float format to and from            ////
////    the Microchip format used by PCB,PCM and PCH.                  ////
////        (C) Copyright 1996,2006 Custom Computer Services           ////
//// This source code may only be used by licensed users of the CCS C  ////
//// compiler.  This source code may only be distributed to other      ////
//// licensed users of the CCS C compiler.  No other use, reproduction ////
//// or distribution is permitted without written permission.          ////
//// Derivative programs created using this software in object code    ////
//// form are not restricted in any way.                               ////
///////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////

#ifdef __PCD__
/*
float32 f_PICtoIEEE(unsigned int32)
PURPOSE: This function converts float from CCS -PIC format to IEEE format
PARAMS: 32 bit number
RETURNS: 32 bit Floating point number
*/
float32 f_PICtoIEEE(unsigned int32 pic)
{
   union{
      float32 f;
      unsigned int8 b[4];
   } result;
   
   union{
      unsigned int32 d;
      unsigned int8 b[4];
   } data;
   
   data.d = pic;
   
   result.b[0] = data.b[3];
   result.b[1] = data.b[2];
   result.b[2] = data.b[1];
   
   if(bit_test(data.d,0))
      bit_set(result.b[2],7);
   else
      bit_clear(result.b[2],7);
   
   shift_right(&data.b[0],1,bit_test(data.b[1],7));
   result.b[3] = data.b[0];
   
   return(result.f);
}
#else
/*
int32 f_PICtoIEEE(float f)
PURPOSE: This function converts float from CCS -PIC format to IEEE format in little endian mode
PARAMS: Floating point number
RETURNS: 32 bit number
*/

union joiner {
   int32 f;
   float fp;
};

int32 f_PICtoIEEE(union joiner f)
{

   #locate byte0 = f
   #locate byte1 = f+1
   #locate byte2 = f+2
   #locate byte3 = f+3

   #if defined(__PCB__) || defined(__PCM__)
      #asm
      
      // switch the bits
      rlf   byte1
      rrf   byte0
      rrf   byte1
      
      #endasm
   #elif defined(__PCH__)
      #asm
      
      // switch the bits
      rlcf   byte1
      rrcf   byte0
      rrcf   byte1   
      
      #endasm
   #else
      #error Invalid complier defined
   #endif
   
   #asm

   // swap the outer bytes
      movf   byte0,W
      xorwf  byte3,W
      xorwf  byte3,F
      xorwf  byte3,W
      movwf  byte0

   // swap the inner bytes
      movf   byte1,W
      xorwf  byte2,W
      xorwf  byte2,F
      xorwf  byte2,W
      movwf  byte1
   
   #endasm
   
    return f.f;
}
#endif

#ifdef __PCD__
/*
unsigned int32 f_IEEEtoPIC(float32 f)
PURPOSE: This function converts IEEE format to float CCS -PIC format
PARAMS: 32 bit Floating point number
RETURNS: 32 bit number
*/
unsigned int32 f_IEEEtoPIC(float32 ieee)
{
   union{
      unsigned int32 d;
      unsigned int8 b[4];
   } result;
   
   union{
      float32 f;
      unsigned int8 b[4];
   } data;
   
   data.f = ieee;
   
   result.b[3] = data.b[0];
   result.b[2] = data.b[1];
   result.b[1] = data.b[2];
   
   if(bit_test(data.b[3],7))
      bit_set(result.b[1],7);
   else
      bit_clear(result.b[1],7);
   
   result.b[0] = data.b[3];
   
   shift_left(&result.b[0],1,bit_test(data.b[2],7));
   
   return(result.d);   
}
#else
/*
float f_IEEEtoPIC(int32 f)
PURPOSE: This function converts IEEE format to a float
PARAMS: 32 bit number
RETURNS: Floating point number
*/
float f_IEEEtoPIC(union joiner f)
{

   #locate byte0 = f
   #locate byte1 = f+1
   #locate byte2 = f+2
   #locate byte3 = f+3
   
   #asm

   // swap the outer bytes
      movf   byte0,W
      xorwf  byte3,W
      xorwf  byte3,F
      xorwf  byte3,W
      movwf  byte0

   // swap the inner bytes
      movf   byte1,W
      xorwf  byte2,W
      xorwf  byte2,F
      xorwf  byte2,W
      movwf  byte1

   #endasm

   #if defined(__PCB__) || defined(__PCM__)
      #asm

      // switch the bits
      rlf   byte1
      rlf   byte0
      rrf   byte1
      
      #endasm
   #elif defined(__PCH__)
      #asm
      
      // switch the bits
      rlcf   byte1
      rlcf   byte0
      rrcf   byte1   
      
      #endasm
   #else
      #error Invalid complier defined
   #endif
   
    return f.fp;
}
#endif
