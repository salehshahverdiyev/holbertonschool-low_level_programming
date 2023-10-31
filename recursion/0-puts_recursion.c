#include "main.h"
/**
 * _puts_recursion -  prints a string
 * @s: parametr s
 * Description: The function prints a string in new line
 * Return: IDK
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
