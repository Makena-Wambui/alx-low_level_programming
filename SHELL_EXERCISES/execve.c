#include <stdio.h>
#include <unistd.h>

int main(void)
{
	char *argv[] = {"/bin/ls", "-l", "-a", "-t", "/usr/", NULL};

	execve("/bin/ls", argv, NULL);

	return (0);
}
