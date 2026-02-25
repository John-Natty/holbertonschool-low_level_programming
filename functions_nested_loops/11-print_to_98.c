#include "main.h"
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: starting number
 * Return: void
 * Description: This function takes an integer n as input and prints all
 * natural numbers from n to 98, inclusive. If n is less than or equal
 * to 98, it prints numbers in ascending order. If n is greater than 98,
 * it prints numbers in descending order. Each number is followed by a
 * comma and a space, except for the last number (98) which is followed
 * by a newline character.
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
	}
	printf("98\n");
}
