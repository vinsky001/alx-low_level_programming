#include <stdio.h>

/**
 * *main - print all possible combinations
 * *combinations of single-digit numbers
 * *Description: numbers should be separated by ,
 * *followed by a space
 * *numbers should be printed in ascending order
 * *only use the putchar function
 * *code should be in the main function
 * *only use putchar four times maximum
 * *do not use any variable of type char
 * *Return: 0
 * */

int main(void)
{
		int c;

		for (c = '0' ; c <= '9' ; c++)
{
			putchar(c);
			if (c != '9')
{
	putchar(',');
																				putchar(' ');
       																				}
}
		putchar('\n');
		return (0);
}
