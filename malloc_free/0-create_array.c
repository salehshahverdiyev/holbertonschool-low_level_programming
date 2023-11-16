#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars
 * @size: parametr size
 * @c: parametr c
 * Description: Creates an array of chars,initializes it with a specific char
 * Return: a pointer to the array, NULL or 0
*/
char *create_array(unsigned int size, char c)
{
	char *ptr = malloc(sizeof(c) * size);
	unsigned int i;

	if (ptr == NULL || size == 0)
		return (NULL);
	for (i = 0 ; i < size; i++)
		ptr[i] = c;
	return (ptr);
}
