#include <stdio.h>
#include "sort.h"
/**
 * swap - Swaps two elements into an array.
 *
 * @a: Pointer to the first integer.
 * @b: Pointer to the first second integer.
 */
void swap(int *x, int *y)
{
	int tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * lomuto_partition - implements lomuto partition scheme.
 *
 * @array:
 * @@low:
 * @high:
 * @size:
 */
int lomuto_partition(int *array[], int alow, int high, size_t size)
{
	int p = array[high];
	int i = low - 1;


	for(int y = low; y <= high; y++)
	{
		if (array[y] <= p)
		{
			i++;
			swap(&array[i], &array[y]);
			print_array(array, size);
		}
	}
	
	swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);
}
/**
 * quicksort - 
 * _
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
}

/**
 * quick_sort -
 * 
 *
 */
void quick_sort(int *array, size_t size)
{

}
