#include <stdlib.h>
#include <string.h>
/**
 * *string_nconcat - concatenates two  string
 * @s1: string 1
 * @s2: string 2
 * @n:  nbytes of s2
 * Return: pointer to new memory allocation
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem;
	unsigned int n1, n2, i;

	/* check string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of each string */
	n1 = strlen(s1);
	n2 = n;
	if (n >= strlen(s2))
		n2 = strlen(s2);
	/* Allocate memory */
	mem = malloc((n1 + n2) * sizeof(char));
	if (!mem)
		return (NULL);
	for (i = 0; i <= n1; i++)
	{
		/* check for null terminator */
		if (s1[i] == '\0')
		{
			mem[i] = s2[0];
			break;
		}
		else
			mem[i] = s1[i];
	}
	for  (i = 1; i < n2; i++)
	{
		mem[i + n1] = s2[i];
	}
	return (mem);
}
