#include <stdio.h>
/**
 * main - Entry to the C program
 * @argc: the size of arguements array
 * @argv: arguement array
 * Return: 0 for success and any other digit for error
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
