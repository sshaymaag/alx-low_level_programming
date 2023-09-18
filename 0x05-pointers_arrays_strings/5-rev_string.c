#include <unistd.h>
#include "main.h"
#include <string.h>
#include <stdio.h>



/**
 * rev_string - updates the value
 * @s: argument
 *
 */
void rev_string(char *s)
{
	int len, i, j;
	char c;

	len = strlen(s);
	j = len / 2;
	for (i = 0; i < j ; i++)
	{
		c = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = c;
	}
}
