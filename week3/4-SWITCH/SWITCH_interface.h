/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: HAL          **********************/
/*********************    SWC     :: SWITCH       **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/


#ifndef SWITCH_INTERFACE_H_
#define SWITCH_INTERFACE_H_

#define SWITCH_u8PULLUP      0
#define SWITCH_u8PULLDOWN    1

void SWITCH_voidInit(u8 Copy_u8Port, u8 Copy_u8Pin,u8 Copy_u8ConnectionType);

u8 SWITCH_u8GetState(u8 Copy_u8Port, u8 Copy_u8Pin, u8 Copy_u8ConnectionType);


#endif
