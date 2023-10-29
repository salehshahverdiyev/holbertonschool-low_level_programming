#include "main.h"
/**
 * cap_string - capitalizes all strings
 * @a: parametr a
 * Description: The function capitalizes all strings in the word
 * Return: a
*/
char *cap_string(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 'a' && a[i] <= 'z')
		{
			if (a[i - 1] == ' ' || a[i - 1] == '\t')
				a[i] = a[i] - 32;
			else if (a[i - 1] == '\n' || a[i - 1] == ',')
				a[i] = a[i] - 32;
			else if (a[i - 1] == ';' || a[i - 1] == '.')
				a[i] = a[i] - 32;
			else if	(a[i - 1] == '!' || a[i - 1] == '?')
				a[i] = a[i] - 32;
			else if (a[i - 1] == '(' || a[i - 1] == ')')
				a[i] = a[i] - 32;
			else if (a[i - 1] == '{' || a[i - 1] == '}')
				a[i] = a[i] - 32;
			else if (a[i - 1] == '"' || a[i - 1] == '\0')
				a[i] = a[i] - 32;
		}
	}
	return (a);
}
