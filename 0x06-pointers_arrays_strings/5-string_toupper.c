#include "main.h"
#include <stdio.h>

/**
 * main -  a function that changes all lowercase letters of a string to uppercase.
 * return- string
 */

char *string_toupper(char *str)
{
	int lambo = 0;

	while (str[lambo])
	{
		if (str[lambo] >= 'a' && str[lambo] <= 'z')
			str[lambo] -= 32;
		lambo++;
	}
	return (str);
}
