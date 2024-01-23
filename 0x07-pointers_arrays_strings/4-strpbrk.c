#include "main.h"
#include <stdio.h>

/**
 * main - a function that searches a string for any of a set of bytes
 * return: always 0
 */

char *_strpbrk(char *s, char *accept)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (n = 0; accept[n] != '\0'; n++)
		{
			if (s[i] == accept[n])
				return (s + i);
		}
	}
	return (0);
}