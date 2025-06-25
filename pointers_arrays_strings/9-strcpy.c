#include <stdio.h>
#include "main.h"

/**
 * _strcpy - Inverse la position de deux pointeurs.
 *
 * @dest: Un pointeur vide.
 * @src: Un pointeur qui contient la phrase.
 * Return: a qui return la phrase avec le '\0'.
 */

char *_strcpy(char *dest, char *src)
{
char *a = src;
while (*src != '\0')
	{
	*dest = *src;
	dest++;
	src++;
	}
*dest = '\0';
return (a);
}
