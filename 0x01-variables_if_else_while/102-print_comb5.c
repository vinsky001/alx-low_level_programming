#include <stdio.h>

/**
 * *main - print all possible combinations
 * *combinations of two-digit numbers
 * *Description: the numbers should range from 0-99
 * *the two numbers should be separated by a space
 * *all numbers should be printed with two digits i.e 1 is 01
 * *the combo must be separated by comma, folowed by space
 * *the combo should be printed in ascending order
 * *00 01 and 01 00 are the same
 * *only use the putchar function
 * *putchar function should be used 8-times maximum
 * *no any variable of type char
 * *all code in the main function
 * *Return: 0
 * */

int main(void)
{
		int x, y;

			for (x = 0 ; x < 100 ; x++)
					{
								for (y = 1 ; y < 100 ; y++)
											{
															if (y > x)
																			{
																								putchar((x / 10) + '0');
																												putchar((x % 10) + '0');
																																putchar(' ');
																																				putchar((y / 10) + '0');
																																								putchar((y % 10) + '0');
																																												if (x != 98)
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
