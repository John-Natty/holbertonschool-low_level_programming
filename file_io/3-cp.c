#include "main.h"
#include <stdlib.h>

/**
 * close_error - prints error when closing a file descriptor fails
 * @fd: the file descriptor that failed to close
 *
 * Return: nothing, exits with code 100
 */
void close_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
 * read_error - prints error when reading a file fails
 * @filename: the name of the file that could not be read
 *
 * Return: nothing, exits with code 98
 */
void read_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
	exit(98);
}

/**
 * write_error - prints error when writing to a file fails
 * @filename: the name of the file that could not be written to
 *
 * Return: nothing, exits with code 99
 */
void write_error(char *filename)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
	exit(99);
}

/**
 * copy_file - copies the content of one file to another
 * @file_from: source file
 * @file_to: destination file
 *
 * Return: nothing
 */
void copy_file(char *file_from, char *file_to)
{
	int fd_from, fd_to, r, w;
	char buffer[1024];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
		read_error(file_from);

	fd_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		write_error(file_to);

	while ((r = read(fd_from, buffer, 1024)) > 0)
	{
		w = write(fd_to, buffer, r);
		if (w == -1 || w != r)
			write_error(file_to);
	}

	if (r == -1)
		read_error(file_from);

	if (close(fd_from) == -1)
		close_error(fd_from);

	if (close(fd_to) == -1)
		close_error(fd_to);
}

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
