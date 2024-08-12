#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

/**
 * verify_args - ensures the correct number
 * of command-line arguments are provided.
 * @arg_count: total number of command-line arguments.
 *
 * Return: void.
 */
void verify_args(int arg_count)
{
	if (arg_count != 3)
	{
		dprintf(STDERR_FILENO,
			"Usage: cp source_file destination_file\n");
		exit(97);
	}
}

/**
 * validate_source - verifies if the source file can be read.
 * @result: result from the read operation.
 * @source: name of the source file.
 * @src_fd: file descriptor for the source file, or -1.
 * @dest_fd: file descriptor for the destination file, or -1.
 *
 * Return: void.
 */
void validate_source(ssize_t result, char *source, int src_fd, int dest_fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to read from file %s\n", source);
		if (src_fd != -1)
			close(src_fd);
		if (dest_fd != -1)
			close(dest_fd);
		exit(98);
	}
}

/**
 * validate_destination - ensures the destination file
 * can be written to or created.
 * @result: result from the write operation.
 * @destination: name of the destination file.
 * @src_fd: file descriptor for the source file, or -1.
 * @dest_fd: file descriptor for the destination file, or -1.
 *
 * Return: void.
 */
void validate_destination(ssize_t result, char *destination, int src_fd,
		int dest_fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to write to %s\n", destination);
		if (src_fd != -1)
			close(src_fd);
		if (dest_fd != -1)
			close(dest_fd);
		exit(99);
	}
}

/**
 * verify_close - confirms file descriptors are closed properly.
 * @result: result of the close operation.
 * @fd: file descriptor.
 *
 * Return: void.
 */
void verify_close(int result, int fd)
{
	if (result == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Unable to close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - copies contents from one file to another.
 * @arg_count: number of command-line arguments.
 * @arg_values: array of argument strings.
 *
 * Return: 0 on successful execution.
 */
int main(int arg_count, char *arg_values[])
{
	int src_fd, dest_fd;
	ssize_t bytes_read, bytes_written;
	char buffer[1024];
	mode_t permissions = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	/* Verify argument count */
	verify_args(arg_count);

	/* Open source file */
	src_fd = open(arg_values[1], O_RDONLY);
	validate_source((ssize_t)src_fd, arg_values[1], -1, -1);

	/* Open destination file */
	dest_fd = open(arg_values[2], O_WRONLY | O_CREAT | O_TRUNC, permissions);
	validate_destination((ssize_t)dest_fd, arg_values[2], src_fd, -1);

	/* Transfer data from source to destination */
	while ((bytes_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);
		validate_destination(bytes_written, arg_values[2], src_fd, dest_fd);
	}

	/* Check for read errors */
	validate_source(bytes_read, arg_values[1], src_fd, dest_fd);

	/* Close file descriptors */
	verify_close(close(dest_fd), dest_fd);
	verify_close(close(src_fd), src_fd);

	return (0);
}
