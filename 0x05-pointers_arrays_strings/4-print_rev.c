#include "main.h"

/**
 * print_rev - print string in reverse
 *
 * @s: get input parameter
 *
 * Return: void
*/

void print_rev(char *s)
{
	int i;

	while (s[i])
		i++;

	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
