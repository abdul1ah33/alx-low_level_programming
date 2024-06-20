#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array of integers
 * @min: minimum range of values stored
 * @max: maximum range of values stored and number of elements
 *
 * Return: pointer to the new array
*/
int *array_range(int min, int max)
{
	int *arr, i, n;

	if (min > max)
		return (NULL);

	n = (max - min) + 1;

	arr = malloc(sizeof(int) * n);

	if (!arr)
		return (NULL);

	for (i = 0; i < n; i++)
		arr[i] = min + i;

	return (arr);
}
