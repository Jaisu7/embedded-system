#define F_CPU 16000000UL
#include <avr/io.h>
#include <util/delay.h>

int main(void) {
	DDRB = 0b00100000;        // make PB5 output

	while (1) {
		PORTB = 0b00100000;   // LED ON
		_delay_ms(1000);

		PORTB = 0b00000000;   // LED OFF
		_delay_ms(1000);
	}
}
