#include <stdio.h>
#include <string.h>


int main(void)
{
	char *my_name = "My-name-is-Makena";
	/*declare an array of string pointers to store the tokens*/
	char *tokens_storage[15];
	char *token;
	int a = 0;
	int b;

	/*strtok returns the first token it encounters*/
	token = strtok(my_name, "-");
	if (token == NULL)
	{
	perror("strtok");
	return 1;
	}
	
	/*if token is NULL then it means no more tokens can be extracted from the string*/
	while (token != NULL && a < 15)
	{
		/*store each token in the array*/
		tokens_storage[a] = token;
		a++;
		token = strtok(NULL, "-");
		/**
		 * When you pass NULL as the first argument to strtok in 
		 * subsequent calls, it continues tokenizing the same
		 * string from the last position.
		 */
		if (token == NULL && a < 15)
		{
			perror("strtok");
			return 1;
		}
	}
	for (b = 0; b < a; b++)
	{
		if (printf("Token %d: %s\n", b + 1, tokens_storage[b]) < 0)
		{
			perror("printf");
		}
	}
	return (0);
}
