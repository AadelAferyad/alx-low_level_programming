#include <stdio.h>

/**
 * _atoi - ascii to intger
 *
 * @s: pointer to char
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;

	unsigned int h = 0;

	int bool = 0;
	int sign = 1;
	int negative = 0;

	while (s[i] != '\0')
	{
		if (s[i] == 32 || s[i] == 9)
		{
			i++;
			continue;
		}
		if (bool == 0 && s[i] == '-')
		{
			negative++;
		}
		if (s[i] >= 48 && s[i] <= 57)
		{
			h = h * 10 + (int)s[i] - 48;
			bool = 1;
		}
		if (negative % 2  == 0)
		{
			sign = 1;
		}
		else
			sign = -1;
		if (bool == 1 && (s[i] == '-' || s[i] == '+' || s[i] < 48 || s[i] > 57))
		{
			return (h * sign);
		}
		i++;
	}
	return ((h == 0) ? 0 : h * sign);
}
