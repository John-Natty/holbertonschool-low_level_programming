#include "main.h"
/**
* puts_half - prints half of a string, followed by a new line
* @str: string to print
* Return: void
*/

void puts_half(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
		;
	j = (i - 1) / 2 + 1;
	for (; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
