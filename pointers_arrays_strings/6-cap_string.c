#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * cap_string - Affiche uniquement la chaine de caractere.
 *
 * @str: Un pointeur vers la chaine.
 * Return: str.
 */

char *cap_string(char *str)
{
char *ptr = str;
int capitaliser = 1;

while (*ptr != '\0')
	{
/*Defile pour chercher lettres*/
	if (capitaliser && *ptr >= 'a' && *ptr <= 'z')
		{
		*ptr = *ptr - 32;
		capitaliser = 0;
		}
/*ecarte les parametre speciaux*/
	if (*ptr == ' ' || *ptr == '	' || *ptr == '\n' || *ptr == ','
	|| *ptr == ';' || *ptr == '.' || *ptr == '!' || *ptr == '?' ||
	*ptr == '"' || *ptr == '(' || *ptr == ')' || *ptr == '{' || *ptr == '}')
		{
		capitaliser = 1;
		}
/*reactualiser le compteur de capitaliser*/
	else
		{
		capitaliser = 0;
		}
	ptr++;
	}
return (str);
}
