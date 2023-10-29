#include "main.h"
#include <stdio.h>
/**
 * _strncat - adds two strings
 * @dest: parametr dest
 * @src: parametr src
 * @n: parametr n
 * Description: The function adds two string and return it
 * Return: dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
		a++;
	while (src[b] != '\0' && b < n)
	{
		dest[a] = src[b];
		b++;
		a++;
	}
	return (dest);
}
