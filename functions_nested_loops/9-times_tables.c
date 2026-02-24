#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 * Description: This function uses nested loops to generate and print the
 * 9 times table. The outer loop iterates through the numbers 0 to 9, and
 * the inner loop calculates the product of the outer loop variable and
 * the inner loop variable (0 to 9). The results are printed in a formatted
 * manner, with appropriate spacing and commas to separate the values. Each
 * row of the table corresponds to the multiples of the outer loop variable.
 */
void times_table(void)
{
	int i, j, product;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			product = i * j;
			if (j > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if (product > 9)
			{
				_putchar(product / 10 + '0');
			}
			else
			{
				if (j > 0)
				{
					_putchar(' ');
				}
			}
			_putchar(product % 10 + '0');
		}
		_putchar('\n');
	}
}
