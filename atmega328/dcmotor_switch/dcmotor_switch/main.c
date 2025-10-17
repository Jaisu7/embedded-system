/*
 * dcmotor_switch.c
 *
 * Created: 9/28/2025 1:00:32 AM
 * Author : Jaise Biju
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRB|=(1<<DDB5);
	DDRB|=(1<<DDB4);
	DDRD &=~(1<<DDD2);
	while (1)
	{
		if(PIND &(1<<PIND2))
		{
			
		PORTB |=(1<<PORTB5);
		PORTB &=~(1<<PORTB4);
		_delay_ms(5000);
		PORTB &=~(1<<PORTB4);
		PORTB &=~(1<<PORTB5);
		_delay_ms(5000);
		PORTB |=(1<<PORTB4);
		PORTB &=~(1<<PORTB5);
		_delay_ms(5000);
	}
	else
	{PORTB &=~(1<<PORTB4);
	PORTB &=~(1<<PORTB5);
		
	}
}

}

