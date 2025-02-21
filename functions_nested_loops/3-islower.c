#include <stdio.h>
#include "main.h"
#include <ctype.h>
/**
 * int_islower(int c) - Prints the alphabet 10 times,
 *		each time followed by a new line.
 *
 * Description: This function prints the lowercase alphabet 10 times,
 *              each time followed by a new line character.
 *
 * Return: void
 */
int _islower(int c)
{
if (c >= 'a'&& c<= 'z')
return(1);
else 
return (0);

}
