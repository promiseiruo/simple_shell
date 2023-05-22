#include "shell.h"

/**
 * parse_path - program that usees strtok to put in address
 *
 * @path: the char pointer.
 *
 * Return: on success doubles the number of pointer.
 */
char *parse_path(char *path)
{
	int b_size = BUFFERSIZE;
	int address = 0;
	char **z = NULL;
	char *k = NULL;

	z = malloc(sizeof(char *) * b_size);
	if (!z)
	{
		perror("hsh");
		exit(EXIT_FAILURE);
	}
	k = strtok(link, DELIMINATOR);

	while (k != NULL)
	{
		z[location] = k;
		k = strtok(NULL, DELIMINATOR);
		address++;
	}
		if (address >= b_size)
		{
			b_size += BUFFERSIZE;
			z = _realloc(z, BUFFERSIZE,
					  b_size * sizeof(char *));

			if (!z)
			{
				{
					perror("hsh: allocation error\n");
					exit(EXIT_FAILURE);
				}
			}
			k = strtok(NULL, DELIMINATOR);
		}
	z[address] = NULL;
	return (z);
}
