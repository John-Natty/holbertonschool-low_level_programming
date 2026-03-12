#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
* main - performs simple operations
* @argc: number of arguments
* @argv: array of arguments
* Return: 0 on success, 98 on incorrect number of arguments, 99 on
* invalid operator, 100 if division or modulo by 0
*/
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*f)(int, int);

	if (argc != 4)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	f = get_op_func(argv[2]);

	if (f == NULL)
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(99);
	}

	if ((argv[2][0] == '/' && b == 0) || (argv[2][0] == '%' && b == 0))
	{
		_putchar('E');
		_putchar('r');
		_putchar('r');
		_putchar('o');
		_putchar('r');
		_putchar('\n');
		exit(100);
	}

	result = f(a, b);
	printf("%d\n", result);

	return (0);
}
