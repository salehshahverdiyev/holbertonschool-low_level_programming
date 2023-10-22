#include "main.h"
/**
 * print_triangle - prints triangle
 * @size: size parametr
 * Description: The function prints triangle to right side by #
 * Return: IDK
*/
void print_triangle(int size)
{
	int i, j, k = size;

	if (size <= 0)
	{
		_putchar('\n'); }
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				if (j < k)
					_putchar(' ');
				else
					_putchar('#'); }
			--k;
			_putchar('\n');
		}
	}
}
