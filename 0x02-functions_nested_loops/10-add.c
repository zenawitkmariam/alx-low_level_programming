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
=======

/**
 * add - adds two integers
 * @n1: integer 1
 * @n2: integer 2
 * Description: give two integers, returns sum
 * Return: sum
 */

int add(int n1, int n2)
{
	int sum;

	sum = n1 + n2;

	return (sum);
>>>>>>> 3fd1ecf0d04b7660d20a9589f7796e700944d966
}
