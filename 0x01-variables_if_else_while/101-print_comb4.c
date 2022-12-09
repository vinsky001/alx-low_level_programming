#include <stdio.h>

/**
 * *main - print all possible different combinations
 * *combinations of three digits
 * *Description: numbers must be separated by ,
 * *followed by a space
 * *the three digits must be different
 * *012, 120, 102, 021, 201, 210 are considered the same
 * *print only the smallest combination of three digits
 * *numbers should be printed in ascending order
 * *only use the putchar function
 * *maximum use of putchar function is 6 times
 * *no variable of type char
 * *all code in the main function
 * *Return: 0
 * */

int main(void)
{
		int j, k, l;
		for (j = 0 ; j <= 9 ; j++)
		{
			for (k = 1 ; k <= 9 ; k++)
            		{
				for (l = 2 ; l <= 9 ; l++)
	                	{
			         																				if (l > k && k > j)
				
				       {
																								putchar(j + '0');
				       putchar(k + '0');
				       putchar(l + '0');
				       if (j != 7)
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
