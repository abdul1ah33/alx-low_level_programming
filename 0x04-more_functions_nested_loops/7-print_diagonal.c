#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal
 *
 * @n: the nom of times the \ prints
 * in the file
*/

void print_diagonal(int n)
{
	int postn, space;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (postn = 1; postn <= n; postn++)
		{
			for (space = 1; space < postn; space++)
				_putchar(' ');
			_putchar(92); /*is equalto '\' char*/
			_putchar('\n');
		}
	}
}
