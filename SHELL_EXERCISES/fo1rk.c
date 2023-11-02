#include <unistd.h>
#include <stdio.h>
#include <sys/types.h>

int main(void)
{
	pid_t child_id;
	pid_t id;

	child_id = fork();
	if (child_id == -1)
	{
	
		perror("Error creating child");
		return (1);
	
	}
	id = getpid();
	printf("Pid: %u\n", id);
	if (child_id == 0)
	{
		printf("I am the child\n");
	
	}
	else
	{
		printf("I am the parent. %u\n", child_id);
	}
	return (0);
}
