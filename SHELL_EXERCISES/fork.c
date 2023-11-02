#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{
	pid_t ppid;
	pid_t child_pid;

	ppid = getpid();

	printf("The pid of the parent before the call to fork:%u\n", ppid);

	/*now call fork to craete a new child*/
	child_pid = fork();

	printf("After fork\n");
	/*this statement will be printed twice, both in child and in parent.*/
	ppid = getpid();
	printf("PID IS: %u\n", ppid);
	(void)child_pid; /*cast to void to suppress compiler warnings*/
	return (0);
}
