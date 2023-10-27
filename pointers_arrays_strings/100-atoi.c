#include "main.h"
#include <stdio.h>
/**
 * _atoi - convert string to integer
 * @s: parametr str (string)
 * Description: The function converst string to integer
 * Return: IDK
*/
int _atoi(char *s)
{
	int i = 0; 
	int sign = 1;
	unsigned int num = 0;


	if (*s == '\0')
		return (0);

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			sign *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = (num * 10) + (s[i] - '0');
			if (s[i + 1] < '0' || s[i + 1] > '9')
				return (sign * num); }
		i++; }
	return (sign * num);
}
