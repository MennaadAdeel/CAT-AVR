/***********************************************************************/
/***********************************************************************/
/*******************     Author  :: Menna Adel    **********************/
/*******************   ASSignment:: W2.Q1         **********************/
/*******************     Version :: 1.00          **********************/
/***********************************************************************/
/***********************************************************************/

#include "STD_Types.h"
#include "PORT_interface.h"
#include "DIO_interface.h"
#include "DIO_config.h"
#include <util/delay.h>

u8 switch1,switch2,switch3 ;
void main()
{
	PORT_voidInit();
	while(1)
	{
		DIO_u8GetPinValue(DIO_u8PORTB,DIO_u8PIN0, &switch1);
		if(switch1 == 0 )  //if switch 0 is pressed
		{
			DIO_u8SetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_HIGH);  //turn on led 1
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_LOW);  //turn off led 2
		}
		DIO_u8GetPinValue(DIO_u8PORTB,DIO_u8PIN1,&switch2);
		if(switch2 == 0 )  //if switch 2 is pressed
		{
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN0,DIO_u8PIN_LOW);  //turn off led 1
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_HIGH);  //turn on led 2
		}
		DIO_u8GetPinValue(DIO_u8PORTB,DIO_u8PIN2,&switch3);
		if(switch3 == 0 )  //if switch 3 is pressed
		{
			DIO_u8SetPinValue(DIO_u8PORTA, DIO_u8PIN0, DIO_u8PIN_HIGH);  //turn on led 1
			DIO_u8SetPinValue(DIO_u8PORTA,DIO_u8PIN1,DIO_u8PIN_HIGH);  //turn on led 2
		}
	}
}
