#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - check the code for Holberton School students.
 *@width: int
 *@height: int
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	{
		int **iarray;
		int i, n;

		if (width <= 0 || height <= 0)
			return (NULL);

		iarray = malloc(sizeof(int) * height);

		if (iarray == NULL)
		{
			free(iarray);
			return (NULL);
		}

		for (i = 0; i < height; i++)
		{
			iarray[i] = malloc(sizeof(int) * width);
			if (iarray[i] == NULL)
			{
				free(iarray[i]);
				return (NULL);
			}

			for (n = 0; n < width; n++)
			{
				iarray[i][n] = 0;
			}
		}
		return (iarray);
	}

}
