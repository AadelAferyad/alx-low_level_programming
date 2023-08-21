#include "main.h"

/**
 * swap_int - swap two integers
 * @a: first pointer to intger
 * @b: second pointer to intger
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

}
