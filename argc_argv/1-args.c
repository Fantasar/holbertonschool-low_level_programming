#include <stdio.h>

/**
 *main - Fonction principal.
 *@argc: Contient le nombre d'arguments dans la fonction.
 *@argv: Contient un tablaux de chaine de caracter de la fonction.
 *Return: return 0 en cas de reussite du programme.
*/

int main(int argc, char *argv[])

{
(void)*argv;

printf("%d\n", argc - 1);

return (0);
}
