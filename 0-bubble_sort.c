#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers in ascending order
 * @array: array to be sorted
 * @size: size of the array
*/

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t i, h;

	if (!array)
	{
		return;
	}

	for (i = size - 1; i > 0; i--)
	{
		for (h = 0; h < i; h++)
		{
			if (array[h] > array[h + 1])
			{
				temp = array[h + 1];
				array[h + 1] = array[h];
				array[h] = temp;
				print_array(array, size);
			}
		}
	}
}
