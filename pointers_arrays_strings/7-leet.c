#include "main.h"
/**
* leet - encodes a string into 1337
* @str: pointer to the string to be modified
*
* Return: pointer to the modified string
*/

char *leet(char *str)
{
	int i, j;
	char leet[] = "aAeEoOtTlL";
	char num[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = num[j];
				break;
			}
		}
	}

	return (str);
}
