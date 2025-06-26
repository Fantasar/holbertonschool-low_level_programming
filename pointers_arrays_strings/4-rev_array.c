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

void reverse_array(int *a, int n)
{
int temp;
int *stock = &temp;
int temp2;

while(a[n] != '\0')
	{
	a++;
	stock[temp] = a[n];
	
	}
temp --;
}
