#include <stdio.h>
void convert_binary(unsigned long int n);
/**
 * print_binary - prints the binary representation
 * @n: parametr n
 * Description: The function prints the binary representation of a number
 * Return: IDK
*/
void print_binary(unsigned long int n)
{
	if (!n)
	{
		putchar(48);
	}
	convert_binary(n);
}
/**
 * convert_binary - help for print_binary
 * @n: parametr n
 * Description: converts numbers
 * Return: IDK
 */
void convert_binary(unsigned long int n)
{
	if (!n)
	{
		return;
	}
	convert_binary(n >> 1);
	putchar((n & 1) + 48);
}
