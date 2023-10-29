#include "main.h"
/**
 * reverse_array - reverse array
 * @a: parametr a
 * @n: parametr n
 * Description: The function prints array,in reverse
 * Return: IDK
*/
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < (n / 2); i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
