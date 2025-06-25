#include <stdio.h>
#include "main.h"

/**
 * _strncat - Concatise deux chaine de caractere sans les octets.
 *
 * @dest: Un pointeur vers la chaine.
 * @src: Un pointeur vers une autre chaine.
 * @n : Un entier qui contient la limite.
 *Return: dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int a = 0;
int b;
/* tableaux pour deffiller le pointeur dest */
while (dest[a] != '\0')
	{
	a++;
	}
/*boucle qui pose les limites de src avec n et '\0' */
for (b = 0; src[b] < n && src[b] != '\0'; b++)
	{
	dest[a + b] = src[b];
	}
dest[a + b] = '\0';
return (dest);
}
