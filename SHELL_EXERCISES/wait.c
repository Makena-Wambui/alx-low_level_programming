#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include <sys/types.h>
/**
 * wait syscall returns pid of the terminated child.
 * the state variable stores the exit status of the child.
 * exit status provides information about how the child terminated.
 * wait function updates the state variable with this information.
 * interpret the exit status using macros provided by the wait family of
 * functions.
 */
int main(void)
{
	pid_t child, wait_pid;
	int state;

	child = fork();
	if (child == -1)
	{
		perror("Child not created\n");
		return (1);
	}
	if (child == 0)
	{
		printf("Waaaait!\n");
	}
	else
	{	/*wait will suspend execution of parent until child changes state*/
		wait_pid = wait(&state);
		printf("Waiting for you!\n");
		if (wait_pid == -1)
		{
			perror("Wait error\n");
	

		}
		printf("%d\n", wait_pid);
	}
	if (WIFEXITED(state))
	{
		/*child was terminated normally*/
		printf("Child terminated normally with %d\n", WEXITSTATUS(state));
	}
	else if (WIFSIGNALED(state))
	{
		printf("Child terminated by a signal with %d\n", WTERMSIG(state));

	}
	else
	{
		printf("Child terminated abnormally\n");
	}
	return (0);
}
