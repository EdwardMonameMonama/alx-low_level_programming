#include <stdio.h>
/**
 * Main - a function that swaps the values of two integers
 *
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
