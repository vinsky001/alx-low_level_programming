#include <stdio.h>

/**
 * *main - write a program that prints the alphabet in lowercase.
 * *followed by a newline
 * *
 * *Description: print all the letters except q and e
 * *only use the putchar function.
 * *use the putchar function only twice in the code.
 * *Return: 0
 * */

int main(void)
{
	char ch;

	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
	if (ch != 'e' && ch != 'q')
  
                       {											putchar(ch);
                       }
	}
	putchar('\n');
	return (0);
}
