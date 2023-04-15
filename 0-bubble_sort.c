#include "sort.h"

/**
 * bubble_sort - sorts an array using bb sort algorithm
 * @array: array to be sorted
 * @size:  size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i;
	int temp;
	bool swap;

	if (array == NULL)
		exit(0);
	while (1)
	{
		swap = false;
		i = 0;
		while (i < size - 1)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = true;
				print_array(array, size);
			}
			i++;
		}
		if (swap == false)
			break;
	}
}

