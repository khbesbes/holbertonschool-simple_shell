#include "shell.h"
/**
 *
 * _parse - split the command line. 
 *
 * @line: pointer of charcater.
 *
 */
char **_parse(char *line)
{
char *token , char **tokens;
char delim[] = {"\n\t\r"};
int position = 0;
tokens = malloc(sizeof(char) * 1024);
if (tokens = NULL)
{
free(tokens);
exit(EXIT_FAILURE);
}
token = strtok(line , delim);
while (token != NULL)
{
tokens[position] = token;
token = strtok(NULL, delim[]);
position++;
}
tokens[position] = NULL;
return(tokens);
}
