#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX
 * standard output.
 * @filename: The name of the file to be printed.
 * @letters: The number of letters to be printed.
 *
 * Return: on success the actual number of letters readed and printed
 * on error 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t ret, readed;
	char *buf = NULL;

	if (filename == NULL || letters == 0)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	readed = read(fd, buf, letters);
	if (readed == -1)
	{
		free(buf);
		return (0);
	}
	ret = write(STDOUT_FILENO, buf, readed);
	if (ret == -1)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fd);
	return (ret);
}
