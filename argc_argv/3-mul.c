#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: parametr argc
 * @argv: parametr argv
 * Description: The function multiplies two numbers
 * Return: 0
*/
int main(int argc, char *argv[])
{
	int num1 = 0;
	int num2 = 0;
	int result = 0;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	printf("%d\n", result);
	return (0);
}
