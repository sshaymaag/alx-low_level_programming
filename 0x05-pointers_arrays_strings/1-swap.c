#include <unistd.h>

/**
 * swap_int - updates the value
 * @a: argument
 * @b: argument
 *
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
