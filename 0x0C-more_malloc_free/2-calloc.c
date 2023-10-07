#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * _calloc - function that prints a string, followed by a new line
 * @nmemb: The string to print
 * @size: The string to print
 *
 * Return: nothing.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	
	if (size == 0 || nmemb == 0)
	{
		return (NULL);
	}
	ptr = (int *)calloc(size, sizeof(int));

	if (!ptr)
	{
		return (NULL);
	}
	return(ptr);
}
