#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenates two  string
 * @s1: string 1
 * @s2: string 2
 * n:  nbytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *mem, *s1_temp, *s2_temp;
	unsigned int n1, n2, i;

	/* check string */
	if (s1 == NULL)
		s1_temp = "";
	if (s2 == NULL)
		s2_temp = "";
	s1_temp = s1;
	s2_temp = s2;
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
		if (s1_temp[i] == '\0')
		{
			mem[i] = s2_temp[0];
			break;
		}
		else
			mem[i] = s1_temp[i];
	}
	for  (i = 1; i < n2; i++)
	{
		mem[i + n1] = s2_temp[i];
	}
	return (mem);
}
