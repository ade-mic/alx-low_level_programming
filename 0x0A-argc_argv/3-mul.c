#include <stdio.h>
#include <stdlib.h>
/**
 * main - program entry
 * @argc:  lenght of array of arguement
 * @argv: arguement vector
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int ans;

	if (argc <= 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		ans = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", ans);
		return (0);
	}
}
