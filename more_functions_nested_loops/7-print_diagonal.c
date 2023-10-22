#include "main.h"
/**
 * print_diagonal -  function prints diagonal
 * Description: The function prints a diagonal in the terminal.
 * @n: parametr n
 * Return: IDK
*/
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				_putchar(' ');
		_putchar(92);
		_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
