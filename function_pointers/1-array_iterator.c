#include <stdio.h>
#include <string.h>
#include <stddef.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * array_iterator - array iterator
 * @array: parametr array
 * @size: parametr size
 * @action: parametr action
 * Description: Executes a function given as a parameter on each element of an array
 * Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (action == NULL || size == 0 || array == NULL)
		return;
	for (i = 0; i < size; i++)
		(*action)(*(array + (int)i));
}
