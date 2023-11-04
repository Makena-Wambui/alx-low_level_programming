#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
#include <stdio.h>

int main(void)
{
	int status;
	pid_t child;
	char *args[] = {"/bin/ls", "-l", "/tmp", NULL};

	for (int i = 0; i < 5; i++)
	{
		child = fork();
		if (child == -1)
		{
			perror("Fork failed\n");
			return (1);

		}
		if (child == 0)
		{
			execve(args[0], args, NULL);
		}
		else
		{
			waitpid(child, &status, 0);
		}
		if (WIFEXITED(status))
		{
			printf("Child exit normally with %d\n", WEXITSTATUS(status));

		}
		if (WIFSIGNALED(status))
		{
			printf("Child was terminated by a signal with %d\n", WTERMSIG(status));
		}
	
	}
	return (0);
}
