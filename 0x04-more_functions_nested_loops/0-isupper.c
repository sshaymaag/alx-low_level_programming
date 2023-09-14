#include "main.h"

/**
 * _isupper - is upper
 *
 * @c: character to be checked
 *
 * Return: 1 if n > 0;
 * 0 if n = 0;
 * -1 if n < 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
