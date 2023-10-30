#include "main.h"
/**
 * read_textfile - this function reads a text file and
 * prints it to the POSIX standard output.
 * @filename:  a pointer to a null-terminated string that
 * represents the name of the file you want to read.
 * @letters: the number of letters it should read and print
 * Return:number_of_bytes_written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t letters_read, number_of_bytes_written;
	void *buf; /* to hold the content being read*/

	if (filename == NULL)
		return (0);
	/*open returns newly created fd or -1 if error is encountered*/
	fd = open(filename, O_RDONLY);
	/*if the file can not be opened*/
	if (fd == -1)
	{
		perror("Error opening the file");
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}
	letters_read = read(fd, buf, letters);
	if (letters_read == -1)
	{
		perror("Error reading from the file");
		free(buf);
		close(fd);
		return (0);
	}
	/**
	 * if write fails or does not write
	 * the expected amount of bytes, return 0
	 */
	number_of_bytes_written = write(STDOUT_FILENO, buf, letters_read);
	if (number_of_bytes_written == -1 || number_of_bytes_written != letters_read)
	{
		perror("error writing to stdout");
		free(buf);
		close(fd);
		return (0);
	}
	free(buf);
	close(fd);
	/*returns the actual number of letters it could read and print*/
	return (number_of_bytes_written);
}
