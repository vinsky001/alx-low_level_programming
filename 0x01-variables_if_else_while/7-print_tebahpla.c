#include <stdio.h>

/**
 * *main - print the lowercase alphabet in reverse
 * *followed by a new line
 * *Description: only use the putchar function
 * *all code shoud be in the main function
 * *only use the putchar function twice
 * *Return: 0
 * */

int main(void)
{
		char a;

		for (a = 'z' ; a >= 'a' ; a--)
	{
								putchar(a);
        }
		putchar('\n');
		return (0);
}
