#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int isNumber(char *s);
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
			if (!(isNumber(argv[i])))
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

/**
 * isNumber - check if a string is a number then return 0 if true
 * @s: string
 * Return: 0 on success
 */

int isNumber(char *s)
{
	int i;

	i = strlen(s);
	while (i--)
	{
		if (s[i] >= '0' && s[i] <= '9')
			continue;
		return (0);
	}
	return (1);
}
