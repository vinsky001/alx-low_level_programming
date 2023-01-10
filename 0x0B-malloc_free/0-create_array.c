#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
    *create_array - creates an array of chars, and
    *intializes it with a specific char.
    *@size: size of the array
    *@c: character to initialize the array
    *Return: return pointer to array created or NULL if it fails
    */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}

