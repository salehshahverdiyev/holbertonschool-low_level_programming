#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: parametr name
 * @age: parametr age
 * @owner: parametr owner
 * Return: mydog or NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *mydog = malloc(sizeof(dog_t));

	mydog->name = name;
	mydog->age = age;
	mydog->owner = owner;
	return (mydog);
}
