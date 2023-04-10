#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry to the C program
 * @argc: the size of arguements array
 * @argv: arguement array
 * Return: 0 for success and any other digit for error
 */
int main(int argc, char *argv[])
{
	int mul;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
}
