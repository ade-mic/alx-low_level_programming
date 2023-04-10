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
	int i, add;

	add = 0;
	if (argc == 1)
	{
		printf("0\n");
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (!(atoi(argv[i])))
			{
				printf("Error\n");
				return (1);
			}
			else
			{
				add += atoi(argv[i]);
			}
		}
		printf("%d\n", add);
	}
	return (0);
}
