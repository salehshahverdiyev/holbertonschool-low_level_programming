#include "main.h"
/**
 * _isalpha - This function checks c is a letter, lowercase or uppercase
 * @c: this is parametr
 * Return: 1 or  0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
