#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * string_toupper - Imprime une phrase.
 *
 * @str: Le string en minuscule.
 *
 * Return: Une phrases en en majuscule;
 *
 */

char *string_toupper(char *str)
{
/* Initialisation d'un pointeur sur la chaine str */
char *ptr = str;

while (*ptr != '\0')
	{
/* fonction toouper permet de modifier les caracteres*/
	if (*ptr >= 'a' && *ptr <= 'z')
		{
		*ptr = toupper(*ptr);
		}
	ptr++;
	}
return (str);
}
