#include <unistd.h>

/**
 * _strlen - length
 * @s: argument
 *Return: len
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
