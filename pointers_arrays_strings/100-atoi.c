#include "main.h"
/**
* _atoi - convert a string to an integer
* @s: string to convert
*
* Return: the integer converted from the string
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;

	while (*s && (*s < '0' || *s > '9'))
	{
		if (*s == '-')
			sign *= -1;
		s++;
	}

	while (*s && (*s >= '0' && *s <= '9'))
	{
		result = result * 10 + (*s - '0');
		s++;
	}

	return (sign * (int)result);
}
