#include "sort.h"

void bubble_sort(int *array, size_t size)
{
	size_t s = 0;
	int i = 0;

	printf("checking order\n");
	while (s < size - 1)
	{
		if (array[i] > array[i + 1])
		{
			swap(&array[i], &array[i + 1]);
		}
		s++;
		i++;
	}
	printf("\n");
	printf("end");
}

void swap(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
