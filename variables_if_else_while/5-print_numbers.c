#include <stdio.h>

/**
 * main - prints single digit numbers of base 10
 * starting from 0, followed by a new line
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 0;

	while (n <= 9)
	{
		putchar(n + '0');
		n++;
	}

	putchar('\n');

	return (0);
}
