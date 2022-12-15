#include "shell.h"
/**
 *
 * main - the shape of the function. 
 * Return: success or failure.
*/
void main (void)
{
char *line;
char **split;
int state;
do{
line = read_line();
split = _parse(line);
state = _execute(split);
free(line);
free(split);

} while(state);

}
