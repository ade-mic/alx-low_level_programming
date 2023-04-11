#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - Entry to the C program
 * @argc: the size of arguements array
 * @argv: arguement array
 * Return: 0 for success and any other digit for error
 */
int change (int cent);

int main(int argc, char *argv[])
{
	int cent;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	printf("%d\n",change(cent));
	return (0);
}

/**
 * change - find the minimum number of coins to make change for an amount of
 * money
 * @cent: Money
 * Return: return the change count
 */
int change(int cent)
{
	int i, count_c;
	int change_arr[5] = {25, 10, 5, 2, 1};

	if (cent < 0)
		printf("0\n");
	else
	{
		for (i = 0; i < 5; i++)
		{
			if (cent == change_arr[i])
				return (1);
			else if (cent % change_arr[i] == 0)
			{
				count_c = cent / change_arr[i];
				return (count_c);
			}
			else if (cent / change_arr[i] >= 1)
			{
				count_c = (cent / change_arr[i]) \
					+ change(cent % change_arr[i]);
				return (count_c);
			}
		}
	}
	return (1);
}
