#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * error_usage - prints usage error to the console
 * @error_message: error message
 * @exit_code: exit code
 * Return: Nothing
 */
void error_usage(const char *error_message, int exit_code)
{
	dprintf(2, "%s\n", error_message);
	exit(exit_code);
}
/**
 * error_fn - prints other errors
 * @error_message: error message
 * @file: file with error
 * @exit_code: exit code
 * Return: Nothing
 */
void error_fn(const char *error_message, const char *file, int exit_code)
{
	dprintf(2, "%s %s\n", error_message, file);
	exit(exit_code);
}

/**
 * error_close - prints other errors
 * @error_message: error message
 * @fd: file descriptor value
 * @exit_code: exit code
 * Return: Nothing
 */
void error_close(const char *error_message, int fd, int exit_code)
{
	dprintf(2, "%s %i\n", error_message, fd);
	exit(exit_code);
}

/**
 * main - program creates a copy of file
 * @argc: arguement count
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	char *file_from, *file_to;
	int fd_from, fd_to;
	char buffer[BUFFER_SIZE];
	ssize_t nb_read, nb_written;

	if (argc !=3)
		error_usage("cp file_from file_to", 97);
	file_from = argv[1];
	file_to = argv[2];

	fd_from = open(file_from, O_RDONLY);
	if(fd_from == -1)
		error_fn("Error: Can't read from file", file_from, 98);

	fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_fn("Error: Can't write to", file_to, 99);

	while ((nb_read = read(fd_from, buffer, BUFFER_SIZE) > 0))
	{
		nb_written = write(fd_to, buffer, nb_read);
		if (nb_written == -1)
			error_fn("Error: Can't write to", file_to, 99);
		if(nb_written != nb_read)
			error_fn("Error: Cant't write to", file_to,  99);
	}
	if (nb_read == -1)
		error_fn("Error: Can't read from file", file_from, 98);
	if (close(fd_from) == -1)
		error_close("Error: Can't close", fd_from, 100);
	if (close(fd_to) == -1)
		error_close("Error: Cant't close fd_to", fd_to, 100);
	close(fd_from);
	close(fd_to);
	return (0);
}
