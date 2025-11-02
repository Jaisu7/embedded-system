/*
 * bmp280_lcd.c
 *
 * Created: 11/2/2025 12:03:10 PM
 * Author : Jaise Biju
 */ 

#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>
#include "lcd.h"

int main(void)
{
	lcd_init();
	lcd_set_cursor(0, 2);
	lcd_print("temperature");

	lcd_set_cursor(1, 6);
	
	
	_delay_ms(1000);
	
	
	while (1)
	{
		

	}
}

