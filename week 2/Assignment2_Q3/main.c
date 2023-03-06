/***********************************************************************/
/***********************************************************************/
/*******************     Author  :: Menna Adel    **********************/
/*******************   ASSignment:: W2.Q3         **********************/
/*******************     Version :: 1.00          **********************/
/***********************************************************************/
/***********************************************************************/


#include "STD_Types.h"
#include "DIO_interface.h"
#include "PORT_interface.h"
#include <util/delay.h>

#define   SSD1    0
#define   SSD2    1


u8 SevenSegmentArray[10]={      0b00111111,
		                        0b00000110,
						    	0b01011011,
							    0b01001111,
								0b01100110,
								0b01101101,
								0b01111101,
								0b00000111,
								0b01111111,
								0b01101111 };


void SSD(u8 copy_u8Value, u8 copy_u8SSDPIN)
{
	DIO_u8SetPinValue(DIO_u8PORTB,copy_u8SSDPIN,DIO_u8PIN_LOW);  //Activate SSD1
	DIO_u8SetPortValue(DIO_u8PORTA,SevenSegmentArray[copy_u8Value]);  //set value
	_delay_ms(45);
	DIO_u8SetPinValue(DIO_u8PORTB,copy_u8SSDPIN,DIO_u8PIN_HIGH);  //Deactivate SSD1
}



void main()
{
	PORT_voidInit();
	u8 button1,button2,counter1 = 5,counter2 = 0;
	while(1)
	{

		DIO_u8GetPinValue(DIO_u8PORTB,DIO_u8PIN2,&button1);  //for increasing the number
		if(button1 == 0)
		{
			if(counter2 <= 9)
			{
				counter2 ++;
				if(counter2 == 10 )
				{
					counter1 ++;
					counter2 = 0;
				}
			}
		}
		SSD(counter1,SSD1);
		DIO_u8GetPinValue(DIO_u8PORTB,DIO_u8PIN3,&button2);  //for decreasing the number
			if(button2 == 0)
			{
				if(counter2  >= 0)
				{
					counter2 --;
					if(counter2 == -1 && counter1 > 0 )
					{
						counter1 --;
						counter2 = 9;
					}
				}
			}
		SSD(counter2,SSD2);
		SSD(counter1,SSD1);
		SSD(counter2,SSD2);

	}

}
