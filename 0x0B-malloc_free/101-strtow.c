#include "main.h"
#include <stdlib.h>


/**
 * strtow - this function separates the words of a string
(* a blank line
 *@str: the string
* Description: this function separates words)?
(* section header: the header of this function is holberton.h)*
* Return: this function return a char pointer to a words.
*/

char **strtow(char *str)
{
	char **polo;
	int i, j, k, l, words, lenght;

	words = 0, k = 0, i = 0;

	if (str == NULL || *(str) == '\0')
		return (NULL);

	while (*(str + i) != '\0')
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;
		i++;
	}

	if (words == 0)
		return (NULL);
	polo = malloc((words + 1) * sizeof(*polo));

	if (polo == NULL)
		return (NULL);

	for (i = 0; str[i] !=  '\0' && k < words; i++)
	{
		if (str[i] != ' ')
		{
			lenght = 0;
			j = i;
			while (str[j] != ' ' && str[j] != '\0')
				j++, lenght++;
			polo[k] = malloc((lenght + 1) * sizeof(**polo));
			if (polo[k] == NULL)
			{
				for (k--; k >= 0; k--)
					free(polo[k]);
				free(polo);
				return (NULL);
			}
			for (l = 0; l < lenght; l++, i++)
				polo[k][l] = str[i];
			polo[k++][l] = '\0';
		}
	}

	polo[k] = '\0';
	return (polo);
}
