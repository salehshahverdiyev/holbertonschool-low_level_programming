#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sum of all its parameters
 * @n: parametr n
 * Description: The function returns the sum of all its parameters
 * Return: sum of all its parameters or 0
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int sum = 0, i;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);

	return (sum);
}
