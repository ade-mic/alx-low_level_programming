#include "function_pointers.h"
/**
 * print_name - print a name
 * @name: name of function
 * @f: a function to print_name
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
