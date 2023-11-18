#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memmory
 * @nmemb: parametr nmemb
 * @size: parametr size
 * Description: The _calloc function allocates memory for an array
 * Return: pointer to the allocated memory or NULL
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i = 0, total = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;
	ptr = malloc(total);

	if (ptr)
	{
		for (i = 0; i < total; i++)
			ptr[i] = 0;

		return (ptr); }

	free(ptr);
	return (NULL);
}
