#include "main.h"
/**
 * print_alphabet_x10 - it prints alphabet ten times
 *
 *
 *
 *
 * Return : ten alphabets
 *
 *
*/
void print_alphabet_x10(void)
{
	int i;
	char a;

	for (i = 0 ; i <= 9 ; i++)
	{
		for (a = 'a' ; a <= 'z' ; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
