#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer
 * @str: parametr str
 * Description: Function returns a pointer to a newly allocated space in memory
 * Return: ptr or NULL
*/
char *_strdup(char *str)
{
	char *ptr;
	int i, size = 0;

	if (str == NULL)
		return (NULL);

	while (str[size] != '\0')
		size++;

	ptr = malloc(sizeof(char) * size + 1);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	return (ptr);
}
