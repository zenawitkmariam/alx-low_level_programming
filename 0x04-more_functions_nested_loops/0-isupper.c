#include "main.h"

/**
* _isupper- tells weather the letter is uppercase or lowercase.
* @l : is the letter to be checked
* Return : 1 if uppercase 0 if not
*/

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
