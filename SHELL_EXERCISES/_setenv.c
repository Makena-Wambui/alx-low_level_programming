/*what does setenv do?
 * The  setenv() function adds the variable name to the environment with the value value,
 * if name does not already exist.
 * If name does exist in the environment, then its value is changed to value if overwrite is nonzero;
 * if overwrite is zero,  then  the  value  of  name  is  not
 * changed (and setenv() returns a success status).
 * This function makes copies of the strings pointed to by name and value (by contrast with putenv(3)).
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern char **environ;

int _setenv(const char *name, const char *value, int overwrite)
{
	size_t a;
	char *chr;
	char *new_var;
	size_t num = 0;
	char **new_environ;
	
	if (name == NULL || value == NULL)
	{
		perror("Invalid.\n");
		return -1;
	}
	/*iterate through environ list*/
	for (a = 0; environ[a] != NULL; a++)
	{
		/*lets use strchr to find =*/
		chr = strchr(environ[a], '=');
		/*the following condition tests whether the equal sign is present, 
		 * whether the name provided to be added or changed matches one in the environment.
		 */

		/*this is logic for when the variable is found*/
		if (chr != NULL && (chr - environ[a] == (ssize_t)strlen(name)) && (strncmp(environ[a], name, chr - environ[a]) == 0))
		{	/* why typecast to ssize_t? because subtracting 2 pointers results in a signed int.
			 * while srlen returns size_t.*/

			if (overwrite) /*if overwrite is true*/
			{
				/*update the value of the current environ[a] */
				new_var = malloc(strlen(name) + strlen(value) + 2);
				/*check for malloc success*/
				if (new_var == NULL)
				{
					perror("Malloc failure.\n");
					return -1;
				}
				/*sprintf is just like printf.
				 * but it does not print to stdout.
				 * instead,it will write the formatted string to a character array.
				 * so sprintf formats and stores a sreies of characters and values into a string.
				 */
				sprintf(new_var, "%s=%s", name, value);
				environ[a] = new_var;
				return (0);
			}
			else /*overwrite is 0*/
				return (0);
		
		}
	}
	/*handle logic for when variable is not found, and we want to add it to the environment*/
	new_var = malloc(strlen(name) + strlen(value) + 2);

	if (new_var == NULL)
	{
		perror("Malloc Fail.\n");
		return -1;
	}
	sprintf(new_var, "%s=%s", name, value);


	/*lets count the number of existing variables in the environment*/
	while (environ[num] != NULL)
		num++;
	/*memory allocation for the new environment so as to include the newly added variable*/
	new_environ = malloc((num + 2) * sizeof(char *));
	/*why plus 2?
	 * num is the number of existing variables. PLUS
	 * one slot for the newly created or added variable.
	 * and another for the terminating null pointer.
	 */
	if (new_environ == NULL)
	{
		perror("Malloc Fail.\n");
		free(new_var);
		return -1;
	}
	/*now we copy the older variables into the new environ*/
	for (a = 0; a < num; a++)
	{
		new_environ[a] = environ[a];
	}
	/*then we update with the new var*/
	new_environ[num] = new_var;
	new_environ[num + 1] = NULL;

	/*Now assign new_environ to environ*/
	environ = new_environ;
	
	return 0;	
}
int main(void)
{
	/*now we test _setenv*/
	int a;

	_setenv("SHELL", "bash", 0); /*if shell exists do not update it.*/
	_setenv("NAME", "ALICIA", 1); /*if name exists overwrite it*/
	
	for (a = 0; environ[a] != NULL; a++)
	{
		printf("%s\n", environ[a]);
	}
	return 0;
}

