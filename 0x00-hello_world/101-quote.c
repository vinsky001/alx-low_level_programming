#include <stdio.h>
#include <unistd.h>
/**
 * prints a string
 * followed by a new line
 * Return: 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);

	return (1);
}
