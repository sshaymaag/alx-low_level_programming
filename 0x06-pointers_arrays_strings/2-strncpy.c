#include <unistd.h>
#include <string.h>

/**
 * _strncpy - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *s = NULL;

	s = dest;
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (s);
}
