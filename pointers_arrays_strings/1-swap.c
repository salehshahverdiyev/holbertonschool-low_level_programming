#include "main.h"
/**
 * swap_int - swap place of two values
 * @a: parametr a
 * @b: parametr b
 * Description:the function swaps place of two values
 * Return:IDKi
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
