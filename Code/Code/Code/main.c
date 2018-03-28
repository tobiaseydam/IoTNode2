/*
 * Code.c
 *
 * Created: 27.03.2018 22:11:18
 * Author : Tobias
 */ 

#include <avr/io.h>


int main(void)
{
	//DDRB &= ~(1 << PB2);
	DDRB |= (1 << PB2);
	DDRB |= (1 << PB3);
	DDRB |= (1 << PB4);
	DDRC |= (1 << PC2);
	
	PORTB |= (1 << PB2);  //PB1 High
	PORTB |= (1 << PB3);  //PB1 High
	PORTB |= (1 << PB4);  //PB1 High
	PORTC |= (1 << PC2);  //PB1 High
	//PORTC |= (1 << PC4);  //PB1 High
	
	while(1){
	//	PORTC |= (1 << PC4);
	//	PORTC &= ~(1 << PC4);
	}
	//PORTB &= ~(1 << PB1); //PB1 Low
}

