#include <stdio.h>

/**
 * *main - print the alphabet in lowercase, followed by a new line.
 * *
 * *Description: only use the putchar function twice
 * *code should be in the main function
 * *Return: 0
 * */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
                	putchar(ch);
	}
	putchar('\n');
	return (0);
}
