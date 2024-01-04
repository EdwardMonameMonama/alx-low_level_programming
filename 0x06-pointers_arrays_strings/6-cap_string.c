#include "main.h"
#include <stdio.h>

/**
 * main - a function that capitalizes all words of a string
 * return: string
 */

char *cap_string(char *str)
{
	int jesus = 0;

	while (str[jesus])
	{
		while (!(str[jesus] >= 'a' && str[jesus] <= 'z'))
			jesus++;
		if (str[jesus - 1] == ' ' ||
				str[jesus - 1] == '\t' ||
				str[jesus - 1] == '\n' ||
				str[jesus - 1] == ',' ||
				str[jesus - 1] == ';' ||
				str[jesus - 1] == '.' ||
				str[jesus - 1] == '!' ||
				str[jesus - 1] == '?' ||
				str[jesus - 1] == '"' ||
				str[jesus - 1] == '(' ||
				str[jesus - 1] == ')' ||
				str[jesus - 1] == '{' ||
				str[jesus - 1] == '}' ||
				jesus == 0)
			str[jesus] -= 32;
		jesus++;
	}
	return (str);
}
