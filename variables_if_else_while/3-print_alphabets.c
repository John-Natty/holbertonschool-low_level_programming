#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, then uppercase
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		putchar(alphabet);
		alphabet++;
	}

	alphabet = 'A';

	while (alphabet <= 'Z')
	{
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');

	return (0);
}
