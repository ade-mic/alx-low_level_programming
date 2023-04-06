#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strlen_recursion - print reverse recursion
 * @s: string to be printed
 *
 * Return: int length of s
 */

int _strlen_recursion(char *s)
{

	if (*s == '\0')
	{
		return (0);
	}
	else
		return (1 + _strlen_recursion(s + 1));
}
