#include "lists.h"

/**
 * add_node - Copie une structure et l'affiche.
 *@head: pointeur sur pointeur.
 *@str: String de caractere.
 * Return: Always 0.
 */

list_t *add_node(list_t **head, const char *str)
{

list_t *new_node = malloc(sizeof(list_t));
if (new_node == NULL)
	{
	return (NULL);
	}

new_node->str = strdup(str);
new_node->len = strlen(str);
new_node->next = *head;
*head = new_node;

return (new_node);
}
