/*
 * Blink_Bitwise.c
 *
 * Created: 9/24/2025 11:50:23 PM
 * Author : Jaise Biju
 */ 
#define  fCPU 1600000000UL
#include <avr/io.h>
#include <util/delay.h> 

int main(void)
{
    DDRB |=(1<<DDB5);
	//DDRB=0b00100000;
    while (1) 
    {
		PORTB|=(1<<PORTB5);
	    _delay_ms(2000);
		PORTB &=~(1<<PORTB5);
		_delay_ms(2000);
    }
}

