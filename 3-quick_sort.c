#include "sort.h"
/**
 * quick_sort - function sorts an array of integers
 * using the quick sort algorithm.
 * @array: Takes in the array of integers.
 * @size: takes in the size of the array.
 */
void quick_sort(int *array, size_t size)
{
	size_t count = 0, loop = 0;
	int i = 0, j = 0, c, pv;

	if (size > 1)
	{
		while (count < size - 1)
		{
			i++;
			count++;
		}
		pv = array[i];
		while (loop < size - 1)
		{
			if (array[j] < pv)
			{
				if (array[j] <= pv)
				{
					c = array[j + 1];
					if (array[j] == c)
						print_array(array, size);
					if (array[j] > c)
					{
						swap(&array[j], &c);
						print_array(array, size);
					}
				}
				if (array[j] > pv)
					print_array(array, size);
			}
			j++;
			loop++;
		}
		print_array(array, size);
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
