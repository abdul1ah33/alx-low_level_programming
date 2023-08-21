#include "main.h"

/**
 * _strlen - get the length of string
 *
 * @s: input parameter
 *
 * Return: Nothing
*/

int _strlen(char *s)
{
	int c;

	for (c = 0; *s != '\0'; s++)
		c++;

	return (c);
}
