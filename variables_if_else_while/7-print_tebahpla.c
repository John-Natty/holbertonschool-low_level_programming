#include <stdio.h>
/**
 * main - prints the alphabet in lowercase, alphabet in reverse,
 * followed by a new line
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'z';

	while (alphabet >= 'a')
	{
		putchar(alphabet);
		alphabet--;
	}
	putchar('\n');

	return (0);
}
