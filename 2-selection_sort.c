#include "sort.h"
/**
 * selection_sort- function sorts an array of integers
 * using the selection_sort algorithm.
 * @array: Takes in the array of integers.
 * @size: takes in the size of the array.
 */
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j, select;

	while (i < size - 1)
	{
		select = i, j = i + 1;
		while (j < size)
		{
			if (array[j] < array[select])
				select = j;
			j++;
		}
		swap2(&array[select], &array[i], array, size);
		i++;
	}

}
/**
 * swap - A function that swap two integers.
 * @a: Takes in a integer.
 * @b: Takes in a integer.
 * @array: Takes in the array of integers.
 * @size:takes in the size of the array.
 */
void swap2(int *a, int *b, int *array, size_t size)
{
	int temp = *a;

	*a = *b;
	*b = temp;
	print_array(array, size);
}
