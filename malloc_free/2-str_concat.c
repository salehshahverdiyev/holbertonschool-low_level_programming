#include "main.h"
#include <stdlib.h>
/**
 * _strlen - find size of string
 * @s: parametr s
 * Description: The function finds size of string
 * Return: size
*/
int _strlen(char *s)
{
	int tmps = 0;

	if (s == NULL)
		s = "";
	while (*s != '\0')
	{
		tmps++;
		s++; }
	return (tmps);
}

/**
 * str_concat - concatenates two strings
 * @s1: parametr s1
 * @s2: parametr s2
 * Description: The function concatenates two strings
 * Return: concatenated string or NULL
*/
char *str_concat(char *s1, char *s2)
{
	int i = 0, size = _strlen(s1) + _strlen(s2);
	char *ptr = malloc(sizeof(char) * size + 1);

	if (ptr == NULL)
		return (NULL);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2  = "";
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != '\0')
		{
			ptr[i] = *s1;
			s1++; }
		else
		{
			ptr[i] = *s2;
			s2++; }
		i++;
	}
	return (ptr);
}
