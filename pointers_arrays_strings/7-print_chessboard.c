#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_chessboard - Imprime un echequier.
 *
 * @a: Inilialisation de la premiere case du plateaux.
 *
 */

void print_chessboard(char (*a)[8])
{
int b;
int c;

/*Boucle pour defiler les colonnes du tableaux*/

for (b = 0; b < 8; b++)
	{
	for (c = 0; c < 8; c++)

/*Imprime les pions ainsi que le retour a la ligne*/
		{
		_putchar(a[b][c]);
		}
	_putchar('\n');
	}
}
