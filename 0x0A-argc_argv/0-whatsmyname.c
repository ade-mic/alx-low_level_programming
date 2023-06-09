#include <stdio.h>

/**
 * main - program entry
 * @argc:  lenght of array of arguement
 * @argv: arguement vector
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	printf("%s \n", argv[argc - 1]);
	return (0);
}
