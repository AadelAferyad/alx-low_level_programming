#include "main.h"


/**
 * str_concat - function concatenate strings in the heap.
 *
 * @s1: first string.
 * @s2:  second string.
 *
 * Return: return allocated memory.
 */


char *str_concat(char *s1, char *s2)
{
	int s_1 = 0, s_2 = 0, i = 0;
	char *buffer;

	while (s1[s_1])
		s_1++;
	while (s2[s_2])
		s_2++;
	buffer = (char *) malloc(s_1 + s_2 + 1);
	if (buffer == NULL)
		return (NULL);
	while (i < s_1 + s_2)
	{
		if (i < s_1)
		{
			buffer[i] = s1[i];
		}
		else
			buffer[i] = s2[i - s_1];

		i++;
	}
	return (buffer);
}

int main(void)
{
    char *s;

    s = str_concat("Betty ", "Holberton");
    if (s == NULL)
    {
        printf("failed\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}