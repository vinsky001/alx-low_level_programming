#include <stdio.h>

/**
 * *main - print all single digit numbers of base 10
 * *starting from 0 followed by a new line
 * *do not use any variable of type char
 * *only use the putchar function
 * *only use putchar twice
 * *all code should be in the main function
 * *Return: 0
 * */

int main(void)
{
		int n;

		for (n = '0' ; n <= '9' ; n++)
	{
								putchar(n);
}
		putchar('\n');
		return (0);
}
