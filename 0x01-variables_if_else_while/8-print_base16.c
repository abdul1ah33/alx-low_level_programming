#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: Print all hexadecimal numbers
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int n = 0;
	int ch = 0;

	while (n < 10)
	{
		putchar(n + '0');
		n++;
	}

	while (ch < 6)
	{
		putchar(ch + 'a');
		ch++;
	}
	putchar('\n');

	return (0);
}
