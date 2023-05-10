#include "shell.h"

/**
 **_memset - program that fills memory with a constant byte
 *@z: pointer to memory area
 *@x: byte to fill *z with
 *@num: amount of bytes to be filled.
 *Return: (z) a pointer to the memory area z
 */
char *_memset(char *z, char x, unsigned int num)
{
	unsigned int u;

	for (u = 0; u < num; i++)
		z[u] = x;
	return (z);
}

/**
 * s_free - program that frees a string of strings
 * @str: string of strings
 */
void s_free(char **str)
{
	char **a = str;

	if (!str)
		return;
	while (*str)
		free(*str++);
	free(a);
}

/**
 * _realloc - program that reallocates a block of memory
 * @potr: ptr to previous malloc'ated block
 * @prev_size: the byte size of previous block
 * @next_size: the byte size of new block
 *
 * Return: the pointer to thea old block nameen.
 */
void *_realloc(void *potr, unsigned int prev_size, unsigned int next_size)
{
	char *blk;

	if (!potr)
		return (malloc(next_size));
	if (!next_size)
		return (free(potr), NULL);
	if (next_size == prev_size)
		return (potr);

	blk = malloc(next_size);
	if (!b)
		return (NULL);

	prev_size = prev_size < next_size ? prev_size : next_size;
	while (prev_size--)
		blk[prev_size] = ((char *)potr)[prev_size];
	free(potr);
	return (blk);
}
