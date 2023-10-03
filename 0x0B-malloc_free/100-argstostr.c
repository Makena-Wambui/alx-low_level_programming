#include "main.h"
#include <stdlib.h>
/**
 * argstostr - this function  concatenates all the arguments of your program.
 * @ac: argument count.
 * @av : strings supplied as arguments.
 * Return: pointer to the new string.
 */
char *argstostr(int ac, char **av)
{
	char *newstring;
	int newstrlen = 0;
	int a, b, z;

	if (ac == 0 || av == NULL)
		return (NULL);
	/**
	 * calculate length of new string
	 * take into account length of individual strings.
	 */
	for (a = 0; a < ac; a++)/*This iterates through all strings*/
	{
		for (b = 0; av[a][b] != '\0'; b++)
			newstrlen++;
		/*account for newline char*/
		newstrlen++;
	}
	/*account for null byte*/
	newstrlen++;

	/*now allocate mem for that string.*/
	newstring = malloc(sizeof(char) * newstrlen);
	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}
	/*Now copy each argument into the new string.*/
	z = 0;/*use this as index for new string*/
	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b] != '\0'; b++)
		{
			newstring[z++] = av[a][b];
		}
	newstring[z++] = '\n';/*account for new line*/
	}
	return (newstring);
}
