/***********************************************************************/
/***********************************************************************/
/*******************     Author  :: Menna Adel    **********************/
/*******************   ASSignment:: W2.Q2         **********************/
/*******************     Version :: 1.00          **********************/
/***********************************************************************/
/***********************************************************************/

#include <avr/io.h>
#include <util/delay.h>

void main()
{
   // set Seven segment as output
  DDRB = 0xff;
  //set pin 0 and 1 in PA as inputs
  DDRA &= ~((1<< PA0) |  (1<<PA1));
    // Enable internal pull-up resistors on pins PA & PA1
   PORTA |= (1 << PA0) | (1 << PA1) ;
    // define a variable to count the number the seven segment is displaying
     uint8_t count = 0;


    // an array contains the numbers from 0 to 9
          uint8_t SevenSegArr[10] =
               {
            0b00111111,
        0b00000110,
        0b01011011,
        0b01001111,
        0b01100110,
        0b01101101,
        0b01111101,
        0b00000111,
        0b01111111,
        0b01101111
               };

          PORTB = SevenSegArr[0];

 while(1)
          {

           if(!(PINA & (1<< PA0))) //check if switch 1 is pressed
           {
             if(count<9)
             {
               PORTB = SevenSegArr[count+1]; // display the next number
               count++;
             }
             while(!(PINA & (1<< PA0)));  //to make sure the switch 1 is not pressed anymore

           }

           if(!(PINA & (1<< PA1)))  //check if switch 1 is pressed
           {
                       if(count>0)
                       {
                         PORTB = SevenSegArr[count-1]; // display the previous number
                         count--;
                       }
                       while(!(PINA & (1<< PA1)));    //to make sure the switch 2 is not pressed anymore

                     }
          }


}