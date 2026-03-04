#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to be searched
 * @accept: pointer to the string containing the characters to match
 * Return: the number of bytes in the initial segment of s which consist
 * only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;
	int found;

	while (*s)
	{
		a = accept;
		found = 0;
		while (*a)
		{
			if (*s == *a)
			{
				count++;
				found = 1;
				break;
			}
			a++;
		}
		if (found == 0)
		{
			break;
		}
		s++;
	}

	return (count);
}
