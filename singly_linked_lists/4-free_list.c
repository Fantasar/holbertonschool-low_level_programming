#include "lists.h"

/**
 * free_list - libere la memoire.
 *@head: pointeur sur pointeur.
 *
 * Return: Always 0.
 */

void free_list(list_t *head)
{
free(head);
}
