#include "lists.h"

/**
 * free_list - libere la memoire.
 *@head: pointeur sur pointeur.
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
list_t *temp;

if (head == NULL)
	{
	return;
	}
while (head->next != NULL)
	{
	temp = head->next;
	free(head->str);
	free(head);
	head = temp;
	}

free(head->next);
free(head->str);
free(head);
}
