#include "main.h"
/**
 * main - Entry point
 *
 * Description: the sum of the
 * multiples by 3 and 5 below 1024
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int sum, num;

	for (num = 0; num <= 1024; num++)
	{
		if ((num % 3 == 0) || (num % 5 == 0))
			sum += num;
	}
	printf("%D\n", sum);

	return (0);
}
