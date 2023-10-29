#include "main.h"
/**
 * string_toupper - prints strings in uppercase
 * @a: string
 * Description: The function prints strings in uppercase and return it
 * Return: parametr a
*/
char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			a[i] = a[i] - 32;
		}
	}
	return (a);
}
