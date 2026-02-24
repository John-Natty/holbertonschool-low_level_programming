#include <stdio.h>
/**
 * main - prints all possible combiations of two digits
 *
 * Return: Always 0
 */
int main(void)
{
	int a = 0;
	int b;

	while (a <= 8)
	{
		b = a + 1;
		while (b <= 9)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 || b != 9)
			{
				putchar(',');
				putchar(' ');
			}

			b++;
		}
		a++;
	}

	putchar('\n');

	return (0);
}
