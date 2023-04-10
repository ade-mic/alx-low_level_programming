#include <stdio.h>
/**
 * main - Entry to the C program
 * @argc: the size of arguements array
 * @argv: arguement array
 * Return: 0 for success and any other digit for error
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc <= 1)
		printf("No arguement is given\n");
	else
		for (i = 1; i < argc; i++)
		{
			printf("%s\n",argv[i]);
		}
	return (0);
}
