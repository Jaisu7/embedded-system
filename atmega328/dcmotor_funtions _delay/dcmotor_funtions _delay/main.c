/*
 * dcmotor_funtions _delay.c
 *
 * Created: 9/25/2025 2:47:13 AM
 * Author : Jaise Biju
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void delay_ms(unsigned int ms){
	while (ms--) {
		_delay_ms(1);
	}
}

void cw(unsigned int t){ // clockwise function
	PORTB |= (1<<PORTB5);
	PORTB &= ~(1<<PORTB4);
	delay_ms(t);
}

void stp(unsigned int t){ // stop function
	PORTB &= ~(1<<PORTB4);
	PORTB &= ~(1<<PORTB5);
	delay_ms(t);
}

void ccw(unsigned int t){ // anticlockwise function
	PORTB |= (1<<PORTB4);
	PORTB &= ~(1<<PORTB5);
	delay_ms(t);
}

int main(void)
{
	DDRB |= (1<<DDB5) | (1<<DDB4); // set PB4 and PB5 as output
	
	while (1)
	{
		cw(7000);   // rotate CW for 7 sec
		stp(2000);  // stop for 2 sec
		ccw(5000);  // rotate CCW for 5 sec
		stp(2000);  // stop for 2 sec
	}
}
