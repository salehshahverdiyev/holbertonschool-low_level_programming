#include <stdio.h>
/**
 * print_array - prints elements of array from 0 to n
 * @a: array a
 * @n: parametr n (count of elements)
 * Description:The function prints elements from 0 to n
 * Return: IDK
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", a[i]);
		else
			printf("%d, ", a[i]);
	}
	printf("\n");
}
