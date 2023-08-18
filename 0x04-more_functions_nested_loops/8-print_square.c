#include "main.h"

/**
 * print_square - print a # square
 *
 * @size: get the value of size
*/

void print_square(int size)
{
	int i, line;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (i = 1; i <= size; i++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
