#include "lists.h"

/**
 * add_dnodeint_end - Copie une structure a la fin des noeuds et l'affiche.
 *@head: pointeur sur pointeur.
 *@n: index de compteur.
 * Return: Always 0.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *last;

dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	{
	return (NULL);
	}
new_node->n = n;
new_node->next = NULL;

if (*head == NULL)
	{
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
	}
last = *head;
while (last->next != NULL)
	{
	last = last->next;
	}

last->next = new_node;
new_node->prev = last;

return (new_node);
}
