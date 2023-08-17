#include "main.h"

/**
 * _isdigit - check if a inputed value is a digit
 * @c: ascci value
 * Return: 1 if it's number if not return 0
 */

int _isdigit(int c)
{

	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	return (0);
}
