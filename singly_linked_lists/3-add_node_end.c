#include "lists.h"

/**
 * _strlen - Compte le nombre de caractere de la chaine.
 *@theString: la chaine de caractere.
 *
 * Return: Always 0.
 */

size_t _strlen(const char *theString)
{
int index;
int count;

for (index = 0; theString[index] != '\0'; index++)
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
list_t *end_node;
list_t *current;

current = *head;
while (current && current->next != NULL)
	{
	current = current->next;
	}
end_node = malloc(sizeof(list_t));

if (end_node == NULL)
	{
	free(end_node);
	return (NULL);
	}

end_node->str = strdup(str);

if (end_node->str == NULL)
	{
	return (NULL);
	}
end_node->len = _strlen(str);
end_node->next = NULL;

if (current)
	{
	current->next = end_node;
	}
else
	{
	*head = end_node;
	}
return (end_node);
}

