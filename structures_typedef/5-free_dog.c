#include "dog.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * free_dog - frees dog
 * @d: parametr dog
 * Description: The function frees dogs.
 * Return: void
*/
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
