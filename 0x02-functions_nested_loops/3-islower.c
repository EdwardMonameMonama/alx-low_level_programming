#include <stdio.h>
#include "main.h"
/**
 * main - lowercase characters
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
