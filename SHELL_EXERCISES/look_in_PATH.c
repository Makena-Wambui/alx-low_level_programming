#include  <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#define SIZE 1024

int main(int argc, char *argv[])
{	
	char *val;
	char *tok;
	int a = 1;
	char *name;
	int found = 0;
	/*
	 * flag keeps track of whether the file has been found.
	 * the loop will continue searching in the remaining directories
	 * even if the file is found in the current directory.
	 * It will only break out of the outer loop once the file is found or all directories have been searched.
	 */
	if (argc < 2)
	{
		perror("Invalid list.\n");
	}
	while (a < argc)
	{	/*step 1: retrieve file name*/
		name = argv[a];
		
		/*step 2: check if the file is in the PATH*/

		/*to get the value string of PATH, you call getenv*/

		val = getenv("PATH");
		if (val != NULL) /* val is not NULL so getenv found a match*/
		{
			tok = strtok(val, ":"); /*call on strtok to tokenize PATH*/
			/*searching in val*/
			printf("Search val: %s\n", val);
			while (tok != NULL)
			{
				char file_path[SIZE]; /*buffer to store the full path of the exec file*/
				/*snprintf is best for buffers to prevent overflows*/
			if (snprintf(file_path, sizeof(file_path), "%s/%s", tok, name) >= (int)sizeof(file_path))
			{
				perror("Error with snprintf.\n");
				return (-1);
			}
			if (access(file_path, F_OK) == 0) /*iF calling process has access to the file and the file exists*/
			{
				printf("%s\n", file_path);
				found = 1;
			}
	
			tok = strtok(NULL, ":"); /*UPDATE TOK BEFORE EXTING LOOP*/
			}
			if (!found)
			{
				printf("Not found in PATH.\n");
			}
		}
			found = 0;
			a++;
	}
	
	return (0);
}
