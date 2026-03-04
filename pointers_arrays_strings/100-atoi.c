#include "main.h"
/**
* _atoi - convert a string to an integer
* @s: string to convert
*
* Return: the integer converted from the string
*/

int _atoi(char *s)
{
	int i = 0;
	int sign = 1;
	int result = 0;
	int started = 0;

	while (s[i] != '\0')
	{
		if (!started)
		{
			if (s[i] == '-')
				sign *= -1;
			else if (s[i] >= '0' && s[i] <= '9')
				started = 1;
		}

		if (started)
		{
			if (s[i] >= '0' && s[i] <= '9')
				result = result * 10 + (s[i] - '0');
			else
				break;
		}

		i++;
	}

	return (sign * result);
}
