#include "main.h"
/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 * @n: number to check for primality
 * Return: 1 if n is a prime number, otherwise returns 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	if (n % 2 == 0)
		return (0);

	return (_is_prime_helper(n, 3));
}
/**
 * _is_prime_helper - helper function to check for primality
 * @n: number to check for primality
 * @i: current divisor to check
 * Return: 1 if n is a prime number, otherwise returns 0
 */
int _is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_is_prime_helper(n, i + 2));
}
