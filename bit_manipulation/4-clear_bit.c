#include <limits.h>
#include "main.h"
/**
 * clear_bit -  sets the value of a bit to 0
 * @n: parametr n
 * @index: parametr index
 * Return: 1 if it worked, or -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a = ULONG_MAX - (1 << index);
	unsigned int size = 8 * sizeof(unsigned int);

	if (size > index)
	{
		*n = *n & a;
		return (1);
	}
	return (-1);
}
