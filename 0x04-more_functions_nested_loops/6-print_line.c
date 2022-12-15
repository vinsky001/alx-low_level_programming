#include <stdio.h>
#include "main.h"

/**
  *print_line - draws a straight line in the terminal
  *only use _putchar function to print
  *@n: number of times _ should be printed
  *line should end with a \n
  *if n is 0 or less, function should only print \n
  *Return: success
  */


void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
