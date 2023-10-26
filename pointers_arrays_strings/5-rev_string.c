#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverse string
 * @s: parametr s
 * Description:The funtion prints a string in reverse
 * Return: IDK
*/
void rev_string(char *s)
{
	int a = 0;
	char *b;

	while (*s != '\0')
	{
		*b = *s;
		s++;
		b++;
		a++;
	}
	s--;
	for (; a > 0; a--)
	{

		*s = *(b - a);
		s--;
	}
}
