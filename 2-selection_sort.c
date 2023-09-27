#include "sort.h"
/**
 * selection_sort - A function that sorts an array of integers
 *       in ascending order using the Selection sort algorithm.
 *@size: the size.
 *@array: the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t x, y, yMin;
	int temp;

	for (x = 0; x < size - 1; x++)
	{
		yMin = x;

		for (y = x + 1; y < size; y++)
		{
			if (array[y] < array[yMin])
				yMin = y;
		}

		if (yMin != x)
		{
			temp = array[x];
			array[x] = array[yMin];
			array[yMin] = temp;

			print_array(array, size);
		}
	}
}
