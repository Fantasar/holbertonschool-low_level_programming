#include "lists.h"

/**
 * insert_dnodeint_at_index - Creer un nouveau noeud et l'integre.
 *@h: pointeur sur pointeur.
 *@idx: index
 *@n: chiffre a inserer.
 * Return: Always 0.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *current = *h;
dlistint_t *new_node = *h;

while (current != NULL && i < idx)
	{
	current = current->next;
	i++;
	}
if (idx == 0)
	{
	return (add_dnodeint(h, n));
	}
if (current == NULL && i == idx)
	{
	return (add_dnodeint_end(h, n));
	}
if (current != NULL)
	{
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		{
		return (NULL);
		}
	new_node->n = n;
	new_node->prev = current->prev;
	new_node->next = current;

	if (current->prev != NULL)
		{
		current->prev->next = new_node;
		}
	current->prev = new_node;
	return (new_node);
	}
return (NULL);
}
