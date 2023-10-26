#include <stdio.h>
#include <string.h>
/**
 * _strlen - length of string
 * @s: parametr s
 * Description: the function calculates length of the string
 * Return: IDK
*/
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
		a++;

	return (a);
}
