#include "main.h"

/**
 * append_text_to_file - appends text to a file.
 * Description: If the file does not exist it will not creat the file.
 * @filename: The name of the file.
 * @text_content: The content you went to append.
 *
 * Return: 1 on success -1 on error.
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
	return (1);
}
