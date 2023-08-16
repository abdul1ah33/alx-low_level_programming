#include "main.h"

/**
 * main - Entry point
 *
 * Description: print first 50 fibonacci num
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2, sum;
	float total;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;

		if (sum % 2 == 0)
			total += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%f\n", total);

	return (0);
}
