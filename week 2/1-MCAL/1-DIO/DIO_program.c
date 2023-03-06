/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: MCl          **********************/
/*********************    SWC     :: DIO          **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/

#include "STD_Types.h"
#include "Bit_MATHs.h"


#include "DIO_interface.h"
#include "DIO_config.h"
#include "DIO_register.h"
#include "DIO_private.h"


/* we don't need it anymore 
u8 DIO_u8SetPinDirection(u8 u8port, u8 u8pin, u8 u8direction)
{
    switch (u8port)
    {
    case 'A':
        if (u8direction == 1)
            SET_BIT(DDRA, u8pin);
        else if (u8direction == 0)
            CLR_BIT(DDRA, u8pin);
        else
            return 0;
        break;

    case 'B':
        if (u8direction == 1)
            SET_BIT(DDRB, u8pin);
        else if (u8direction == 0)
            CLR_BIT(DDRB, u8pin);
        else
            return 0;
        break;

    case 'C':
        if (u8direction == 1)
            SET_BIT(DDRC, u8pin);
        else if (u8direction == 0)
            CLR_BIT(DDRC, u8pin);
        else
            return 0;
        break;

    case 'D':
        if (u8direction == 1)
            SET_BIT(DDRD, u8pin);
        else if (u8direction == 0)
            CLR_BIT(DDRD, u8pin);
        else
            return 0;
        break;

    default:
        return 0;
        break;
    }
}

u8 DIO_u8SetPortDirection(u8 u8port, u8 u8direction)
{
    switch (u8port)
    {
    case 'A':
        if (u8direction == 1)
            DDRA = 1;
        else if (u8direction == 0)
            DDRA = 0;
        else
            return 0;
        break;

    case 'B':
        if (u8direction == 1)
            DDRB = 1;
        else if (u8direction == 0)
            DDRB = 0;
        else
            return 0;
        break;

    case 'C':
        if (u8direction == 1)
            DDRC = 1;
        else if (u8direction == 0)
            DDRC = 0;
        else
            return 0;
        break;

    case 'D':
        if (u8direction == 1)
            DDRD = 1;
        else if (u8direction == 0)
            DDRD = 0;
        else
            return 0;
        break;

    default:
        return 0;
        break;
    }
}
*/


u8 DIO_u8SetPinValue(u8 u8port, u8 u8pin, u8 u8value)
{
	u8 Local_u8ErrorState = 0;
    switch (u8port)
    {
    case DIO_u8PORTA:
        if (u8value == 1)
            SET_BIT(PORTA, u8pin);
        else if (u8value == 0)
            CLR_BIT(PORTA, u8pin);
        else
            return Local_u8ErrorState =1;
        break;
    case DIO_u8PORTB:
        if (u8value == 1)
            SET_BIT(PORTB, u8pin);
        else if (u8value == 0)
            CLR_BIT(PORTB, u8pin);
        else
            return Local_u8ErrorState =1;
        break;

    case DIO_u8PORTC:
        if (u8value == 1)
            SET_BIT(PORTC, u8pin);
        else if (u8value == 0)
            CLR_BIT(PORTC, u8pin);
        else
            return Local_u8ErrorState =1;
        break;

    case DIO_u8PORTD:
        if (u8value == 1)
            SET_BIT(PORTD, u8pin);
        else if (u8value == 0)
            CLR_BIT(PORTD, u8pin);
        else
            return Local_u8ErrorState =1;
        break;

    default:
        return Local_u8ErrorState =1;
        break;
    }
    return Local_u8ErrorState;
}

u8 DIO_u8SetPortValue(u8 u8port, u8 u8value)
{
	u8 Local_u8ErrorState=0;
    switch (u8port)
    {
    case DIO_u8PORTA:
        if (u8value == 1)
            PORTA = 1;
        else if (u8value == 0)
            PORTA = 0;
        else
            return Local_u8ErrorState =1;
        break;

    case DIO_u8PORTB:
        if (u8value == 1)
            PORTB = 1;
        else if (u8value == 0)
            PORTB = 0;
        else
            return Local_u8ErrorState =1;
        break;

    case DIO_u8PORTC:
        if (u8value == 1)
            PORTC = 1;
        else if (u8value == 0)
            PORTC = 0;
        else
            return Local_u8ErrorState =1;
        break;

    case DIO_u8PORTD:
        if (u8value == 1)
            PORTD = 1;
        else if (u8value == 0)
            PORTD = 0;
        else
            return Local_u8ErrorState =1;
        break;

    default:
        return Local_u8ErrorState =1;
        break;
    }
    return Local_u8ErrorState;
}

u8 DIO_u8GetPinValue(u8 u8port, u8 u8pin, u8 *u8value)
{
	u8 Local_u8ErrorState = 0;
    switch (u8port)
    {
    case DIO_u8PORTA:
        *u8value = GET_BIT(PINA, u8pin);
        break;
    case DIO_u8PORTB:
        *u8value = GET_BIT(PINB, u8pin);
        break;

    case DIO_u8PORTC:
        *u8value = GET_BIT(PINC, u8pin);
        break;

    case DIO_u8PORTD:
        *u8value = GET_BIT(PIND, u8pin);
        break;

    default:
    	Local_u8ErrorState=1;
        break;
    }
    return Local_u8ErrorState;
}




