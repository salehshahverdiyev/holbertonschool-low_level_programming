#include <stdio.h>
#ifndef __FILE__
#define __FILE__
#endif
/**
 * main - prints the name of the file
 * Description: The function prints the name of the file it was compiled from
 * Return: 0
*/
int main(void)
{
	printf(__FILE__ "\n");
	return (0);
}
