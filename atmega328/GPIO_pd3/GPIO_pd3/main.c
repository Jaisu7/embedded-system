/*
 * GPIO_pd3.c
 *
 * Created: 9/24/2025 5:37:37 PM
 * Author : Jaise Biju
 */ 
#define  F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD = 0b00001000;
    /* Replace with your application code */
    while (1) 
    {
		PORTD =0b00001000;
		_delay_ms(1000);
		PORTD=0b00000000;
		_delay_ms(1000);
    }
}

