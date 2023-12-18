#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;
	char smt;

	for (a = '0'; a <= '9'; a++)
		putchar(a);

		for (smt = 'a'; smt <= 'f'; smt++)
			putchar(smt);
	putchar('\n');

	return (0);
}
