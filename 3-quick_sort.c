#include "sort.h"

/**
 * partition - does the lomuto partition
 * @array: array to be partitioned
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 * Return: the bater
 */
int partition(int *array, int start, int end, size_t size)
{
	int bater = array[end];
	int count = (start - 1);
	int i, temp;

	for (i = start; i < end; i++)
	{
		if (array[i] <= bater)
		{
			count++;
			if (count < i)
			{
				temp = array[count];
				array[count] = array[i];
				array[i] = temp;
				print_array(array, size);
			}
		}
	}
	if (array[end] < array[count + 1])
	{
		temp = array[count + 1];
		array[count + 1] = array[end];
		array[end] = temp;
		print_array(array, size);
	}
	return (count + 1);
}

/**
 * sort_recursion - recursive function to perform quicksort
 * @array: array to be sorted
 * @start: start of the array
 * @end: end of the array
 * @size: size of the array
 */
void sort_recursion(int *array, int start, int end, size_t size)
{
	int bater = 0;

	if (start < end)
	{
		bater = partition(array, start, end, size);
		sort_recursion(array, start, bater - 1, size);
		sort_recursion(array, bater + 1, end, size);
	}
}

/**
 * quick_sort - sorts an array using quicksort algorithm
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	sort_recursion(array, 0, size - 1, size);
}
