#include "lists.h"

/**
 * free_dlistint - Efface la memoire.
 *@head: la chaine de caractere.
 *
 */

void free_dlistint(dlistint_t *head)
{
free(head);
}
