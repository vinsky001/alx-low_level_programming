#include <stdio.h>
/**
 * *main - print all possible different combinations
 * *of two digits
 * *Description: numbers must be separated by ,
 * *followed by a space
 * *the two digits must be different
 * *01 and 10 are considered the same combinations
 * *print only the smallest combination of two digits
 * *numbers should be printed in ascending order
 * *with two digits
 * *only use the putchar function
 * *putchar should be used five times maximum
 * *do not use any variable of type char
 * *all code shoulf be in the main function
 * * Return: 0
 * */

int main(void)
{
		int i, j;

		for (i = 0 ; i <= 9 ; i++)
		{
             		for (j = 1 ; j <= 9 ; j++)
			{
														if (j > i)
           														{
																							putchar(i + '0');
																							putchar(j + '0');
	 																						if (i != 8)
			{
	           																						putchar(',');
														putchar(' ');
		}
										}
												}
						}
	putchar('\n');
	return (0);
}
