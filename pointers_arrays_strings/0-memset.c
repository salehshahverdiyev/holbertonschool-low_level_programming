#include "main.h"
/**
 * _memset - fills memory
 * @s: parametr s
 * @b: parametr b
 * @n: parametr n
 * Description: The function fills memory with a constant byte
 * Return: s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
