#include "main.h"
/**
 * flip_bits - returns the number of bits
 * @n: parametr n
 * @m: parametr m
 * Description: The function returns the number of bits you would need 
 * to flip to get from one number to another
 * Return: IDK
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int counter = 0;

	n = n ^ m;
	while (n)
	{
		counter += n & 1;
		n = n >> 1;
	}
	return (counter);
}
