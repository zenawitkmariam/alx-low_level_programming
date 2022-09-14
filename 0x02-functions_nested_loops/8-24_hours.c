#include "main.h"
<<<<<<< HEAD
/**
 * main - Prints _putchar as a message.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int count, sz;

	sz = sizeof(str) / sizeof(int);
	for (count = 0; count < sz; count++)
	{
		_putchar(str[count]);
	}
	_putchar('\n');
	return (0);
}
=======
  
 /** 
  * jack_bauer - prints every minute of the day 
  * Description: prints every minute of the day 
  * Return: void 
  */ 
 void jack_bauer(void) 
 { 
         int hours_tens, hours_ones, minutes_tens, minutes_ones, hours_max; 
  
         hours_max = 58; 
         hours_tens = '0'; 
         while (hours_tens < '3') 
         { 
                 if (hours_tens == '2') 
                 { 
                         hours_max = '4'; 
                 } 
                 hours_ones = '0'; 
                 while (hours_ones < hours_max) 
                 { 
                         minutes_tens = '0'; 
                         while (minutes_tens < '6') 
                         { 
                                 minutes_ones = '0'; 
                                 while (minutes_ones < 58) 
                                 { 
                                         _putchar(hours_tens); 
                                         _putchar(hours_ones); 
                                         _putchar(':'); 
                                         _putchar(minutes_tens); 
                                         _putchar(minutes_ones); 
                                         _putchar('\n'); 
                                         minutes_ones++; 
                                 } 
                                 minutes_ones = '0'; 
                                 minutes_tens++; 
                         } 
                         minutes_tens = '0'; 
                         hours_ones++; 
                 } 
                 hours_ones = '0'; 
                 hours_tens++; 
         } 
 }
>>>>>>> d0df569156d7733e1daa85741dbf46822d951d29
