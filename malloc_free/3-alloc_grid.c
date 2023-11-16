#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer
 * @width: parametr width
 * @height: parametr height
 * Description: Returns a pointer to a 2 dimensional array of integers
 * Return: pointer or NULL
*/
int **alloc_grid(int width, int height)
{
	int w, h, **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL); }

	for (h = 0; h < height; h++)
	{
		ptr[h] = malloc(sizeof(int) * width);
		if (ptr[h] == NULL)
		{
			while (h >= 0)
			{
				free(ptr[h--]);
			}
			free(ptr);
			return (NULL); }

		for (w = 0; w < width; w++)
		{
			*(ptr[h] + w) = 0; }
	}
	return (ptr);
}
