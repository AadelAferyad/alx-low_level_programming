#include "main.h"

/**
	*	reverse_array - reverse an array
	*	@a: pointer to array
	*	@n: size of the array
	*
	*/

void reverse_array(int *a, int n)
{
		int i = 0, j = 0, temp = 0;

		while (i < n)
			i++;
		while (j < n / 2)
		{
			i--;
			temp = a[i];
			a[i] = a[j];
			a[j] = temp;
			j++;
		}
}
