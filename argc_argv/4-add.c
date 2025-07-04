#include <stdio.h>
#include <stdlib.h>

/**
  * main - Ecris la somme de deux entiers.
  * @argc: argument qui compte.
  * @argv: argument tableaux.
  *
  * Return: toujours zero.
  */
int main(int argc, char *argv[])
{
	int i;
	unsigned int a, somme = 0;
	char *b;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			b = argv[i];

			for (a = 0; a < strlen(b); a++)
			{
				if (b[a] < 48 || b[a] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}

			somme += atoi(b);
			b++;
		}

		printf("%d\n", somme);
	}
	else
	{
		printf("0\n");
	}

	return (0);
}
