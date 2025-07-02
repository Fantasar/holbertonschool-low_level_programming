#include <stdio.h>
#include "main.h"

/**
 * sqrt_helper - Fonction auxiliaire pour calculer la racine carrer.
 * @n: Le nombre dont on veut trouver la racine carre.
 * @num: Le nombre actuel testé pour voir s'il est la racine carre de n.
 *
 * Description: Cette fonction utilise la rcursion pour tester si le carr�de
 * `num` est égal à `n`. Si c'est le cas, elle retourne `num` comme la racine
 * carrée. Si le carré de `num` dépasse `n`, elle retourne -1 pour indiquer
 * qu'il n'y a pas de racine carrée naturelle. Sinon, elle incrémente `num`
 * et s'appelle elle-même.
 *
 * Return: La racine carrée de `n` si elle existe, sinon -1.
 */

int sqrt_helper(int n, int num)
{
	if (num * num == n)
	{
	return (num);
	}
	if (num * num > n)
	{
	return (-1);
	}
	return (sqrt_helper(n, num + 1));
}

/**
 * _sqrt_recursion - Calcule la racine carrée naturelle d'un nombre.
 * @n: Le nombre dont on veut trouver la racine carrée.
 *
 * Description: Cette fonction vérifie d'abord si `n` est négatif, auquel cas
 * elle retourne -1 car il n'y a pas de racine carrée réelle pour les nombres
 * négatifs. Elle vérifie également les cas particuliers où `n` est 0 ou 1,
 * pour lesquels la racine carrée est simplement `n`. Ensuite, elle appelle
 * la fonction auxiliaire `sqrt_helper` pour effectuer le calcul récursif.
 *
 * Return: La racine carrée naturelle de `n`, ou -1 si elle n'existe pas.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
	return (-1);
	}
	if (n == 0 || n == 1)
	{
	return (n);
	}
return (sqrt_helper(n, 0));
}
