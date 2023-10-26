#include "main.h"

/**
 * _puts - print string
 * @str: parametr str (string)
 * Description: The function prints string
 * Return: IDK
*/
void _puts(char *str)
{
	int a = 0;

	while (str[a] != '\0')
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
