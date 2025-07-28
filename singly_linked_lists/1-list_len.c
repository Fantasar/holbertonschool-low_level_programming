#include "lists.h"
/**
 * list_len - Parcoure un tableau de structure afin de compter
 *            le nombre d'elements qui le compose.
 *
 *@h: Noeud vers une autre structure.
 * Return: Always 0.
 */

size_t list_len(const list_t *h)
{
size_t count = 0;

while (h != NULL)
{
	count++;
	h = h->next;
}

return (count);
}
