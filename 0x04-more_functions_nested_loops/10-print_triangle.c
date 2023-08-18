#include "main.h"

/**
 * print_triangle - print a triangle
 *
 * @size: get the number size of triangle
 *
 * Return: Always 0 (success)
*/

void print_triangle(int size)
{
	int lines, rows;

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (lines = 1; lines <= size; lines++)
		{
			for (rows = 1; rows <= size; rows++)
			{
				if ((lines + rows) <= size)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
}
