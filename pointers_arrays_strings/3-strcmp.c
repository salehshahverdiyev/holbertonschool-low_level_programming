#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: parametr s1
 * @s2: parametr s2
 * Description:The function compares two strings and return it
 * Return: 0
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;

	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}

	if (j < i)
		return (-13);
	if (j > i)
		return (13);
	return (0);
}
