#include <stdio.h>
#include "main.h"

/**
 * _strchr - Fonction qui va chercher le premier caractere de c dans s.
 *
 * @s: Un pointeur vers la variable a controler.
 * @c: Le caractere qui va etre chercher dans *s.
 * Return: return le debut de la chaine de caractere.
 */

char *_strchr(char *s, char c)
{
int temp;

for (temp = 0; s[temp] != '\0'; temp++)
	{
	if (s[temp] == c)
		{
		return (&s[temp]);
		}
	if (s[temp] == '\0')
	{
	break;
	}
	}
if (c == '\0')
	{
	return (&s[temp]);
	}

return (NULL);
}
