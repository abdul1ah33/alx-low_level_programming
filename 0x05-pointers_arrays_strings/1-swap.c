#include "main.h"

/**
 * swap_int - swap two integers
 *
 * @a: first integer
 * @b:second integer
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
