#include "main.h"

/**
 * more_numbers - print from 0 to 14 10 times
 *
 * Return: Always 0 (success)
*/

void more_numbers(void)
{
	int row, num, i;

	for (row = 0; row < 10; row++)
	{
		for (i = 0; i <= 14; i++)
		{
			num = i;
			if (num > 9)
			{
				_putchar(49);
				num = num % 10;
			}
			_putchar(num + 48);
		}
		_putchar('\n');
	}
}
