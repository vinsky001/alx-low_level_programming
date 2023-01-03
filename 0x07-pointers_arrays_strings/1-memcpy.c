#include "main.h"

/**
    *_memset - function that fills memory with a constant byte
    *@b: the address of memory to print
    *@s: the size of the memory to print
    *@n: bytes of the memory
    *Return: success
    */

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
		s[i] = b;
	return s;
}
