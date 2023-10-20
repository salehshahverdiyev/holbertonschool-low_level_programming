#include "main.h"
/**
 * print_sign - The function checks  a sign of a number
 * @n: it is a parametr
 * Return: 1 , 0 or -1
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
