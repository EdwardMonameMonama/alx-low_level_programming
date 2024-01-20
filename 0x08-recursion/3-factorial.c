#include "main.h"
#include <stdio.h>

/**
 * main - a function that returns the factorial of a given number
 * return: int value
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
