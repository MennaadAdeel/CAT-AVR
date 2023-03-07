/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: HAL          **********************/
/*********************    SWC     :: KEYPAD       **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/

#include "STD_Types.h"
#include "DIO_interface.h"
#include "LED_interface.h"


void LCD_voidLedOn(u8 u8Port, u8 u8Pin)
{
	DIO_u8SetPinValue(u8Port,u8Pin,1);
}

void LCD_voidLedOff(u8 u8Port, u8 u8Pin)
{
	DIO_u8SetPinValue(u8Port,u8Pin,0);
}

void LCD_voidLedToggle(u8 u8Port, u8 u8Pin)
{
	 u8 Local_u8PinValue = DIO_u8GetPinValue(u8Port, u8Pin);

	    /* Toggle the value of the pin */
	    if (Local_u8PinValue == DIO_u8PIN_HIGH)
	    {
	        DIO_voidSetPinValue(u8Port, u8Pin, DIO_u8PIN_LOW);
	    }
	    else
	    {
	        DIO_voidSetPinValue(u8Port, u8Pin, DIO_u8PIN_HIGH);
	    }

}

