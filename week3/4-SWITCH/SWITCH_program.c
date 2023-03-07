/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: HAL          **********************/
/*********************    SWC     :: SWITCH       **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/

#include "STD_Types.h"
#include "DIO_interface.h"
#include "SWITCH_interface.h"



void SWITCH_voidInit(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8ConnectionType)
{
    /* Configure the switch pin as input */
    DIO_u8SetPinDirection(Copy_u8Port, Copy_u8Pin, DIO_u8PIN_INPUT);

    /* Set the connection type of the switch (pull-up or pull-down) */
    if (Copy_u8ConnectionType == SWITCH_u8PULLUP)
    {
        DIO_u8SetPinValue(Copy_u8Port, Copy_u8Pin, DIO_u8PIN_HIGH);
    }
    else if (Copy_u8ConnectionType == SWITCH_u8PULLDOWN)
    {
        DIO_u8SetPinValue(Copy_u8Port, Copy_u8Pin, DIO_u8PIN_LOW);
    }
}


u8 SWITCH_u8GetState(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8ConnectionType)
{
	u8 Local_u8SwitchState = 0;

	    /* Read the value of the switch pin */
	    DIO_u8GetPinValue(Copy_u8Port, Copy_u8Pin, &Local_u8SwitchState);

	    /* Invert the switch state if it's connected to a pull-up resistor */
	    if (Copy_u8ConnectionType == SWITCH_u8PULLUP)
	    {
	        Local_u8SwitchState = !Local_u8SwitchState;
	    }

	    return Local_u8SwitchState;
}
