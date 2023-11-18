#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array
 * @min: parametr min
 * @max: parametr max
 * Description: The function that creates an array of integers
 * Return: the pointer to the newly created array or NULL
*/
int *array_range(int min, int max)
{
	int *ptr, i, sum = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sum * sizeof(int));

	if (ptr)
	{
		for (i = 0; min <= max; min++)
		{
			ptr[i] = min;
			i++; }
		return (ptr);
	}

	free(ptr);
	return (NULL);
}
