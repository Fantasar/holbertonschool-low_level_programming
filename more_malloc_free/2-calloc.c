#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *_calloc - calloc une fonctio.
 * @nmemb: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: calloc.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
int *calloc;
unsigned int a;

if (nmemb == 0 || size == 0)
	{
	return (NULL);
	}
calloc = malloc(nmemb * size);
if (calloc == NULL)
	{
	return (NULL);
	}
for (a = 0; a < nmemb; a++)
	{
	calloc[a] = 0;
	}
return (calloc);
}
