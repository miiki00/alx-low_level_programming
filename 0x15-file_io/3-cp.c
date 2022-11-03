#include "main.h"

/**
 * free_and_close - fress memory allocated by malloc and closes any file
 * descriptor that is opened by the program.
 * @size_fd: The number of arguments passed int the valist.
 * @list: The va_list that contain the arguments.
 *
 * Return: Void.
 */
void free_and_close(int size_fd, va_list list)
{
	int i, fd, ret;

	for (i = 0; i <= size_fd; i++)
	{
		if (i == size_fd && size_fd == 2)
			free(va_arg(list, char *));
		if (i != size_fd)
		{
			fd = (va_arg(list, int));
			ret = close(fd);
			if (ret == -1)
				_err_code(0, 100, &fd);
		}
	}

}

/**
 * _err_code - prints an error message correspondig to the error
 * code given and exit with the give code status.
 * @size_fd: The number of valist args passed.
 * @code: The error code.
 * @data: The name of the data that caused the error.
 * Return: Void.
 */
void _err_code(int size_fd, int code, const void *data, ...)
{
	va_list list;

	if (size_fd != 0)
	{
		va_start(list, data);
		free_and_close(size_fd, list);
		va_end(list);
	}
	switch (code)
	{
		case 97:
			dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
			exit(code);
		case 98:
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", (char *)data);
			exit(code);
		case 99:
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", (char *)data);
			exit(code);
		case 100:
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", *((int *)data));
			exit(code);
	}
}

/**
 * main - a program that copies a content of a file to another file.
 * @ac: The number of arguments.
 * @av: The actual arguments array of strings.
 *
 * Return: 0 on success, 1 on error.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t readed, ret;
	char *buf = NULL;

	if (ac != 3)
		_err_code(0, 97, NULL);
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		_err_code(0, 98, av[1]);
	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 00664);
	if (fd_to == -1)
		_err_code(1, 99, av[2], fd_from);
	do {
		buf = malloc(sizeof(char) * BUFF_SIZE);
		if (buf == NULL)
		{
			_err_code(2, 0, NULL, fd_from, fd_to);
			return (1);
		}
		readed = read(fd_from, buf, BUFF_SIZE);
		if (readed == -1)
			_err_code(2, 98, av[1], fd_from, fd_to, buf);
		ret = write(fd_to, buf, readed);
		if (ret != readed)
			_err_code(2, 99, av[2], fd_from, fd_to, buf);
	} while (readed == BUFF_SIZE);
	return (0);
}
