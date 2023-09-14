#include "main.h"

/**
 * _isdigit - is upper
 *
 * @c: character to be checked
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
