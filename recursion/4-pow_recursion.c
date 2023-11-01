#include "main.h"
/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: parametr x
 * @y: parametr y
 * Description: The function returns power of x or -1
 * Return: power of x or -1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y > 0)
	{
		y = y - 1;
		return (x * _pow_recursion(x, y));
	}
	return (-1);
}
