#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a nested loop that prints a grid of integers
 * @width: width input of the grid
 * @height: height input of the gird
 * Return: pointer to 2 dimensional array
 */

int **alloc_grid(int width, int height)
{
	int **waa;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	waa = malloc(sizeof(int *) * height);

	if (waa == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		waa[a] = malloc(sizeof(int) * width);

		if (waa[a] == NULL)
		{
			for (; a >= 0; a--)
				free(waa[a]);

			free(waa);
			return (NULL);
		}
	}
	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			waa[a][b] = 0;
	}

	return (waa);
}
