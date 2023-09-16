#include "sort.h"

/**
 * qs - qs
 * @array: array
 * @limite_left: left limit
 * @limite_right: right llimit
 * @size: size of array
 */

void qs(int *array, int limite_left, int limite_right, size_t size)
{
	int left, right, temporal, pivot;

	left = limite_left;
	right = limite_right;
	pivot = array[right];

	while (left <= right)
	{
		while (array[left] < pivot && left < limite_right)
			left++;
		while (pivot < array[right] && right > limite_left)
			right--;

		if (left <= right)
		{
			temporal = array[left];
			array[left] = array[right];
			array[right] = temporal;
			if (array[left] != array[right])
				print_array(array, size);
			left++;
			right--;
		}
	}

	if (limite_left < right)
		qs(array, limite_left, right, size);

	if (limite_right > left)
		qs(array, left, limite_right, size);
}

/**
 * quick_sort - Quick Sort
 * @array: array
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size == 0)
		return;

	qs(array, 0, size - 1, size);
}
