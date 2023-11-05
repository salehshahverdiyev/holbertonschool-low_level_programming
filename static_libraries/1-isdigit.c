#include "main.h"
/**
 * _isdigit - the function finds is digit or not
 * @c: parametr
 * Description: Function finds is digit or not
 * Return: 1 if is digit, 0 if not
*/
int _isdigit(int c)
{
	while (c >= '0' && c <= '9')
	{
		return (1); }
	return (0);
}
