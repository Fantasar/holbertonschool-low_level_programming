#include <stdio.h>
#include "main.h"
/**
* print_last_digit - boucle pour calculer le modulo d'un nombre
* @n: prends en compte un entier
* Return: la variable num qui stocks le dernier chiffre de n
*/
int print_last_digit(int n)
{
int num;
num = n % 10;

if (num < 0)
	{
	num = num * -1;
	}

_putchar(num + '0');
return (num);
}
