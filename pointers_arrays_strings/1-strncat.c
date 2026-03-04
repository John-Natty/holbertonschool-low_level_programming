#include "main.h"
/**
* _strncat - concatenates two strings
* @dest: string to be concatenated upon
* @src: string to concatenate to dest
* @n: number of bytes to concatenate
* Return: pointer to the resulting string dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0' && n > 0)
	{
		dest[i] = src[j];
		i++;
		j++;
		n--;
	}
	dest[i] = '\0';
	return (dest);
}
