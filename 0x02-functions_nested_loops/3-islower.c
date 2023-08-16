#include "main.h"

/**
 * _islower - check lowercase characters
 *
 * @c: checks input of function
 *
 * Return: return 1 if c is lowercase
 *	return 0 (success)
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
