#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - check the code
 * @n: parameters
 * @separator: parameters
 * Return: Always 0.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (separator == NULL)
		separator = "";
	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		if (i != 0)
			printf("%c ", *separator);
		printf("%d", va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
