#include "main.h"

/**
 * print_times_table - up to 15 times table
 *
 * @n:takes input number
*/

void print_times_table(int n)
{
	int num, multi, prod;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar(48);
			for (multi = 1; multi <= n; multi++)
			{
				_putchar(',');
				_putchar(' ');

				prod = num * multi;

				if (prod <= 9)
					_putchar(' ');
				if (prod <= 99)
					_putchar(' ');
				if (prod >= 100)
				{
					_putchar((prod / 100) + 48);
					_putchar((prod / 10) % 10 + 48);
				}
				else if (prod <= 99 && prod >= 10)
					_putchar((prod / 10) + 48);
				_putchar((prod % 10) + 48);
			}
			_putchar('\n');
		}
	}
}
