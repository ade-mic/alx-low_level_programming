#include <stdio.h>
void print_alphabet_x10(void);
/**
 * main - Program Entrance
 * Return: Always return a value of 0 if successful
 */
int main(void)
{
	print_alphabet_x10();
	return (0);
}

/**
 * print_alphabet - print the alphabet in lower case
 * Return: void
 */
void print_alphabet_x10(void)
{
	char alpha;
	int i;
	for (i = 0; i < 10; i++)
		{
			for (alpha = 'a'; alpha <= 'z'; alpha++)
			{
				putchar(alpha);
			}
			putchar('\n');
		}
}
