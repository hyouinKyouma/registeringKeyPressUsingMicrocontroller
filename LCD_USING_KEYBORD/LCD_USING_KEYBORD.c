/*
 * LCD_USING_KEYBORD.c
 *
 * Created: 2/10/2018 7:37:40 PM
 *  Author: ADITYA
 */ 


#include <avr/io.h>
#define F_CPU 1000000UL
#include <util/delay.h>
#include <atmega/lcdheader.h>
#include <atmega/USART.h>

int main(void)
{	
	baudX2;
	TXON;
	RXON;
	initialize_UCSRC;
	baud_rate(4800);		
	DDRC=DDRB=0xff;
	initialize_LCD(8,curon);
    while(1)
    {
		
		ldta(rx());
        //TODO:: Please write your application code 
    }
}