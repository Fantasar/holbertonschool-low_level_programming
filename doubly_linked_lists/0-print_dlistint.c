#include "lists.h"

/**
 * print_dlistint - Affiche le nombre d'elements des noeuds.
 *
 *@h: Noeud vers une autre structure.
 * Return: Always 0.
 */

size_t print_dlistint(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
	{
	printf("%d\n", h->n);
	h = h->next;
	count++;
	}
return (count);
}
