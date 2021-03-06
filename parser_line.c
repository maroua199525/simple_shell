#include "shell.h"

/**
* parse_line - parser the line from the input
* @line: string
*@delim: the delimet
*Return: array of string
*/
char **parse_line(char *line, char *delim)
{
	char **array;
	char *token;
	int i = 0;

	if (line == NULL)
		return (NULL);
	array = malloc(sizeof(char *) * SIZE);
	if (array == NULL)
	{
		write(STDERR_FILENO, "error\n", 6);
		exit(EXIT_FAILURE);
	}

	token = strtok(line, delim);
	while (token != NULL)
	{
		array[i++] = token;
		token = strtok(NULL, delim);
	}
	array[i] = NULL;

	return (array);
}
