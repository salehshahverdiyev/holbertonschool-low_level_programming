#include <stdio.h>
/**
 * main - Entry point
 * Description: print numbers 1 to 100 and Fizzbuzz
 * Return: always 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz "); }
		else if (i % 5 == 0)
		{
			if (i < 100)
				printf("Buzz ");
			else
				printf("Buzz"); }
		else if (i % 3 == 0)
		{
			printf("Fizz "); }
		else
		{
		printf("%d ", i); }
	}
	printf("\n");
	return (0);
}
