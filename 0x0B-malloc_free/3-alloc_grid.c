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
	int i, j;

	if (height <= 0 || width <= 0)
	return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] = malloc(sizeof(int *) * width);

		if (s[i] == NULL)
		{
			for (; i >= 0; i--)
				free(s[i]);

			free(s);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width ; j++)
		{
			s[i][j] = 0;
		}
	}
		return (s);
}
