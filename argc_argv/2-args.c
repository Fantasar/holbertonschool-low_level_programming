#include <stdio.h>

/**
 *main - Fonction principal.
 *@argc: nombre d'argument dans la fonction.
 *@*agrv: tableaux qui contient le nom des arguments.
 *@argv: tableaux pour deffiller la chaine de caractere.
 *Return: return 0 en cas de reussite.
*/

int main(int argc, char *argv[])
{
int num;

for (num = 0; num < argc - 1; num++)
	{
	printf("%s\n", argv[num]);
	}

return (0);
}
