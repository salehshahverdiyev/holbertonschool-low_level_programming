#include "main.h"
#include <stddef.h>
/**
 * _strchr - locates a character in a string
 * @s: parametr s
 * @c: parametr c
 * Description: The function locates a character in a string and return s or '\0'
 * Return: s or '\0'
*/
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}
