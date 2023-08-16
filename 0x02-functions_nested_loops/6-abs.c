#include "main.h"

/**
 * _abs - function that combutes the absulote
 *		of an integer
 *
 * @n: takes integer type input of function
 *
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
