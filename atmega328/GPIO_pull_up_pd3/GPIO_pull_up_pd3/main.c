/*
 * GPIO_pull_up_pd3.c
 *
 * Created: 9/24/2025 6:12:26 PM
 * Author : Jaise Biju
 */ 
#define F_CPU 1600000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRD =0b00001000;
	DDRC =0b00000000;
	/* Replace with your application code */
	while (1)
	{
		if (PINC ==0b00000001)
		{
			PORTD= 0b00000000;
		}
		else
		{
			PORTD= 0b00001000;
		}
	}

}
