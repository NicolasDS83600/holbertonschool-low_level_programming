#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* append_text_to_file - Appends text at the end of a file.
* @filename: Name of the file.
* @text_content: NULL-terminated string to add at the end of the file.
*
* Return: 1 on success, -1 on failure.
*         Do not create the file if it does not exist.
*         If filename is NULL, return -1.
*         If text_content is NULL, do not add anything, return 1
*         if file exists.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len] != '\0')
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
