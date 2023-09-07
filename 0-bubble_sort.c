#include "sort.h"

/**
* bubble_sort - function that sorts an array of integers in ascending order
*@array: array to sort
*@size: array size
*Return: nothing, just sort an print
*
*/

void bubble_sort(int *array, size_t size)
{
	size_t a, b;
	int cont;

	if (!array || size == 0)
	{
		return;
	}
	for (a = 0; a < size; a++)
	{
		for (b = 0; b < size - 1; b++)
		{
			if (array[b] > array[b + 1])
			{
			cont = array[b];
			array[b] = array[b + 1];
			array[b + 1] = cont;
			print_array(array, size);
			}
		}
	}
}
