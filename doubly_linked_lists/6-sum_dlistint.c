#include "lists.h"

/**
 * sum_dlistint - additionne les nombres en memoire.
 *@head: pointeur sur pointeur.
 *
 * Return: Always 0.
 */

int sum_dlistint(dlistint_t *head)
{
int count = 0;

while (head != NULL)
	{
	count += head->n;
	head = head->next;
	}
return (count);
}
