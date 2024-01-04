#include "main.h"
#include <stdio.h>

/**
 * main - a function that copies a string
 * return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int lambo = 0, src_svj = 0;

	while (src[lambo++])
		src_svj++;
	for (lambo = 0; src[lambo] && lambo < n; lambo++)
		dest[lambo] = src[lambo];
	for (lambo = src_svj; lambo < n; lambo++)
		dest[lambo] = '\0';
	return (dest);
}
