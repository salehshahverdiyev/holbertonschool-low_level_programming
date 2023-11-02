#include "main.h"
#include <stdio.h>
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: parametr n
 * Description: The function returns square root of number or -1
 * Return: square root of number or -1
*/
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	while (i * i != n)
	{
		i++;
		if (i * i == n)
			return (i);
		else if (i * i > n)
			return (-1);
	}
	return (_sqrt_recursion(n));
}
