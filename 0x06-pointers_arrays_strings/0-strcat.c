#include "main.h"
#include <stdio.h>

/**
 * main -  a function that concatenates two strings
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int gold = 0, i;

	while (dest[gold])
	{
		gold++;
	}
	for (i = 0; src[i] != 0; i++)
	{
		dest[gold] = src[i];
		gold++;
	}
	dest[gold] = '\0';
	return (dest);
}
