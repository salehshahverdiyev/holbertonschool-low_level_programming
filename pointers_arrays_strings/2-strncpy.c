#include "main.h"
/**
 * _strncpy - copies strings
 * @dest: parametr dest
 * @src: parametr dest
 * @n: parametr n
 * Description: The function copies strings and return them
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
