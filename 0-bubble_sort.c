#include "sort.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *bubble_sort - function that sort an array of integers in ascending order
 *@array: sort array
 *@size: size of array
 *Return: always 0
 */
void bubble_sort(int *array, size_t size)
{
	size_t tmp, trvse, a;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (trvse = 1; trvse < size; trvse++)
	{
		for (a = 0; a < size - 1; a++)
		{
			if (array[a] > array[a + 1])
			{
				tmp = array[a];
				array[a] = array[a + 1];
				array[a + 1] = tmp;
				print_array(array, size);
			}
		}
	}
}