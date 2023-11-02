#include "main.h"
#include <stdio.h>
/**
 * _sqrt_help - checks all conditions for help
 * @n: parametr n
 * @i: parametr i
 * Description: The function checks all conditions for help
 * Return: square root and (i+1)
*/
int _sqrt_help(int n, int i)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	if (i * i == n)
		return (i);
	else if (i * i > n)
		return (-1);
	return (_sqrt_help(n, i + 1));
}
/**
 * _sqrt_recursion -  returns the natural square root of a number
 * @n: parametr n
 * Description: The function returns square root of number or -1
 * Return: square root of number or -1
*/
int _sqrt_recursion(int n)
{
	return (_sqrt_help(n, 1));
}
