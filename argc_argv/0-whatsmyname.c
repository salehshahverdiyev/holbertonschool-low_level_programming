#include "main.h"
#include <stdio.h>
/**
 * main - prints name
 * @argc: parametr argc
 * @argv: parametr argv
 * Description: The function prints its name, followed by a new line
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
