#include "main.h"
/**
 * _memcpy -  copies memory area
 * @src: parametr src
 * @dest: parametr dest
 * @n: parametr n
 * Description: The function copies memory area
 * Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
