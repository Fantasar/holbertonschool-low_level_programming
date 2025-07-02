#include <stdio.h>
#include <stdlib.h>

/**
 *main - Fonction principal.
 *@argc: nombre d'argument dans la fonction.
 *@*agrv: tableaux qui contient le nom des arguments.
 *@argv: tableaux pour deffiler la chaine de caractere.
 *Return: return 0 en cas de reussite.
*/

int main(int argc, char *argv[])
{

int num1, num2, result;

/* Verifie le nombre d'argument*/

if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}

/* Convertir les caractere en nombre avec atoi */

num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

result = num1 *num2;

printf("%d\n", result);

return (0);
}
