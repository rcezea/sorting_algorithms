#include "sort.h"

/**
 * selection_sort - sorts an array in asc using select sort
 * @array: array passed
 * @size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i = 0, j;
	int tmp, temp;

	while (i < size)
	{
		j = i + 1;
		tmp = i;
		while (j < size)
		{
			if (array[j] < array[tmp])
				tmp = j;
			j++;
		}
		if (array[tmp] < array[i])
		{
			temp = array[tmp];
			array[tmp] = array[i];
			array[i] = temp;
			print_array(array, size);
		}
		i++;
	}
}

