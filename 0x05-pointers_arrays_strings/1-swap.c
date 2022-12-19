#include "main.h"

/**
    *swap_int - function that swaps the value of two integers
     *@a: first argument character
     *@b: second argument character
     *Return: void
     */

void swap_int(int *a, int *b);
{
	int p = *a;
	*a = *b;
	*b = p;
}

