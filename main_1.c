#include <avr/io.h>
#include <string.h>
#include <avr/pgmspace.h>
#include "C:\palstine project\GccApplication2\GccApplication2\headers\GraphicLCD.h"


void Delay();
void Wait();
/*********************************************************************************/
/*         MAIN PROGRAM                                 */
/*********************************************************************************/
int main(void)
{
	Delay();
	InitLCD();
	LCD_Clear();

	DisplayText(1,3,"At these moments ");

Wait();
	LCD_Clear();
		DisplayText(1,3,"more than 11k martyrs ");

		Wait();
		LCD_Clear();
		
				DisplayText(1,3,"all of them civilians ");

				Wait();
				LCD_Clear();
				
								DisplayText(1,3,"It's not war ");

								Wait();
								LCD_Clear();
								
								
								
								
								DisplayText(1,3,"it's Genocide ");

								Wait();
								LCD_Clear();
	//PutPixel(unsigned char x,unsigned char y, char color);
	//line(char x0, char y0, char x1, char y1,char color)
	//DisplayCharSmall(unsigned char x,unsigned char y, char d)


	


	Wait();
	Wait();
	Wait();
	Wait();
	LCD_Clear();
	Delay100ms();
}

/*********************************************************************************/
/*      100 mSec Delay                    */
/*********************************************************************************/
void Delay100ms()
{
	int k;
	for(k=-29000;k<29000;k++)
	{
		asm("nop");
	}
}
/*********************************************************************************/
/*         DELAY 100mSec                                */
/*********************************************************************************/
void Delay()
{
	int t;
	for(t=-22500;t<22500;t++);
}
/****************************************************************************************/
/*           WAIT                                              */
/****************************************************************************************/
void Wait()
{
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
	Delay100ms();
}
