#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - Creates a file or truncates an existing one.
 * @filename: Name of the file to create.
 * @text_content: NULL-terminated string to write into the file.
 *
 * Return: 1 on success, -1 on failure.
 *         Failure includes: filename is NULL, file can't be created,
 *         file can't be opened, or write fails.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
		len++;

		w = write(fd, text_content, len);

		if (w == -1 || w != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
