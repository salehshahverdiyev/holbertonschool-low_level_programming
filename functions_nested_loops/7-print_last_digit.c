#include "main.h"
/**
 * print_last_digit - The function computes the absolute value of an integer
 * @c: it is parametr
 * Return: last digit of number
*/
int print_last_digit(int c)
{
	int ld = c % 10;

	if (ld < 0)
		ld *= -1;

	_putchar (ld + '0');

	return (ld);
}
