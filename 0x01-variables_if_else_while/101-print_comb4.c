#include <stdio.h>
#include <unistd.h>
/** 
* main - print the string in the put function
* Description: using the main function
* this program prints "Programming is like building a multilingual puzzle
* Return: 0
*/
int main(void)
{
	int i;
	
	for (i = '0'; i <= '9' ; i++)
	{
	putchar(i);
	if (i != '9')
	{
		putchar(',');
		putchar(' ');
	}
	}
	putchar('\n');
	return (0);
}
