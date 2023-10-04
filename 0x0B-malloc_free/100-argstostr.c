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
	char *buffer;
	int i = 0, j = 0, k = 0, size = 0;

	if (!ac || !av)
		return (NULL);
	while (i < ac)
	{
		j = 0;
		while (av[i][j])/*"amina" "bnt" "wahb"*/
		{
			size++;
			j++;
		}
		size++;
		i++;
	}
	buffer = (char *) malloc(sizeof(char) * size + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			buffer[k] = av[i][j];
			j++;
			k++;
		}
		buffer[k] = '\n';
		i++;
		k++;
	}
	buffer[k] = '\0';
	return (buffer);
}
