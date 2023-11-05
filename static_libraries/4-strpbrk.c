#include "main.h"
/**
 * _strpbrk - searching
 * @s: parametr s
 * @accept: parametr accept
 * Description: Searches a string for any of a set of bytes
 * Return: s or '\0'
*/
char *_strpbrk(char *s, char *accept)
{
	int j = 0;

	while (*s != '\0')
	{
		while (accept[j] != '\0')
		{
			if (*s == accept[j])
				return (s);
			j++; }
		j = 0;
		s++; }
	return ('\0');
}
