#include "main.h"
#include <stdio.h>

/**
 * main - a function that returns the length of a string
 * return: int value
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
		return (_strlen_recursion(s) + 1);
}
