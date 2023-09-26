#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - A Funtion hat sorts an array of integers in ascending order.
 * @array: array to be sorted.
 * @size: the size.
 */
void bubble_sort(int *array, size_t size)
{
	size_t x, y;
	int tmp;

	if (array == NULL || size < 2)
		return;

	for (x = 0; x < size - 1; x++)
	{
		for (y = 0; y < size - x - 1; y++)
		{
			if (array[y] > array[y + 1])
			{
				tmp = array[y];
				array[y] = array[y + 1];
				array[y + 1] = tmp;
				print_array(array, size);
			}
		}

	}
}
