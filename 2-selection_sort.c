#include "sort.h"
/**
 *selection_sort - sort array with  Selection sort algorithm
 *@array: pointer to the array
 *@size: the size of the array
 *return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	int aux, currentmin, minposition;
	size_t i, j;

	if (array == NULL || size == 0)
		return;

	for (i = 0; i < size - 1; i++)
	{
		currentmin = array[i];

		for (j = i; j < size; j++)
			if (array[j] < currentmin)
			{
				currentmin = array[j];
				minposition = j;
			}

		if (array[i] != currentmin)
		{
			aux = array[i];
			array[i] = currentmin;
			array[minposition] = aux;
			print_array(array, size);
		}
	}
}