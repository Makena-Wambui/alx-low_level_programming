#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
/**
 * main - this function is the entry point of the program.
 *
 * Return: 0 on success.
 * Description: this function prints the PID of the parent process.
 */
int main(void)
{
	pid_t id;

	id = getppid();
	printf("%u\n", id);
	return (0);
}
