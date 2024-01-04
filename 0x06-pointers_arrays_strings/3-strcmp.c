#include "main.h"
#include <stdio.h>

/**
 * main - a function that compares two strings
 * return: characters/strings
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
