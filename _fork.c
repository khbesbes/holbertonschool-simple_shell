#include "shell.h"
/**
 *
 * _fork : create process for the command line interpreter
 *
 *@args: double pointer of string.
 * 
 *@command: pointer to strings
 *
 * Return: positive value .
 */
int _fork( char *command , char **args)
{
pid_t pid , waipid;
int status;
pid = fork();
command = "/bin/bash"
args = {command ,"-c", "echo", NULL}
if (fork == 0)
{ 
if (execve(command , args , NULL) == -1)
{
perror("lsh")
}
exit(EXIT_FAILURE);
 
else if (pid < 0)
{
perror("lsh");
}
else
do{
waipid = waitpid(pid, &status ,WUNTRACKED);
}while (!WIFEXITED(status) && !WIFSIGNALED(status))
return (1);


}

}
