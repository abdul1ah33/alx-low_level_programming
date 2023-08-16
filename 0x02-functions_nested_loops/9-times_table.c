#include "main.h"

/**
 * times_table - 9 times table
*/

void times_table(void)
{
	int n, multi, prod;

	for (n = 0; n <= 9; n++)
	{
		_putchar(48);
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			prod = n * multi;

			if (prod <= 9)
				_putchar(' ');
			else
				_putchar((prod / 10) + 48);

			_putchar((prod % 10) + 48);
		}
		_putchar('\n')
	}
}
