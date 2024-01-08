#include "main.h"
#include <stdio.h>

/**
 * main - a function that prints the chessboard
 * return: always 0
 */

void print_chessboard(char (*a)[8])
{
	int i, n;

	for (i = 0; i < 8; i++)
	{
		for (n = 0; n < 8; n++)
			putchar(a[i][n]);
		putchar('\n');
	}
}
