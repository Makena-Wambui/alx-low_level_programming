#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int main(void)
{
	char *buf = 0;
	size_t n = 0;
	ssize_t chars_read;
	
	printf("$ ");
	chars_read = getline(&buf, &n, stdin);

	if (chars_read == -1)
	{
		perror("getline encountered an error");
		free(buf);
		exit(EXIT_FAILURE);
	}
	printf("%s", buf);

	free(buf);
	return (0);
}
