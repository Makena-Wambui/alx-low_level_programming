#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>

int main(int argc, char *argv[])
{
	/*file infor returned is stored in struct stat*/
	struct stat buf;
	size_t a; /*to iterate throught the argument list*/
	int val = 0;
	if (argc < 2) /*not a valid list*/
	{
		printf("Path to file not provided\n");
		return (1);
	}
	for (a = 1; argv[a] != NULL; a++)
	{
		val = stat(argv[a], &buf);
		if (val == 0)
		{
			printf("File has been found and infor retrieved.\n");
		}
		else
		{
			perror("Error encountered.\n");
		}
	}
	return (0);
}
