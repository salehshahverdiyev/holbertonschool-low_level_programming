#include "main.h"
/**
 * is_prime_number - if integer is a prime,return 1,else return 0
 * @n: parametr n
 * Description: The function checks numbers and returns 1 or 0
 * Return: 1 or 0
*/
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n % 2 == 0 || n % 5 == 0)
		return (0);
	return (1);
}
