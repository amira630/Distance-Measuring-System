/**************************************************************************************************
 Name        : Mini_Project4.c
 Author      : Amira Atef Ismaeil El Komy
 Description : Fan Controller
 Date        : 20/10/2023
 **************************************************************************************************/
#include "lcd.h"
#include "ultrasonic.h"

int main(void){
	LCD_init();
	Ultrasonic_init();
	uint16 distance;
	while(1){
		distance = Ultrasonic_readDistance();
		LCD_displayStringRowColumn(0, 0,"Distance= ");
		LCD_intgerToString(distance);
		LCD_displayString("cm  ");
	}
	return 0;
}
