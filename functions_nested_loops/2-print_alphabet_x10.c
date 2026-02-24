#include "main.h"
/**
 * print_alphabet_x10 - prints the alphabet in lowercase,
 * followed by a new line
 * Return: Nothing
 */
void print_alphabet_x10(void)
{
	int x;

	x = 0;

	while (x < 10)
	{
		char alphabet = 'a';

		while (alphabet <= 'z')
		{
			_putchar(alphabet);
			alphabet++;
		}
		_putchar('\n');
		x++;
	}
}
