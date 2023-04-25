/*
 * File: 2-selection_sort.c
 * Auth: chetalam tiffany
 */
#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascedning order
 *  using the selection sort algorithm.
 *@array: The array to be sorted
 *@size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, jmin, jtmp;
	int itmp;

	/* loop through the entire array */
	for (i = 0; i < size - 1; i++)
	{
		/*
		 * Find the smallest element in the unsorted array[i...size-1]
		 * Assume the first element is the minimum
		 */
		jmin = i;
		/* Compare against elements after i to find the smallest */
		for (j = i + 1; j < size; j++)
		{

			/* if this element is smaller, then it is the new smallest */
			if (array[j] < array[jmin])
			{
				/* found the new smallest; remember the index */
				jmin = j;
			}
		}
		/* swap */
		if (jmin != i)
		{
			itmp = array[i]; /*
					  * Save the value at index i to be swapped
					  * with the smallest element later
					  */
			jtmp = jmin; /* Save the samllest elements index before swapping */
			array[i] = array[jmin];
			array[jtmp] = itmp;
			print_array(array, size);
		}
	}
}
