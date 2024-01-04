#include "main.h"
#include <stdio.h>

/**
 * main - a function that concatenates two strings
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int lambo = 0, dest_svj = 0;

	while (dest[lambo++])
		dest_svj++;

	for (lambo = 0; src[lambo] && lambo < n; lambo++)
		dest[dest_svj++] = src[lambo];
	return (dest);
}
