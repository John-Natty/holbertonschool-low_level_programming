#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 * followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		if (alphabet != 'e' && alphabet != 'q')
		{
			putchar(alphabet);
		}
		alphabet++;
	}

	putchar('\n');

	return (0);
}
