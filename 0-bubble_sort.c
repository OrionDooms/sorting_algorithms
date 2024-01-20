#include "sort.h"
/**
 * bubble_sort - function sorts an array of integers
 * using the Bubble sort algorithm.
 * @array: Takes in the array of integers.
 * @size: takes in the size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t f, s = 0;
	int j, i = 0;

	if (size > 1)
	{
		while (s < size - 1)
		{
			f = 0, j = 0;
			while (f < size - s - 1)
			{
				if (array[j] > array[j + 1])
				{
					swap(&array[j], &array[j + 1]);
					print_array(array, size);
				}
				f++, j++;
			}
			s++, i++;
		}
	}
}
/**
 * swap - A function that swap two integers.
 * @a: Takes in a integer.
 * @b: Takes in a integer.
 */
void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
