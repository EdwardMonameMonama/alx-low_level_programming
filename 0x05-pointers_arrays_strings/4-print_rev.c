#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints a string, in reverse, followed by a new line
 * Return: nothing
 */
void print_rev(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
		c++;
	}
	for (c -= 1; c >= 0; c--)
	{
		putchar(s[c]);
	}
	putchar('\n');
}
