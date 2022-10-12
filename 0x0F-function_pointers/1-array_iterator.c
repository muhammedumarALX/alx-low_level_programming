#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - executes a function given as a
 * parameter on each element
 * @array: input array
 * @size: size of array
 * @action: pointer function
 *
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
