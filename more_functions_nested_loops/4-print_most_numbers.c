#include "main.h"
/**
 * print_most_numbers - prints numbers except 2 andi 4
 * Description: The functions prints numbers from 0 to 9 except 4 and 2
 * Return: IDK
*/
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != '2' && i != '4')
			_putchar(i);
	}
	_putchar('\n');
}
