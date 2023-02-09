#include "STD_TYPES.h"
#include "DIO_interface.h"
#include "PORT_interface.h"
#include "GIE_interface.h"
#include "EXTI_interface.h"

void main(void)
{
	PORT_voidInit();
	EXTI_voidInt0Init();
	GIE_voidEnable();
	while(1)
	{

	}
}

void __vector_1(void) __attribute__ ((signal));
void __vector_1(void)
{
	DIO_u8SetPinValue(DIO_u8PORTC,5,DIO_u8PIN_HIGH);
}