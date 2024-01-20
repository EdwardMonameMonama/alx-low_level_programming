#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints a string in reverse
 * return: nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	putchar(*s);
}
