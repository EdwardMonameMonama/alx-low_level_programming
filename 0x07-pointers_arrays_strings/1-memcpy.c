#include "main.h"
#include <stdio.h>

/**
 * main - a function that copies memory area
 * return: always 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
