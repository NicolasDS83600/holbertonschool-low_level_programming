#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* error_exit - Prints an error message and exits with code
* @code: Exit code.
* @msg: Message format (like printf).
* @arg: Argument to include in the message.
*/
void error_exit(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, msg, arg);
	exit(code);
}

/**
* main - Copies the content of one file to another.
* @argc: Argument count.
* @argv: Argument vector.
*
* Return: 0 on success, exits with specific codes on failure.
*/
int main(int argc, char *argv[])
{
	int fd_from, fd_to;
	ssize_t r, w;
	char buf[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to %s\n", argv[2]);

	while ((r = read(fd_from, buf, 1024)) > 0)
	{
		w = write(fd_to, buf, r);
		if (w == -1 || w != r)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to %s\n", argv[2]);
		}
	}
	if (r == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from file %s\n", argv[1]);
	}
	if (close(fd_from) == -1)
		error_exit(100, "Error: Can't close fd %d\n", "fd_from");

	if (close(fd_to) == -1)
		error_exit(100, "Error: Can't close fd %d\n", "fd_to");
	return (0);
}
