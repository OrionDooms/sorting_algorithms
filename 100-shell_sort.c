#include "sort.h"
/**
 * shell_sort - function sorts an array of integers
 * using the shell sort algorithm with the Knuth sequence
 * @array: Takes in the array of integers.
 * @size: takes in the size of the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t s, i, j;
	int temp;

	s = 1;
	while (s <= size / 3)
	{
		s = s * 3 + 1;
	}
	while (s > 0)
	{
		i = s;
		while (i < size)
		{
			temp = array[i];
			j = i;
			i++;

			while (j >= s && array[j - s] > temp)
			{
				array[j] = array[j - s];
				j = j - s;
			}
			array[j] = temp;
		}
		 print_array(array, size);
		s = s / 3;
	}
}
