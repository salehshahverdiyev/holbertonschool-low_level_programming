#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: parametr haystack
 * @needle: parametr needle
 * Return: haystack or '\0'
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int c = 1;

	char *ptr;

	if (*needle == '\0')
		return (haystack);
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			ptr = haystack;
			while (needle[i] != '\0')
			{
				if (*ptr == needle[i])
					c = 1;
				else
					c = 0;
				i++;
				ptr++;
			}
			i = 0;
			if (c == 1)
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
