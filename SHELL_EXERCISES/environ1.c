#include <stdio.h>

int main(int argc, char **av, char **env)
{
	size_t a;

	while (env[a] != NULL)
	{
		printf("%s\n", env[a]);
		a++;
	}
	(void)argc;
	(void)av;
	return (0);
}
