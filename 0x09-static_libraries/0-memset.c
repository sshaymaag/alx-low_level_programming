#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _memset - function
 * @s: argument
 * @b: argument
 * @n: argument
 *
 * Return: char.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n-- > 0)
	{
		*p++ = b;
	}
	return (s);
}
