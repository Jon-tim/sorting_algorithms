#include "sort.h"

/**
 * shell_sort - sort the list and print the changes
 * @array: The array to sort.
 * @size: Size of the array
 * Return: Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t h = 0,  i, j;
	int tmp;

	if (size < 2)
		return;

	while (h <= size / 3)
		h = h * 3 + 1;

	while (h >= 1)
	{
		for (i = h; i < size; i++)
		{
			tmp = array[i];

			for (j = i; j >= h && array[j] < array[j - h]; j -= h)
			{
				array[j] = array[j - h];
				array[j - h] = tmp;
			}
			array[j] = tmp;
		}
		print_array(array, size);
		h /= 3;
	}
}
