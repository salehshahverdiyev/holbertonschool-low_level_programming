#include "main.h"
/**
 * puts_half -print half of the string
 * @str: parametr str (string)
 * Description: The function prints half of the string
 * Return: IDK
*/
void puts_half(char *str)
{
	int total = 0;
	int limit = 0;

	while (str[limit] != '\0')
	{
		limit++; }
	if (limit % 2 == 0)
		total = limit / 2;
	else
		total = (limit + 1) / 2;
	for (; total < limit; total++)
	{
		_putchar(str[total]); }
	_putchar('\n');
}
