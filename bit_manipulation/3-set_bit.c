#include "main.h"
/**
 * set_bit -  sets the value of a bit to 1
 * @n: parametr n
 * @index: parametr index
 * Description: The function sets the value of a bit to 1 at a given index
 * Return: 1 if it worked, or -1 if an error occurred
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;
	unsigned int size = 8 * sizeof(unsigned int);

	if (size > index)
	{
		a = *n;
		*n = *n >> index;
		*n = *n | 1;
		*n = *n << index;
		*n = *n | a;
		return (1);
	}
	return (-1);
}
