#include <stdio.h>
#include "main.h"

/**
 * _strcmp - Compare deux chaines de caractere.
 *@s1: Declaration d'une string.
 *@s2: Declaration d'une string.
 * Return: la valeur si negatif ou positif.
 */

int _strcmp(char *s1, char *s2)
{
int a = 0;

/*Defile la string jusqu'au caractere Nuls*/
while (s1[a] != '\0' && s2[a] != '0')
	{
/*Si negatif car s1 plus courts que s2 */
	if (s1[a] < s2[a])
		{
		return (-13);
		}
/*Si positif si s1 est plus grands que s2 */
	else if (s1[a] > s2[a])
		{
		return (13);
		}
	a++;
	}
/* Si s1 et s2 ont la meme longueur */
return (s1[a] - s2[a]);
}
