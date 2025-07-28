#include "lists.h"

size_t _strlen( const char * theString )
{
int index;
int count;

for(index = 0; theString[index] != '\0'; index++)
{
count++;
}
return (count);
}

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
	free(end_node);
	}

end_node->str = strdup(str);

end_node->len = _strlen(str);
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
