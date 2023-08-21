#include "main.h"

/**
 * _puts - print a string
 *
 * @str: takes input parameter
 *
 * Return: string
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		str++;
	}
	_putchar('\n');
}
