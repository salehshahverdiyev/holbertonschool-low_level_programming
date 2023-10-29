#include "main.h"
/**
 * leet - encodes string to 1337
 * @str: parametr str
 * Description: The function encodes string to 1337
 * Return: str
 */
char *leet(char *str)
{
	int i;
	int j;

	char chars[] =  "aAeEoOtTlL";
	char encoded[] =  "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; chars[j] != '\0'; j++)
		{
			if (str[i] == chars[j])
			{
				str[i] = encoded[j];
			}
		}

	}
	return (str);
}

