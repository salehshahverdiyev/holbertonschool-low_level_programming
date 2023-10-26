#include "main.h"
/**
 * puts2 - print once after two digits
 * @str: parametr str (string)
 * Description: Prints characters of the string which located in even index.
 * Return: IDK
*/
void puts2(char *str)
{
	int a = 0;
	int b;

	while (str[a] != '\0')
	{
		a++; }
	for (b = 0; b <= a - 1; b++)
	{
		if ((b % 2) == 0)
			_putchar(str[b]);
	}
	_putchar('\n');
}
