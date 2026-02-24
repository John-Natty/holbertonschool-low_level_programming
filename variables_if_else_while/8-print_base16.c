#include <stdio.h>

/**
 * main - prints all numbers of base 16 in lowercase
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;
	char c = 'a';

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	while (c <= 'f')
	{
		putchar(c);
		c++;
	}

	putchar('\n');
	return (0);
}
