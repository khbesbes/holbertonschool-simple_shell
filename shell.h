#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <signal.h>
#include <fcntl.h>
#include <errno.h>
void main (void);
char **_parse(char *line);
char *read_line(void);
int _fork( char *command , char **args);
int _execute(char **args);

