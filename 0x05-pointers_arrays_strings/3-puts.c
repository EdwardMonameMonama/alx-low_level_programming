#include <stdio.h>
#include "main.h"
/**
 * main - a function that prints a string, followed by a new line, to stdout.
 *Return: nothing
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		putchar(*str);
	}
	putchar('\n');
}
