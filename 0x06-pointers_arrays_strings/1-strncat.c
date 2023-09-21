#include <unistd.h>
#include <string.h>

/**
 * _strncat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 * @n: The character to print
 * Return: On success 1.
 */
char *_strncat(char *dest, char *src, int n)
{
	int len;
	char *s = dest;

	len = strlen(dest);
	while (len--)
	{
		dest++;
	}
	while (n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
