#include "shell.h"
/**
 * main - Entry point
 *
 * @ac: argument count
 * @av: argument vector
 *
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	char *line =  NULL, **command = NULL;
	int status = 0;
	(void) ac;
	(void) av;

	while (1)
	{
		line = read_line();
		if (line == NULL)/* reache EOF ctr + D */
		{
			if (isatty(STDIN_FILENO))
				write(STDOUT_FILENO, "\n", 1);
			return (status);
		}

		free(line);		
		command = tokenizer(line);

		/*status = _execute(command, av);*/
	}
}
