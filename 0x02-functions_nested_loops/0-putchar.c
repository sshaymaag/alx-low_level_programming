#include <stdio.h>
/**
 * main - alphabets
 *
 * Return: 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i;

	i = 0;
	while (text[i] != '\0')
	{
		putchar(text[i]);
		i++;
	}
	putchar ('\n');
	return (0);
}
