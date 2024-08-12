#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * check_args - checks for the correct number of arguments.
 * @argc: number of arguments.
 *
 * Return: void.
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * check_read - checks if reading from the source file was successful.
 * @result: result of the read operation.
 * @file: name of the source file.
 * @src_fd: file descriptor of the source file.
 * @dest_fd: file descriptor of the destination file.
 *
 * Return: void.
 */
void check_read(ssize_t result, char *file, int src_fd, int dest_fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
		if (src_fd != -1)
			close(src_fd);
		if (dest_fd != -1)
			close(dest_fd);
		exit(98);
	}
}

/**
 * check_write - checks if writing to the destination file was successful.
 * @result: result of the write operation.
 * @file: name of the destination file.
 * @src_fd: file descriptor of the source file.
 * @dest_fd: file descriptor of the destination file.
 *
 * Return: void.
 */
void check_write(ssize_t result, char *file, int src_fd, int dest_fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		if (src_fd != -1)
			close(src_fd);
		if (dest_fd != -1)
			close(dest_fd);
		exit(99);
	}
}

/**
 * check_close - checks if closing a file descriptor was successful.
 * @result: result of the close operation.
 * @fd: file descriptor.
 *
 * Return: void.
 */
void check_close(int result, int fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies the content of a file to another file.
 * @argc: number of arguments passed.
 * @argv: array of argument strings.
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Check the number of arguments */
	check_args(argc);

	/* Open the source file */
	src_fd = open(argv[1], O_RDONLY);
	check_read((ssize_t)src_fd, argv[1], -1, -1);

	/* Open the destination file */
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	check_write((ssize_t)dest_fd, argv[2], src_fd, -1);

	/* Copy the content from source to destination */
	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		check_write(bytes_written, argv[2], src_fd, dest_fd);
	}

	/* Check for read errors */
	check_read(bytes_read, argv[1], src_fd, dest_fd);

	/* Close file descriptors */
	check_close(close(dest_fd), dest_fd);
	check_close(close(src_fd), src_fd);

	return (0);
}
