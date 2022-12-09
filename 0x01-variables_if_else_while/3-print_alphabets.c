#include <stdio.h>

/**
 * *main - print the alphabets
 * *
 * *Description: print the alphabet in lowercase,
 * *and then iin uppercase, followwed by a new line
 * *only use the putchar function (3 times maximum)
 * *Return: 0
 * */

int main(void)
{
		char ch;

		for (ch = 'a' ; ch <= 'z' ; ch++)
        	{
	              putchar(ch);
		}
		for (ch = 'A' ; ch <= 'Z' ; ch++)
		{
		putchar(ch);
		}
		      putchar('\n');
		return (0);
}
