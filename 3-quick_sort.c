#include <stdio.h>
#include "sort.h"
/**
 * swap - Swaps two elements into an array.
 *
 * @x: Pointer to the first integer.
 * @y: Pointer to the first second integer.
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
 * @array: The array.
 * @low: starting element in partition.
 * @high: ending element in partition.
 * @size: Size.
 *
 * Return: The position of pivot element.
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;

	int y;
	for (y = low; y <= high - 1; y++)
	{
		if (array[y] <= pivot)
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
 * quicksort - Recursive function implementing Quick sort.
 * 
 * @array: Array.
 * @low: Starting element. 
 * @high: ending element
 * @size: Size of the array sorted.
 */
void quicksort(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = lomuto_partition(array, low, high, size);
		quicksort(array, low, pi - 1, size);
		quicksort(array, pi + 1, high, size);
	}
}

/**
 * quick_sort - A function that sorts an array of integers in
 *             ascending order using the Quick sort algorithm.
 * 
 * @array: Array.
 * @size: Size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort(array, 0, size - 1, size);
}
