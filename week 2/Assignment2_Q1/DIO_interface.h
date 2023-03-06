/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: MCl          **********************/
/*********************    SWC     :: DIO          **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/


#ifndef DIO_INTERFACE_H_
#define DIO_INTERFACE_H_


//u8 DIO_u8SetPinDirection(u8 u8port, u8 u8pin, u8 u8direction);

//u8 DIO_u8SetPortDirection(u8 u8port, u8 u8direction);

u8 DIO_u8SetPinValue(u8 u8port,u8 u8pin,u8 u8value);

u8 DIO_u8SetPortValue(u8 u8port,u8 u8value);

u8 DIO_u8GetPinValue(u8 u8port,u8 u8pin,u8 *u8value);



#endif
