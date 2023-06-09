#include <stdio.h>

/**
 * main - program entry
 * @argc:  lenght of array of arguement
 * @argv: arguement vector
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	while (argc--)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
