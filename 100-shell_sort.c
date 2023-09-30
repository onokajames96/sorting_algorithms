#include "sort.h"

/**
 * shell_sort - A function that Sorts an array of integers in
 *    ascending order using Shell sort algorithm with the Knuth sequence.
 * @array: Array to be sorted.
 * @size: The size.
 */
void shell_sort(int *array, size_t size)
{
	size_t gap = 1, x, y;
	int tmp;

	if (array == NULL || size < 2)
		return;

	while (gap < size / 3)
		gap = gap * 3 + 1;

	while (gap > 0)
	{
		for (x = gap; x < size; x++)
		{
			tmp = array[x];
			y = x;

			while (y >= gap && array[y - gap] > tmp)
			{
				array[y] = array[y - gap];
				y -= gap;
			}

			array[y] = tmp;
		}

		print_array(array, size);
		gap /= 3;
	}
}
