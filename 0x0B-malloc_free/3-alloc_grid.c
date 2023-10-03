#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function that prints a string, followed by a new line
 * @width: The string to print
 * @height: The string to print
 *
 * Return: nothing.
 */
int **alloc_grid(int width, int height)
{
	int **s;
	unsigned long int i, j;

	if (height <= 0 || width <= 0)
	return (NULL);
	s = malloc(sizeof(int) * sizeof(height));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(height) ; i++)
	{
		s[i] = malloc(sizeof(int) * sizeof(width));
		for (j = 0; j < sizeof(width) ; j++)
		{
			s[i][j] = 0;
		}
	}
		return (s);
}
