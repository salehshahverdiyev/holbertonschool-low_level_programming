#include "main.h"
/**
 * _strlen_recursion - the length of a string
 * @s: parametr s
 * The function returns the lenght of the string
 * Return: i
*/
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*s != '\0')
	{
		i = _strlen_recursion(s + 1);
		return (i + 1);
	}
	return (i);
}
