#include "main.h"
#include <stdio.h>

/**
 * main - a function that locates a character in a string
 * return: always 0
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	return (0);
}
