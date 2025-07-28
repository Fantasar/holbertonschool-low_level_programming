#include "lists.h"

/**
 * get_dnodeint_at_index - Affiche un pointeur sur un noeud.
 *@head: pointeur sur un noeud.
 *@index: index du noeud.
 * Return: Always 0.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int i = 0;

while (head != NULL)
	{
	if (i == index)
		{
		return (head);
		}
	head = head->next;
	i++;
	}
return (NULL);
}
