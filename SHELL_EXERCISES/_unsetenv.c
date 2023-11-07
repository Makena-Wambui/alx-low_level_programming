/**
 * The unsetenv() function deletes the variable name from the environment.
 * If name does not exist in the environment, then the function succeeds,
 * and the environment is unchanged.
 * RETURN VALUE:setenv() and unsetenv() functions return zero on success,
 * or -1 on error, with errno set to indicate the cause of the error.
 * name param represents the variable to be removed.
 */
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
extern char **environ;

int _unsetenv(const char *name)
{
	ssize_t remove;
	size_t a;
	char *chr;

	if (name == NULL)
	{
		perror("Inavalid.\n");
		return -1;
	}
	/*let us iterating thro the environ to find name*/
	remove = -1;
	/* remove keeps track of whether the variable has been found,
	 * and if it has, at which index.
	 * set remove to -1 initially to indicate that the
	 * variable has not yet been found.
	 * then we use a loop to search for the variable
	 */
	for (a = 0; environ[a] != NULL; a++)
	{
		chr =strchr(environ[a], '=');
		if (chr !=NULL && (chr - environ[a] == (ssize_t)strlen(name)) && strncmp(environ[a], name, chr - environ[a] == 0))
		{
			/*if name is found then set remove to the current index*/
			remove = a;
			break;
		}
	}
	if (remove != -1) /*this means that the name has been found*/
	{
		free(environ[remove]);
		/*then shift to fill the gap left by the deleted string*/
		for (a = remove; environ[a] != NULL; a++)
		{
			environ[a] = environ[a +1];
		}
		return 0;
	} 
	return 0; /*if name is not found just return without any changes*/
}

int main(void)
{
	size_t a;

	_unsetenv("jake");

	for (a = 0; environ[a] != NULL; a++)
	{
		printf("%s\n", environ[a]);
	}
	return 0;
}

