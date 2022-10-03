#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2D array
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: If width or height is 0 or negative, return NULL
 */

int **alloc_grid(int width, int height)
{
	int **two_D;
	int height_index;
	int width_index;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	two_D = malloc(sizeof(int *) * height);

	if (two_D == NULL)
	{
		return (NULL);
	}

	for (height_index = 0; height_index < height; height_index++)
	{
		two_D[height_index] = malloc(sizeof(int) * width);
		if (two_D[height_index] == NULL)
		{
			for (; height_index >= 0; height_index--)
				free(two_D[height_index]);
			free(two_D);
			return (NULL);
		}
	}
	for (height_index = 0; height_index < height; height_index++)
	{
		for (width_index = 0; width_index < width; width_index++)
			two_D[height_index][width_index] = 0;
	}
	return (two_D);
}
