#include "main.h"

/**
    *leet - encodes a string to 1337
    *@str: string to be encoded
    *Return: a pointer to the encoded string
 */


char *leet(char *str)
{
	char ch[] = "aAeEoOtTlL";
	char leet[] = "4433007711";
	int i, j;

	for (i = 0; str[i] != '\0'; ++i)
	{
		for (j = 0; ch[j] != '\0'; ++j)
		{
			if (str[i] == ch[j])
			{
				str[i] = leet[j];
				break;
			}
		}
	}
	return (str);
}
