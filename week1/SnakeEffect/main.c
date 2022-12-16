#include<avr/io.h>
#include<util/delay.h>

void main()
{
	DDRA = 0xff;
	while(1)
	{
		for(int i =0; i<8; i++)
		{
			PORTA |= (1 << i);
			_delay_ms(300);
		}
		for(int i =0; i<8; i++)
		{
			PORTA &= ~(1 << i);
			_delay_ms(300);
		}

	}
}
