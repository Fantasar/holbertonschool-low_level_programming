#include <stdio.h>
#include "main.h"

/**
 * _strlen_recursion - Fonction qui va compter le nombre de caractere d'une chaine.
 *
 * @s: Un pointeur vers la zone memoire a modifier.
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
	{
	return (0);
	}
else
	{
	return (1 + _strlen_recursion(s + 1));
	}
}
