#include<unistd.h>
/**
 * main - print
 *
 * Return: 1
 */
int main(void)
{
	const char message[] =

		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t written = write(2, message, sizeof(message) - 1);
	return (1);
}

