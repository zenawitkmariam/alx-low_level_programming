#include "main.h"

/**
* _isdigit- tells weather the variable holds digit or not.
* @d : is the degit to be checked
* Return : 1 if degit 0 if not
*/

int _isdigit(int d)
{
	if(d>=0 && d<=9)
	{
		return(1);
	}
	else 
	{
	        return(0);
	}
}
