#include "main.h"

/**
 * print_square - print a # square
 *
 * @size: get the value of size
*/

void print_square(int size)
{
	int i;

	if (size <= 0)
		_putchar('\n');
	else
	{
		i = size;

		while (size > 0)
		{
			while (i > 0)
			{
				_putchar(23);
				i--;
			}
			_putchar('\n');
			size--;
		}
	}
}
