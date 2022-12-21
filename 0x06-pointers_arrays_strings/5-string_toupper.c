#include "main.h"

/**
    *string_toupper - changes all lowercase letters of a string to uppercase
    *@str: string
    *Return: the string
    */

char *string_toupper(char *)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= ('a' - 'A');
		i++;
	}

	return (str);
}

