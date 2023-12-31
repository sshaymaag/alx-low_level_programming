#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - check the code
 * @n: parameters
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, s = 0;
	va_list ptr;

	if (n == 0)
	{
		return (0);
	}
	va_start(ptr, n);

	for (i = 0; i < n; i++)
		s += va_arg(ptr, int);
	va_end(ptr);

	return (s);
}
