#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Supprime le noeud a un index donner.
 * @head: Double pointeur vers le debut de la liste.
 * @index: Index du noeud a supprimer.
 *
 * Return: 1 si succes, 0 si l'operation echoue.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *current;
unsigned int i = 0;

if (head == NULL || *head == NULL)
	{
	return (0);
	}
current = *head;
if (index == 0)
	{
	*head = current->next;
	if (*head != NULL)
		{
		(*head)->prev = NULL;
		free(current);
		return (1);
		}

	}
while (current != NULL && i < index)
	{
	current = current->next;
	i++;
	}

if (current == NULL)
	{
	return (0);
	}
if (current->prev != NULL)
	{
	current->prev->next = current->next;
	}
if (current->next != NULL)
	{
	current->next->prev = current->prev;
	}
free(current);
return (1);
}
