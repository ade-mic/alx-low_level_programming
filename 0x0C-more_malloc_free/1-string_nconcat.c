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
	unsigned int n1, n2, i, j;

	/* check string */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	/* length of each string */
	n1 = strlen(s1);
	n2 = strlen(s2);
	if (n >= n2)
		n = n2;
	/* Allocate memory */
	mem = malloc((n1 * sizeof(char) + n1 * sizeof(char) + 1));
	if (!mem)
		return (NULL);
	for (i = 0; i <= n1; i++)
	{
		mem[i] = s1[i];
		/* check for null terminator */
		if (s1[i] == '\0')
		{
			mem[i] = s2[0];
			for (j = 1; j < n; j++)
				mem[i + j] = s2[j];
		}
	}
	mem[i + j] = '\0';
	return (mem);
}
