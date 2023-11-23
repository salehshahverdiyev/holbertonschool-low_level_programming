#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - struct
 * @name: parametr name
 * @owner: parametr owner
 * @age: parametr age
*/
struct dog
{
	char *name;
	char *owner;
	float age;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
