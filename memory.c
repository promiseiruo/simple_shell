#include "shell.h"

/**
 * memory_free - program that frees a pointer and NULL the address
 * @potr: the address of the pointer to free
 *
 * Return: 1 if freed succesful, otherwise 0.
 */
int memory_free(void **potr)
{
	if (potr && *potr)
	{
		free(*potr);
		*potr = NULL;
		return (1);
	}
	return (0);
}
