#include "main.h"
/**
 * read_textfile - a function that reads a textfile and prints it to the POSIX
 * standard output
 * @filename: file to be read
 * @letters: the number of letters it should read nd print
 *
 * Return: the acutal number of letters it should read and print
 **/
size_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nb_read;
	ssize_t nb_write; /** function read return value */
	int fd;    /** file descriptor */
	char *temp; /** temporarily stored the read character **/
	int buffsize = ((int) letters + 1) * sizeof(char);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	temp = malloc(buffsize + 2);
	if (temp == NULL)
	{
		free(temp);
		close(fd);
		return (0);
	}

	nb_read = read(fd, temp, letters);
	if (nb_read < 0)
	{
		close(fd);
		free(temp);
		return (0);
	}
	temp[nb_read] = '\0';
	nb_write = write(1, temp, nb_read);
	if (nb_write != nb_read)
	{
		free(temp);
		close(fd);
		return (0);
	}
	free(temp);
	close(fd);
	return (nb_write);
}
