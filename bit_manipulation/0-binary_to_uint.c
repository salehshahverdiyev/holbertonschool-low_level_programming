#include <stdio.h>
#include <string.h>
/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: parametr b
 * Description: The function converts a binary number to an unsigned int
 * Return: the converted number, or 0 if
 * there is one or more chars in the string b that is not 0 or 1
 * b is NULL
*/
unsigned int binary_to_uint(const char *b)
{
	int len, dec = 1;
	unsigned int res = 0;

	if (!b)
		return (0);

	len = (int)strlen(b) - 1;
	while (len >= 0)
	{
		if (!(b[len] == '1' || b[len] == '0'))
			return (0);
		res += (unsigned int)((b[len] - 48) * dec);
		dec *= 2;
		len--;
	}
	return (res);
}
