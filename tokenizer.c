#include "shell.h"
/**
 * tokenize - program that tokenizes a stirng
 * @linepotr: user input
 * Return: a ptr to arr of ptrs
 */

char **tokenize(char *linepotr)
{
	char **user_command = NULL;
	char *token = NULL;
	size_t i = 0;
	int size = 0;

	if (linepotr == NULL)
		return (NULL);

	for (i = 0; linepotr[i]; i++)
	{
		if (linepotr[i] == ' ')
			size++;
	}
	if ((size + 1) == _strlen(linepotr))
		return (NULL);
	user_command = malloc(sizeof(char *) * (size + 2));
	if (user_command == NULL)
		return (NULL);

	token = strtok(linepotr, " \n\t\r");

	for (i = 0; token != NULL; i++)
	{
		user_command[i] = token;
		token = strtok(NULL, " \n\t\r");
	}
	user_command[i] = NULL;
	return (user_command);
}
