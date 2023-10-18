#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a;

	for (a = '0'; a <= '9' ; a++)
	{
		putchar(a);
		if (a == '9')
			break;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
