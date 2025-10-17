/*
 * DC_motor_funtions.c
 *
 * Created: 9/25/2025 2:20:22 AM
 * Author : Jaise Biju
 */ 
#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

void cw(){
	PORTB |=(1<<PORTB5);
	PORTB &=~(1<<PORTB4);
	_delay_ms(5000);
	};
void stp(){
	PORTB &=~(1<<PORTB4);
	PORTB &=~(1<<PORTB5);
	_delay_ms(2000);
}
void ccw(){
	PORTB |=(1<<PORTB4);
	PORTB &=~(1<<PORTB5);
	_delay_ms(5000)	;
}
	
	
int main(void)
{
	DDRB |=(1<<DDB5);
	DDRB |=(1<<DDB4);
    
    while (1) 
    {
		cw();
		stp();
		ccw();
		stp();
    }
}

