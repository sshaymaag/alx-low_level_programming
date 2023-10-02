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

	len = sizeof(dest) - 1;
	while (len--)
	{
		dest++;
	}
	while (n--)
	{
		if (*src == '\0')
		{
			break;
		}
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
