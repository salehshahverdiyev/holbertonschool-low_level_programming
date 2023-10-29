#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - sum of the two diagonals of a square matrix of integers
 * @a: parametr a
 * @size: parametr size
 * Description: Prints sum of the two diagonals of a square matrix of integers
 * Return: IDK
*/
void print_diagsums(int *a, int size)
{
	int i, j = 0, sumleft = 0, sumright = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		sumleft += a[i];
		j += size - 1;
		sumright += a[j];
	}
	printf("%d, %d\n", sumleft, sumright);
}
