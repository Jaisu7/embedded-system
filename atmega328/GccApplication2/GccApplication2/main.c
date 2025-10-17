/*
 * GccApplication2.c
 *
 * Created: 9/16/2025 5:14:05 PM
 * Author : Jaise Biju
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB-0b00100000;
    
    while (1) 
    {
		PORTB=0b00100000;
		_delay_ms(1000);
		PORTB=0b00100000;
		_delay_ms(1000);
    }
}

