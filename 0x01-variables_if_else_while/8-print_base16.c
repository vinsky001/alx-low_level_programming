#include <stdio.h>

/**
 * *main - print all the numbers of base 16
 * *in lowercase
 * *followed by a new line
 * *Description: only use the putchar function
 * *all code shoud be in the main function
 * *only use the putchar thrice
 * *Return: 0
 * */

int main(void)
{
		char n;

		for (n = '0' ; n <= '9' ; n++)
	{
					putchar(n);
}
		for (n = 'a' ; n <= 'f' ; n++)
	{
					putchar(n);
}
		putchar('\n');
		return (0);
}
