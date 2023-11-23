#include <stdio.h>
#include "dog.h"
/**
 * init_dog - initialize a variable
 * @d: parametr d
 * @name: parametr name
 * @age: parametr age
 * @owner: parametr owner
 * Description: The function that initialize a variable of type struct dog
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->owner = owner;
		d->age = age;
	}
}
