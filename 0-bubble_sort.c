#include "sort.h"

/**
 * bubble_sort - function that sorts an array of integers
 * in ascending order using the Bubble sort algorithms
 *
 * @array: given array to sort
 * @size: size of the given array
 */

void bubble_sort(int *array, size_t size)
{
	int temp, swapped;
	size_t i, j;

	if (!array || size == 0)
		return;

	for (j = 0; j < size - 1; j++)
	{
		swapped = 0;
		for (i = 0; i < size - 1 - j; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swapped = 1;
				print_array(array, size);
			}
		}
		if (swapped == 0)
			break;
	}
}
