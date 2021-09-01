#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array
 * @array: arr of ints
 * @size: size of arr
 * @value: value to find in arr
 * Return: print or -1 if fail
 */
int binary_search(int *array, size_t size, int value)
{
  int right = 0, left = 0, middle = 0, idx = 0;

  if (array == NULL || size == 0)
    return (-1);

  left = size - 1;

  while (right <= left)
    {
      idx = 0;
      printf("Searching in array: ");
      for (idx = right; idx <= left; idx++)
	if (idx == left)
	  {
	    printf("%d\n", array[left]);
	    break;
	  }
	else
	  printf("%d, ", array[idx]);

      middle = (right + left) / 2;
      if (array[middle] < value)
	right = middle + 1;
      else if (array[middle] > value)
	left = middle - 1;
      else
	return (middle);
    }

  return (-1);
}
