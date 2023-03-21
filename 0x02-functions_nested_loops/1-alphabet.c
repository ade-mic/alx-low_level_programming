#include <stdio.h>
void print_alphabet(void);
/**
 * main - Program Entrance
 * Return: Always return a value of 0 if successful
 */
int main(void)
{
	print_alphabet();
	return (0);
}

/**
 * print_alphabet - print the alphabet in lower case
 * Return: void
 */
void print_alphabet(void)
{
	char alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	putchar('\n');
}
