#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>
#include <ctype.h>
/**
 * main - main program to perform arithmetic operation
 * @argc: number of argument provided
 * @argv: array of argumenr provided
 *
 * Return: return 0 on success
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	char *operator;

	if (argv[1] && argv[2] && argv[3])
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		operator = argv[2];
	}


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if ((strcmp(argv[2], "/") == 0 || strcmp(argv[2], "%") == 0) && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	if (get_op_func(operator) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = get_op_func(operator)(num1, num2);

	printf("%d\n", result);
	return (0);
}
