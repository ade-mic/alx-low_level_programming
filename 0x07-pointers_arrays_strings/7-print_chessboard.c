#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * print_chessboard - a function that prints the chessboard
 * @a: string to be searched
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i, j;


	for (i = 0; i < 8; i++)
	{
		for(j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			if (j == 7)
				_putchar('\n');
		}
	}
}
