#include<avr/io.h>
#include<util/delay.h>
void main()
{
	DDRA = 0xff;
	while(1)
	{
		PORTA = 0b00000001;
		_delay_ms(1000);
		PORTA = 0;
		_delay_ms(1000);
	}
}
