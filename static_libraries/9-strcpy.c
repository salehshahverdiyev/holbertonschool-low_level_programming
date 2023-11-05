#include "main.h"
/**
 * _strcpy - copy string
 * @dest: array dest
 * @src: parametr src (string)
 * Description: Creating copy of string in array,and returning it
 * Return: copied array
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;
	for (j = 0; j <= i; j++)
		*(dest + j) = src[j];

	dest[i + 1] += '\0';
	return (dest);
}
