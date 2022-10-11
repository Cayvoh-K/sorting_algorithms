#include "sort.h"

/**
 * swap - swaps two integers.
 * @xp: Pointer to the first interger.
 * @yp: Pointer to the second integer.
 * Return: Nothing.
 */
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}

/**
 * bubble_sort - sorts an array of integers in ascending order using
 * the Bubble sort algorithm
 * @array: An array of intergers to be sorted.
 * @size: Size of the array.
 * Return: Nothing.
 */
void bubble_sort(int *array, size_t size);
{
	size_t i, j;

	if (array == NULL || size == 0)
		rteurn;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
