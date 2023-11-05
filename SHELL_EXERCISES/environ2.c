#include <stdio.h>

extern char**environ;

int main(void)
{
	size_t a;

	for (a = 0; environ[a] != NULL; a++)
	{
		printf("%s\n", environ[a]);
	}
	return (0);
}
