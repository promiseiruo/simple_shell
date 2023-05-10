#include "shell.h"

/**
 * _strcat - program that incatenates two strings
 *
 * @dest: address string
 *
 * @src: Origin string
 * Return: Always 0 success
 */



char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;

	}
	dest[i] = '\0';
return (dest);
}



/**
 * _strcmp - program that Compares two strings
 *
 * @s1: first string
 * @s2: 2nd string
 *
 * Return: multiple returns
 *
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int val;

	while (s1[i] != 0 && s2[i] != 0 && s1[i] == s2[i])
		i++;
val = s1[i] - s2[i];
return (val);

}

/**
 * _strlen - program that gets the size of a string
 * @s: the string to measure
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != 0; i++)
		;

	return (i);
}

/**
 *_strncmp - program that function that compares two strings.
 *@s1: the 1st string
 *@s2: the 2nd string
 *@n: the number of characters
 * Return: the diference
 */

size_t _strncmp(char *s1, char *s2, size_t n)
{
	size_t i, j;

	for (j = 0; s1[j] != '\0' && j < n; j++)
	{
		i = s1[j] - s2[j];

		if (i != 0)
		{
			return (i);
		}
	}
	return (0);
}

/**
 * _strcpy - program that copies the string pointed to by src into dest
 * @dest: the address of the copy
 * @src: thesource of the copy
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i + 1] = 0;
	return (dest);
}
