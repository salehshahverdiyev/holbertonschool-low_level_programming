#include <stdio.h>
/**
 * main - entry point
 *
 * Return: always 0
 */
int main(void)
{
	int a;
	char lt;

	for (a = '0'; a <= '9'; a++)
		putchar(a);
	for (lt = 'a'; lt <= 'f'; lt++)
		putchar(lt);

	putchar('\n');
	return (0);
}
