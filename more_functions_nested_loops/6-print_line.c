#include "main.h"
/**
 * print_line - draws line
 * @n: parametr n
 * Description: The function draws a straight line in the terminal.
 * Return: IDK
*/
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
