#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - imprime un tableaux de structure stocker dans h.
 *
 *@h: Noeud vers une autre structure.
 * Return: Always 0.
 */

size_t print_list(const list_t *h)
{

size_t count = 0;

while (h != NULL)
{
	if (h->str != NULL)
		{
		printf("[%u] %s\n", h->len, h->str);
		}

	else
		{
		printf("[0] (nil)\n");
		}
	h = h->next;
	count++;
}

return (count);
}
