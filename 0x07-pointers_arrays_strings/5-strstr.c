#include "main.h"
#include <stddef.h>
#include <string.h>
#include <stdio.h>
/**
 * *_strstr - searches a string for first occurence of the a substring
 * @haystack: string to be searched
 * @needle: substring to be searched with in haystack string
 *
 * Return: return a pointer the first occurence of needle in haystack
 * bytes fom accept
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
	char *occur;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j =  0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				continue;
			}
			else
				break;
		}
		if (haystack[i + j] == needle[j])
		{
			occur = &haystack[i];
			return (occur);
		}
	}
	return (NULL);
}
