#include "main.h"
/**
 * read_textfile - a function that reads a textfile and prints it to the POSIX
 * @filename: file to be read
 * @letters: the number of letters it should read nd print
 * Return: the acutal number of letters it should read and print
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t nb_read, tb_read, b_read, nb_write;
	int fd;    /** file descriptor */
	char *temp; /** temporarily stored the read character **/
	int buffsize = ((int) letters + 1) * sizeof(char);

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	temp = malloc(buffsize);
	if (temp == NULL)
	{
		free(temp);
		close(fd);
		return (0);
	}
	tb_read = letters;
	nb_read = 0;
	while (nb_read <= tb_read)
	{
		b_read = read(fd, (temp + nb_read), 1);
		if (b_read == -1)
		{
			close(fd);
			free(temp);
			return (0);
		}
		if (b_read == 0)
			break;
		nb_read += b_read;
	}
	temp[nb_read] = '\0';
	nb_write = write(1, temp, nb_read);
	if (nb_read != nb_write)
	{
		free(temp);
		close(fd);
		return (0);
	}
	free(temp);
	close(fd);
	return (nb_write);
}
