#include "sort.h"

/**
* selection_sort - function that selects the smallest item
*and places that item at the top of the unsorted list.
*@array: array to sort
*@size: array size
*/

void selection_sort(int *array, size_t size)
{
	size_t i, j, min;
	int temp;

	if (!array || size == 0)
	{
		return;
	}
	for (i = 0; i < size; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}
		}
		if (array[i] != array[min])
		{
			temp = array[i];
			array[i] = array[min];
			array[min] = temp;
			print_array(array, size);
		}
	}
}
