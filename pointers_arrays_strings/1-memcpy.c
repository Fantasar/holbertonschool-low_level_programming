#include <stdio.h>
#include "main.h"

/**
 * _memcpy - Fonction qui va copier la memoire d'un pointeur vers un autre.
 *
 * @dest: Un pointeur vers la zone memoire a modifier.
 * @src: La zone memoire qui va etre copier.
 * @n: Le nombre d'octets qui vont etre modifier.
 * Return: return le pointeur modifier.
 */

char *_memcpy(char *dest, char *src, unsigned int n)

{
char *temp = dest;
if (dest == NULL || src == NULL)
	{
	return (NULL);
	}
while (n--)
	{
	*dest = *src;
	dest++;
	src++;
	}

return (temp);
}
