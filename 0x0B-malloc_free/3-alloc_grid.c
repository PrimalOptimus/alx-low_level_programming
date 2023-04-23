#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: int 1
 * @height: int 2
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int **new_height;
	int i, j;

	i = 0;
	if (width <= 0 || height <= 0 || (width == 1 && height == 1))
		return (NULL);
	new_height = malloc(height * sizeof(*new_height));
	if (new_height == NULL)
		return (NULL);
	while (i < height)
	{
		new_height[i] = malloc(width * sizeof(int));
		if (new_height[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(new_height[i]);
			free(new_height);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			new_height[i][j] = 0;
		i++;
	}

	return (new_height);
}
