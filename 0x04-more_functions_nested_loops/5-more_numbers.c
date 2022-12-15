#include <stdio.h>
#include "main.h"

/**
  *more_numbers - prints 10 times the numbers
  *from 0 to 14, followed by a new line
  *0nly use _putchar thrice
  *Return: success
  */

void more_numbers(void)
{
	int i, ch;

	for (i = 0; i < 10; i++)
	{
		for (ch = 0; ch < 15; ch++)
		{
			if (ch >= 10)
			_putchar((ch / 10) + 48);
			_putchar((ch % 10) + 48);
		}
		_putchar('\n');
	}
}
