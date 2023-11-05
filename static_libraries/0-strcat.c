#include "main.h"
#include <stdio.h>
/**
 * _strcat - adds two strings
 * @dest: parametr dest
 * @src: parametr src
 * Description: The function adds two strings each others
 * Return: dest
*/
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
