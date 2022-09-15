#include "main.h"

/**
* _isdigit- tells weather the variable holds digit or not.
* @l : is the degit to be checked
* Return : 1 if degit 0 if not
*/

int _isdigit(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
