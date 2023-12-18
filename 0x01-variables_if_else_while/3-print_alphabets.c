#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char smt;

	for (smt = 'a'; smt <= 'z'; smt++)
		putchar(smt);
	for (smt = 'A'; smt <= 'Z'; smt++)
		putchar(smt);
	putchar('\n');
	return (0);
}
