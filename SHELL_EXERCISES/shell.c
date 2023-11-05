#include <stdio.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
	int flush = 0;
	int state;
	pid_t id;
	char *buf = NULL;
	ssize_t chars;
	size_t n = 0;
	size_t len;

	while(1)
	{
		printf("#cisfun$ ");
		fflush(stdout);
		/* fflush returns 0 on success and EOF on error*/
		if (flush == -1)
		{
			perror("Error flushing\n");
			return (1);
		}
		/*now let us read data using get line*/
		chars = getline(&buf, &n, stdin);
		if (chars == -1)
		{
			perror("Error reading input");
			return (1);
		}
		/*now remove the /n*/
		len = strlen(buf);
		if (len > 0 && buf[len -1] == '\n')
		{
			buf[len - 1] = '\0';
	
		}

		id = fork();
		if (id == -1)
		{
			perror("Child not created\n");
			return (1);
		}
		if (id == 0)
		{	/*call malloc to allocate memmory for av dynamically*/
			char **av = (char **)malloc(2 * sizeof(char *));
            		av[0] = buf;
            		av[1] = NULL;
			if (execve(buf, av, NULL) == -1)
			{
				perror("Execve failed\n");
				free(av);
				return (1);
			}
			free(av);
		}
		else
		{
			waitpid(id, &state, 0);
		}
	}
		/*free buf outside the loop after the loop exits so that memory allocated for buf is not freed before used in the child process*/
		free(buf);

		return (0);
}
