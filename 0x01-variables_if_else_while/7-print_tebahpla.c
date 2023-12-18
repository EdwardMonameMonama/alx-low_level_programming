#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char smt;

	for (smt = 'z'; smt >= 'a'; smt--)
		putchar(smt);
	putchar('\n');

	return (0);
}
