#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_numbers - prints numbers
 * @separator: parametr separator
 * @n: parametr n
 * Description: The function prints numbers, followed by a new line
 * Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i;

	va_start(ap, n);
	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (i < (int)n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
