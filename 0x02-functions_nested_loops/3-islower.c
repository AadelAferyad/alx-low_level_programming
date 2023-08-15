#include "main.h"

/**
 *_islower - Entry point
 *@c: The integer to check
 *Explain: 'lowercase'
 *Return: On success 1.
 *On error, 0 is returned.
 */
int _islower(int c)
{
	if (c >= 97 && c < 123)
		return (1);
	else
		return (0);
}
