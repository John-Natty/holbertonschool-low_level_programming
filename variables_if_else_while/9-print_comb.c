#include <stdio.h>
/**
 * main - prints all possible combiations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int b = 0;

	while (b <= 9)
	{
		putchar(b + '0');

		if (b != 9)
		{
			putchar(',');
			putchar(' ');
		}

		b++;
	}

	putchar('\n');

	return (0);
}
