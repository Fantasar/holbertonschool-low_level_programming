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

int num1;
int num2;

if (argc == 1)
	{
	printf("\n");
	return (0);
	}
else
	{
	for (int a = 1; a < argc - 1 ; a++)
		{
		for (int b = 0; argv[a][b] != '\0'; b++)
			{
		if(argv[a][b] >= '0' || argv[a][b] <= '9')
			{
			int total =0;
			}
		else
			{
			printf("Error\n");
			return (1);
			}
			}
		}
	}
num1 = atoi(argv[1]);
num2 = atoi(argv[2]);

int result = num1 + num2;
printf("%d\n", result);

}
