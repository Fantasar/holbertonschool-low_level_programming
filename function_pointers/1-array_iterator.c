#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - prints an array
 * @array: the integer to array
 * @size: the size of the array
 * @action: the pointer
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int a;
for (a = 0; a < size; a++)
	{
	action(array[a]);
	}
}
