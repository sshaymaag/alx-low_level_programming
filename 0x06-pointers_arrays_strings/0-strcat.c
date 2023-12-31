#include <unistd.h>
#include <string.h>

/**
 * _strcat - writes the character c to stdout
 * @dest: The character to print
 * @src: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_strcat(char *dest, char *src)
{
	int len;
	char *s = dest;

	len = strlen(dest);
	while (len--)
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (s);
}
