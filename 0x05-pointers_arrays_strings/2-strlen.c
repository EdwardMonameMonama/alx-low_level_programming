#include <stdio.h>
/**
 * Main -  a function that returns the length of a string.
 *
 * Return: nothing
 */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;
	return (length);
}
