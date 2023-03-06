/***********************************************************************/
/***********************************************************************/
/*********************    Author  :: Menna Adel   **********************/
/*********************    Layer   :: MCl          **********************/
/*********************    SWC     :: PORT         **********************/
/*********************    Version :: 1.00         **********************/
/***********************************************************************/
/***********************************************************************/

#include "STD_Types.h"

#include "PORT_config.h"
#include "PORT_private.h"
#include "PORT_interface.h"
#include "PORT_register.h"

void PORT_voidInit(void)
{

    DDRA = PORTA_DDR;
    DDRB = PORTB_DDR;
    DDRC = PORTC_DDR;
    DDRD = PORTD_DDR;


    PORTA = PORTA_INITIAL_VALUE;
    PORTB = PORTB_INITIAL_VALUE;
    PORTC = PORTC_INITIAL_VALUE;
    PORTD = PORTD_INITIAL_VALUE;
    


}
