#include "main.h"
/**
 * print_last_digit - The function computes the absolute value of an integer
 * @c: it is parametr
 * Return: last digit of number
*/
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
		_putchar (c % 10 + '0');
		return (c % 10);
	}
	else
	{
		c = c * -1;
		_putchar (c % 10 + '0');
		return (c % 10);
	}
}
