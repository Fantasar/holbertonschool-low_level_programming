#include "lists.h"

/**
 * add_node_end - Construit un tableau de structure a la fin des noeuds.
 *@head: pointeur sur pointeur.
 *@str: string de caractere
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *end_node = malloc(sizeof(list_t));

if (end_node == NULL)
	{
	return (NULL);
	}

end_node->str = strdup(str);
end_node->len = strlen(str);
end_node->next = NULL;

if (*head == NULL)
	{
	*head = end_node;
	}
else
	{
	list_t *temp = *head;

	while (temp->next != NULL)
		{
		temp = temp->next;
		}

	temp->next = end_node;
	}

return (end_node);
}
