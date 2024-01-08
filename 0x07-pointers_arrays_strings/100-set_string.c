#include "main.h"
#include <stdio.h>

/**
 * main - a function that sets the value of a pointer to a char
 * return: always 0
 */

void set_string(char **s, char *to)
{
	*s = to;
}
