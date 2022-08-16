/*
 ================================================================================================
 Name        : ultrasonicMain.c

 Author      : Mazen Khaled

 Description : Measure distance using ultrasonic and a LCD.

 Created on  : July 14, 2022
 ================================================================================================
 */

#include "ultrasonic.h"
#include "LCD.h"
#include  <util/delay.h>
#include  <avr/interrupt.h>

int main()
{
	uint16 LCD_distance; 		/*distance shown on the LCD screen*/
	sei(); 						/*enabling global interrupt*/
	LCD_init(); 				/*initializing LCD*/
	Ultrasonic_init(); 			/*initializing Ultrasonic*/
	LCD_displayString("Distance=    cm");

	while(1){
		LCD_distance=Ultrasonic_readDistance();
		LCD_moveCursor(0,10);
		if(LCD_distance >= 100)/*for LCD positions*/
			LCD_intgerToString(LCD_distance);
		else{
			LCD_intgerToString(LCD_distance);
			LCD_displayCharacter(' ');
		}
	}
	return 0;
}
