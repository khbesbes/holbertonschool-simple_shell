#include "shell.h"
/**
 *
 * _execute - execute the command line interpreter.
 *
 *
 *
 */
 int _execute(char **args)
{
  int i;

  if (args[0] == NULL) 
  {
    return (1);
  }

  for (i = 0; i < Ish_num_builtins(); i++) 
  {
    if (strcmp(args[0], builtin_str[i]) == 0) 
    {
      return (*builtin_func[i])(args);
    }
  }

  return _fork(args);
}