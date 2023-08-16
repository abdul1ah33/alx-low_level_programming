#include "main.h"

/**
 * numength - returns the length of a string
 *
 * @num: operand number
 *
 * Return: number of digits
*/
int numlength(int num)
{
	int lenght;

	if (!num)
		return(0);
	while (num)
	{
		num = num / 10;
		lenght += 1;
	}

	return (length);
}

/**
 * main - Entry point
 *
 * Description: print first 98 fibonacci num
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);

		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
		else
			printf(", ");
	}

	return (0);
}
