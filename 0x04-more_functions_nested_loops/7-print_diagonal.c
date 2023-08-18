#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the nom of times the \ prints
*/

void print_diagonal(int n)
{
	int i, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (space = 1; space <= i; space++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
}
