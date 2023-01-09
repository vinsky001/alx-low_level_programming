#include <stdio.h>
#include "main.h"

/**
    *main - prints each argument passed to the program on a line
    *@argc: argument couter
    *@argv: argument vector
    *Return: success (0)
    */

int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
		printf("%s\n", argv[i++]);
	return (0);
}

