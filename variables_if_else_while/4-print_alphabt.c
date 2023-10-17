#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char lt;

	for (lt = 'a'; lt <= 'z'; lt++)
		if (lt != 'q' && lt != 'e')
			putchar(lt);
	putchar('\n');
	return (0);
}
