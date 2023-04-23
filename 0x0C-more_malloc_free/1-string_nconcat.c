#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - copy a string.
 *@s1: the first string
 *@s2: the second string
 *@n: the number of bytes
 * Return: returns a pointer to a char..
 *
 *
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *polo;

	unsigned int i, j, k, l;


	i = 0, l = 0;
	s1 == NULL ? s1 = "" : s1;
	s2 == NULL ? s2 = "" : s2;
	while (*(s1 + i) != '\0')
		i++;
	while (*(s2 + l) != '\0')
		l++;
	if (n >= l)
		n = l;

	polo = malloc((i + n + 1) * sizeof(char));
	if (polo == NULL)
		return (NULL);
	for (j = 0, k = 0; j < (i + n); j++)
	{
		if (j < i)
			polo[j] = s1[j];
		else
			polo[j] = s2[k++];
	}
	polo[j] = '\0';

	return (polo);
}
