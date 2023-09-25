#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _memcpy - function
 * @dest: argument
 * @src: argument
 * @n: argument
 *
 * Return: char.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *s = dest;

	while (n-- > 0)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
