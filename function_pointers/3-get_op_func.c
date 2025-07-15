#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>
/**
 * get_op_func - Selectionne la fonction correcte pour effectuer l'operation.
 * @s: L'operateur passe√en argument au programme.
 *
 * Description: Cette fonction parcourt un tableau d'operateurs connus
 * et retourne un pointeur vers la fonction correspondante si correspondance.
 *
 * Return: Un pointeur vers la fonction qui correspondant a l'operateur donner
 * parametre. Si @s  aucun des operateurs attendus, retourne NULL.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};

int i = 0;
int (*op_func)(int, int) = NULL;

while (ops[i].op != NULL)
	{
	if (strcmp(s, ops[i].op) == 0)
	{
	op_func = ops[i].f;
	break;
	}
	i++;
	}

	return (op_func);
}
