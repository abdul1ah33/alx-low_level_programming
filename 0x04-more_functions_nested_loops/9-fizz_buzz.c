#include "main.h"

/**
 * main - Entry point 1 - 100 followed by new line
 *	numbers  multible by 3 print fizz
 *	numbers  multible by 5 print buzz
 *	numbers  multible by 3 and 5 print fizzbuzz
 *	sparated by space
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num;

	for (num = 0; num <= 100; num++)
	{
		if ((num == 3) && !(num == 5))
			printf("Fizz");
		else if ((num == 5) && !(num == 3))
			printf("Buzz");
		else if ((num == 3) && (num == 5))
			printf("FizzBuzz");
		else
			printf("%d", num);
		if (num != 100)
			printf(" ");
		else
			printf("\n");
	}

	return (0);
}
