#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main -  adds positive numbers
 * @argc: parametr argc
 * @argv: parametr argv
 * Description: The function adds positive numbers
 * Return: 0 or -1
*/
int main(int argc, char *argv[])
{
	int i;
	int result = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0); }

	for (i = 1; i < argc; i++)
	{
		if ((argv[i][1] < '0' || argv[i][1] > '9') && argv[i][1] != '\0')
		{
			printf("Error\n");
			return (1); }
	}
	for (i = 1; i < argc; i++)
		result += atoi(argv[i]);
	printf("%d\n", result);
	return (0);
}
