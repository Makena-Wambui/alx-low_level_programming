#include "main.h"
/**
 * print_error_and_exit - this function prints an error message.
 * @code: the exit code.
 * @message: error message
 * @arg: pointer to string.
 * Return: nothing.
 */
void print_error_and_exit(int code, const char *message, const char *arg)
{
	dprintf(STDERR_FILENO, message, arg);
	exit(code);
}
/**
 * main - this is the entry point of the program.
 * @argc: these are the number of arguments supplied to the program.
 * @argv: array of strings containing the arguments.
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int fd_1, fd_2;
	char buf[BUFSIZE];
	ssize_t b_read, written;
	const char *file_from = argv[1];
	const char *file_to = argv[2];

	if (argc != 3)
		print_error_and_exit(97, "Usage: cp file_from file_to\n", NULL);
	fd_1 = open(file_from, O_RDONLY);
	if (fd_1 == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	fd_2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR |
			S_IRGRP | S_IWGRP | S_IROTH);
	if (fd_2 == -1)
		print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	do {
	b_read = read(fd_1, buf, BUFSIZE);
	if (b_read == -1)
		print_error_and_exit(98, "Error: Can't read from file %s\n", file_from);
	written = write(fd_2, buf, b_read);
	if (written == -1)
		print_error_and_exit(99, "Error: Can't write to file %s\n", file_to);
	} while (b_read > 0);
	if (close(fd_1) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_1);
	exit(100);
	}
	if (close(fd_2) == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_2);
	exit(100);
	}
	return (0);
}
