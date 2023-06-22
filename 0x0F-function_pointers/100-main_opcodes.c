#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to print opcode of main function
 * @argc: arguement count
 * @argv: arguement vector
 *
 * Return: 0 ar success
 */

int main(int argc, char *argv[])
{
	int i, n;
	unsigned char *p;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	n = atoi(argv[1]);
	p = (unsigned char *)main;

	for (i = 0; i < n; i++)
	{
		printf("%02x", p[i]);
		printf(" ");
	}
	printf("\n");
	return (0);
}
