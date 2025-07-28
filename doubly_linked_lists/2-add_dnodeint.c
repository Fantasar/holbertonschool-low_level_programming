#include "lists.h"
/**
 * add_dnodeint - Parcoure un tableau de structure afin de compter
 *              le nombre d'elements qui le compose.
 *
 *@head: Noeud vers une autre structure.
 *@n: Indexde head.
 * Return: Always 0.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

dlistint_t *new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
	{
	return (NULL);
	}
new_node->n = n;
new_node->prev = NULL;
new_node->next = *head;

if (*head != NULL)
	{
	(*head)->prev = new_node;
	}

*head = new_node;

return (new_node);
}
