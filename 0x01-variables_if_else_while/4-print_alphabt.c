#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char smt, e, q;
	e = 'e';
	q = 'q';

	for (smt = 'a'; smt <= 'z'; smt++)
	{
		if (smt != e && smt != q)
			putchar(smt);
	}
	putchar('\n');
	return (0);
}
