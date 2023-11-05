#include "main.h"
#include <stdio.h>
/**
 * _abs - The function computes the absolute value of an integer
 * @c: it is a parametr
 * Return: c or (c * -1)
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
		return (c * -1);
}
