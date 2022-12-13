#include "main.h"
/**
  *print_alphabet - function to print the alphabet
  *main - write a function
  *
  *Description: function should print the alphabet
  *in lowercase, followed by a new line
  *only use _putchar twice
  *
  *Return: 0
  */

void print_alphabet(void)
{
	char b;

	for (b = 'a' ; b <= 'z' ; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
