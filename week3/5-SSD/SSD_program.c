/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: HAL          **********************/
/*********************    SWC     :: SSD          **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/

#include "STD_Types.h"
#include "DIO_interface.h"
#include "SSD_interface.h"

u8

void SSD_voidInit(u8 copy_u8Port)
{
	//set port as output
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN0,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN1,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN2,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN3,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN4,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN5,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN6,DIO_u8PIN_OUTPUT);
	DIO_u8SetPinDirection(copy_u8Port,DIO_u8PIN7,DIO_u8PIN_OUTPUT);

	//set value initially as 0
	DIO_u8SetPortValue(copy_u8Port, DIO_u8PIN_LOW);


}


void SSD_voidDisplay(u8 copy_u8Value ,u8 copy_u8Port)
{
	DIO_u8SetPortValue(copy_u8Port , SSD_data[copy_u8Value]);
}
