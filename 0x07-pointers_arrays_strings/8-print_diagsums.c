#include "main.h"

/**
* print_diagsums - a function that prints the sum of the two diagonals
* @a: a pointer to int
* @size: size
*/

void print_diagsums(int *a, int size)
{
	int i, sum = 0, sum_2 = 0;

	for (i = 0; i < size; i++)
	{
		sum = sum + *(a + (size * i + i));
		sum_2 = sum_2 + *(a + (size * i + size - 1 - i));
	}
	printf("%d, %d\n", sum, sum_2);
}
