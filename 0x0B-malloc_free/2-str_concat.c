#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that concatenates two strings
 * return: two concatenates strings
 */
char *str_concat(char *s1, char *s2)
{
	int c = 0, o = 0, l = 0, e = 0;
	char *s;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[c])
		c++;

	while (s2[o])
		o++;

	e = c + o;
	s = malloc((sizeof(char) * e) + 1);

	if (s == NULL)
		return (NULL);

	o = 0;

	while (l < e)
	{
		if (l <= c)
			s[l] = s2[l];

		if (l >= c)
		{
			s[l] = s2[o];
		o++;
		}
	l++;
	}
	s[l] = '\0';
	return (s);
}
