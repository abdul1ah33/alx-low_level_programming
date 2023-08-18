#include "main.h"

/**
 * print_line - length of a line
 *
 * @n: input number
*/

void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (n--)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
