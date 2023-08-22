#include <stdio.h>
#include "main.h"


/**
 * print_array - prints only the half of string
 * @a: pointer to char
 * @n: integer
 */

void print_array(int *a, int n)
{
	int i = 0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
