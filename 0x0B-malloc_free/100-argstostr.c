#include "main.h"


/**
 * argstostr - function concat a string passed as program arguments.
 *
 * @ac: the argument count.
 * @av: the vector argument.
 * Return: contat string on the heap.
 */
char *argstostr(int ac, char **av)
{
	int i, k = 0, j = 0, count = 0;
	char *buffer;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k]; k++)
		{
			count++;
		}
	}
	buffer = (char *) malloc(count + 1);
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		k = 0;
		while (av[i][k])
		{
			buffer[j] = av[i][k];
			j++;
			k++;
		}
		buffer[j] = '\n';
		j++;
	}
	buffer[j] = '\0';
	return (buffer);
}
