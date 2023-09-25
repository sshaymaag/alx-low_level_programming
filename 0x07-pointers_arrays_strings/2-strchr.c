#include "main.h"
#include <stdio.h>
#include <string.h>


/**
 * _strchr - function
 * @s: argument
 * @c: argument
 *
 * Return: char.
 */
char *_strchr(char *s, char c)
{
	int n = 0;
	
	while (*s != '\0')
	{
		if (*s == c)
		{
			break;
		}
		s++;
		n++;
	}
	return (s);
}
