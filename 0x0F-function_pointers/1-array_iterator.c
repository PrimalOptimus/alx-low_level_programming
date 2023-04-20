#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - function
 * @array: first value
 * @size: function
 * @action: function pointed
 *
 *
 *
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	size_t r;


for (r = 0; r < size; r++)
{
action(array[r]);
}
}
