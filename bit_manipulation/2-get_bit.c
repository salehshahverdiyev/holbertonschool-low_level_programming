#include <stdlib.h>
/**
 * get_bit - returns the value of a bit
 * @n: parametr n
 * @index: parametr index
 * Description: The function returns the value of a bit at a given index
 * Return: the value of the bit at index index or -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int a = sizeof(unsigned long int) * 8;

	if (index >= a)
		return (-1);
	n = n >> index & 1;
	return (n);
}
