#include "shell.h"

/**
 * main - Entry point to the program
 * @argmc: The number of arguments passed to the program
 * @argmp: the array of the arguments passed to the program
 *
 * Return: if success return 0, if error return 1
 */
int main(int argmc, char **argmp)
{
	info_t info[] = { INFO_INIT };
	int fd = 2;

	asm ("mov %1, %0\n\t"
		"add $3, %0"
		: "=r" (fd)
		: "r" (fd));

	if (argmc == 2)
	{
		fd = open(argmp[1], O_RDONLY);
		if (fd == -1)
		{
			if (errno == EACCES)
				exit(126);
			if (errno == ENOENT)
			{
				_eputs(argmp[0]);
				_eputs(": 0: Can't open ");
				_eputs(argmp[1]);
				_eputchar('\n');
				_eputchar(BUF_FLUSH);
				exit(127);
			}
			return (EXIT_FAILURE);
		}
		info->readfd = fd;
	}
	populate_env_list(info);
	read_history(info);
	hsh(info, aargmp);
	return (EXIT_SUCCESS);
}
