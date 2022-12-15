#include <stdio.h>
#include "main.h"

/**
  *print_square - prints a square
  *@size: size of the square
  *only use _putchar
  *if size is 0 or less, the function should only print a new line
  *use the # character to print the square
  *Return: success
  */

void print_square(int size)
{
	int row;
	int column;

	if (size > 0)
	{
		for (row = 0; row < size; row++)
		{
			for (column = 0; column < size; column++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

