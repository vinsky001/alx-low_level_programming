#include <stdio.h>

/**
 *print_buffer - prints a buffer
 *@b: the character of the buffer
 *@size: the number of bytes to print from the character buffer
 *Return: void
 */


void print_buffer(char *b, int size)
{
	int idx, col;

	for (idx = 0; idx < size; idx += 10)
	{
		printf("%08x: ", idx);
		for (col = idx; col < idx + 10; col += 2)
		{
			if (col < size)
				printf("%02x", *(b + col));
			else
				printf("%2c", ' ');
			if (col + 1 < size)
				printf("%02x", *(b + col + 1));
			else
				printf("%2c", ' ');
			putchar(' ');
		}
		for (col = idx; col < idx + 10; col++)
		{
			if (col < size)
				putchar(*(b + col) < ' ' ? '.' : *(b + col));
		}
		putchar('\n');
	}
	if (size <= 0)
		putchar('\n');
}
