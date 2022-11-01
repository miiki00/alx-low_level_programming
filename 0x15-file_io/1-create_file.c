#include "main.h"

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
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
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
