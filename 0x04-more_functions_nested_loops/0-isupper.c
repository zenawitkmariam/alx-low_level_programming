#include "main.h"

/**
 * _isupper - checks if the input is uppercase or lowercase
 * @l: variable to be checked
 * Return: 1 if true, 0 if false
 */

int _isupper(int l)
{
	if (l >= 65 && l <= 90)
	{
		return (1);
	}
	return (0);
}
