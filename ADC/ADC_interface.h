/*************************************************/
/*************************************************/
/***********   Author : Ahmed Fares   ************/
/***********     Layer : MCAL         ************/
/***********     SWC : ADC            ************/
/***********     Version : 1.00       ************/
/*************************************************/
/*************************************************/


#ifndef ADC_INTERFACE_H_
#define ADC_INTERFACE_H_

void ADC_voidInit(void);

u8  ADC_u8StartConversionSynch(u32* Copy_pu32ResultVolt,u16* Copy_pu16Reading);
u16 ADC_u16GetChannelReading(u32* Copy_pu32ResultVolt);
s32 ADC_s32Mapping(s32 Copy_s32InputMin,s32 Copy_s32InputMax,s32 Copy_s32OutputMin,s32 Copy_s32OutPutMax,s32 Copy_s32InputValue);

#endif
