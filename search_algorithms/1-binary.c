#include "search_algos.h"

/**
 * binary_search - Perform a binary search on an array.
 * @array: Pointer to the sorted array to search.
 * @size: Size of the array.
 * @value: Value to search for.
 * Return: Index of 'value' in 'array', or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    size_t left = 0, right = size - 1, mid;

    if (!array || size == 0)
        return (-1);

    while (left <= right)
    {
        size_t i;

        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            if (i < right)
                printf("%d, ", array[i]);
            else
                printf("%d\n", array[i]);
        }

        mid = (left + right) / 2;

        if (array[mid] == value)
            return (mid);
        else if (array[mid] < value)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return (-1);
}
