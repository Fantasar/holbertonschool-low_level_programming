#include <stdio.h>
#include "main.h"

/**
 * _strstr - Fonction qui va chercher des correspondance dans la chaine neelde.
 *
 * @haystack: Un pointeur vers la variable a modifier.
 * @needle: Un pointeur sur la chaine qui contient le mot a controler.
 * Return: return le pointeur modifier.
 */

char *_strstr(char *haystack, char *needle)
{
int a;
int b;

/*Controle que needle n'est pas sur le nulle bites */

if (*needle == '\0')
	{
	return (haystack);
	}

/*Boucle pour faire defiller les deux chaines*/

for (a = 0; haystack[a] != '\0'; a++)
	{
	for (b = 0; needle[b] != '\0'; b++)
		{

/* Verifie si a avec le premier caractere de b correspond a needle */

		if (haystack[a + b] != needle[b])
			{
			break;
			}
		}
		if (needle[b] == '\0')
		{
		return (&haystack[a]);
		}
	}
return (NULL);
}
