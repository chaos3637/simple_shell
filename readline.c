#include "shell.h"

char *read_line(void)
{
	char *line = NULL;
	size_t len = 0;
	ssize_t nom;

	write(STDOUT_FILENO, "$ ",2);
	nom = getline(&line, &len, stdin);
	if ( nom == -1)
	{
		free(line);
		return (NULL);
	}

	return (line);
}
