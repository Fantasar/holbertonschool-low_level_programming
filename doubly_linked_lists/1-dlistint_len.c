#include "lists.h"

/**
 * dlistint_len - Compte le nombre d'element dans les noeuds.
 *
 *@h: Noeud vers une autre structure.
 * Return: Always 0.
 */

size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
	{
	count++;
	h = h->next;
	}
return (count);
}
