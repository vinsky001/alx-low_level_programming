#include "main.h"
/**
  *print_last_digit - prints last digit of a number
  *@c: takes number input
  *Return: lastDigit
  */

int print_last_digit(int c)
{
	int lastDigit;

	if (c < 0)

		lastDigit = -1 * (c % 10);
	else
		lastDigit = c % 10;

	_putchar(lastDigit + '0');

	return (lastDigit);
}
