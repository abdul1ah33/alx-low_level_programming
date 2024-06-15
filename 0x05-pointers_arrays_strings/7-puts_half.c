#include "main.h"

/**
 * puts_half - prints half of a string
 * followed by a new line
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int len = 0, half;

	while (str[len] != '\0')
	{
		len++;
	}
       	if (len % 2 == 0)
	{
		for (half = len / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half]);
		}
	}
	else
	{
		for (half = (len - 1) / 2; str[half] != '\0'; half++)
		{
			_putchar(str[half + 1]);
        	}
	}
}
