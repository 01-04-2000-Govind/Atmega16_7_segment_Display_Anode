/*
 * 7 Segment Led.c
 *
 * Created: 8/18/2023 2:15:03 PM
 * Author : Govind
 */ 

#include <avr/io.h>
#include <util/delay.h>


int main(void)
{
	DDRC |= 0xff;
	unsigned int segment_Anode[10] = {0xc0,0xf9,0xa4,0xb0,0x99,0x92,0x82,0xf8,0x80,0x90};
		
    while (1) 
    {
		for(int i=0;i<10;i++)
		{
		   PORTC = segment_Anode[i];
		   _delay_ms(100);
        }
    }
}

