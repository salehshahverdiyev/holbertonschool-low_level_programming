#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	char lt;

	for (lt = 'z'; lt >= 'a'; lt--)
		putchar(lt);

	putchar('\n');
	return (0);
}
