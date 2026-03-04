#include "main.h"

/**
* cap_string - capitalizes all words of a string
* @str: pointer to the string to be modified
*
* Return: pointer to the modified string
*/
char *cap_string(char *str)
{
	int i, j;
	char sep[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - ('a' - 'A');

		for (j = 0; sep[j] != '\0'; j++)
		{
			if (i > 0 && str[i - 1] == sep[j] &&
			    str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - ('a' - 'A');
		}
	}

	return (str);
}
