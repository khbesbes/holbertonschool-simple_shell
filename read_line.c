#include "shell.h"
/**
 *
 * read_line - waits for the newline charcater before returning. 
 * 
 * return : strings (line)
 */
char *read_line(void)
{
char *line = NULL;
ssize_t _read;
size_t length = 0;
_read = getline(&line , &length , stdin);
if (_read == -1)
{
free(line);
exit(EXIT_SUCCESS); 
}
return(line);

}