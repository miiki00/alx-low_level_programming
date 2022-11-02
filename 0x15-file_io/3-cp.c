#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 * Description: If the file does not exist it will not creat the file.
 * @filename: The name of the file.
 * @text_content: The content you went to append.
 *
 * Return: The number of bytes appended, -1 on error.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t ret, len;
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(fd, text_content, len);
		if (ret != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (ret);
}

/**
 * create_file - creates a file with name @filename and content
 * form @text_content.
 * Descritption: If the file exists it will be repalced with the one
 * you created. If the content is empty it will creat an empty file.
 * @filename: The name of the file to be created.
 * @text_content: The content of the file.
 *
 * Return: 1 on success -1 on error.
 */
int create_file(const char *filename, char *text_content)
{
	int len, fd;
	ssize_t ret;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 00664);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		len = strlen(text_content);
		ret = write(fd, text_content, len);
		if (ret != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}

/**
 * _err_code - prints an error message correspondig to the error
 * code given and exit with the give code status.
 * @code: The error code.
 * @data: The name of the data that caused the error.
 *
 * Return: Void.
 */
void _err_code(int code, const void *data)
{
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
 * copy_from_to - copies text from the file @from to the file @to.
 * @from: The file to copy form.
 * @to: The fiel to copy to.
 *
 * Return: 1 on success -1 on error.
 */
int copy_from_to(const char *from, const char *to)
{
	int fd_from;
	ssize_t readed, ret;
	char *buf = NULL;

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
		_err_code(98, from);
	ret = create_file(to, NULL);
	if (ret == -1)
		_err_code(99, to);
	do {
		buf = malloc(sizeof(char) * BUFF_SIZE);
		if (buf == NULL)
			return (-1);
		readed = read(fd_from, buf, BUFF_SIZE);
		if (readed == -1)
		{
			close(fd_from);
			free(buf);
			_err_code(98, from);
		}
		printf("this byte readed %lu\n", readed);
		ret = append_text_to_file(to, buf);
		if (ret != readed)
		{
			close(fd_from);
			free(buf);
			_err_code(99, to);
		}
		free(buf);
		buf = NULL;
	} while (readed == BUFF_SIZE);
	return (1);
}

/**
 * main - A program that copies content of a text file
 * to another text file based on given parameters.
 * @ac: The Number of arguments.
 * @av: Actual arguments.
 *
 * Return: on success 0 on error number greater than 0.
 */
int main(int ac, char **av)
{
	int ret;

	if (ac != 3)
		_err_code(97, av[0]);
	ret = copy_from_to(av[1], av[2]);
	if (ret == -1)
		return (1);
	return (0);
}
