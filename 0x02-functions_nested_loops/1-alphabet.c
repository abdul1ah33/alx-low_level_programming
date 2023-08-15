#include "main.h"

/**
 * print_alphabet - utilitize on _putchar function to print
 *			the alphapet a - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		_putchar(ch);
	_putchar('\n');
}
