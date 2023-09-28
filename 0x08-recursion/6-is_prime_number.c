#include <stdio.h>
int isPrime(int n, int i);

/**
 * is_prime_number -  prime number
 * @n: argument
 *
 * Return: 1 or 0.
 */
int is_prime_number(int n)
{
	if (isPrime(n, n - 1))
	{
		return (1);
	}
	return (0);
}

/**
 * isPrime -  prime number
 * @n: argument
 * @i: argument
 * Return: 1 or 0.
 */
int isPrime(int n, int i)
{
	if (n <= 1)
	{
	return (0);
	}

	if (i == 1)
	{
	return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (isPrime(n, i - 1));
}
