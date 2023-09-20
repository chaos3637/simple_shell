#include "shell.h"
int main(void)
{
	char *str;
	char *token;

	str = _strdup("this       is\t   marokko\n");

	token = strtok(str, "\t\n");
	printf("%s\n", token);
	token = strtok(NULL, "\t\n");
	printf("%s\n", token);

	return (0);
}
