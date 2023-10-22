#include"main.h"
/**
 * print_square - function prints squares
 * @size: size parametr
 * Description: The function prints squares
 * Return: IDK
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
