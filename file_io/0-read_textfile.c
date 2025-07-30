#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include "main.h"

/**
 * read_textfile - Ouvre un fichier pour le lire et compter
 *		   le nombre de caractere.
 *@filename: Contient la string.
 *@letters: Contient le nombre de caractere present dans le fichier
 *Return: Renvoir nombre de caractere lues et ecrits.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
FILE *fp;
char *temp;
size_t nread, nwritten;
ssize_t ret;
if (filename == NULL || letters == 0)
	{
	return (0);
	}
fp = fopen(filename, "rb");
if (fp == NULL)
	{
	return (0);
	}
temp = (char *)(malloc(letters));
if (temp == NULL)
	{
	fclose(fp);
	return (0);
	}
nread = fread(temp, 1, letters, fp);
if (ferror(fp))
	{
	free(temp);
	fclose(fp);
	return (0);
	}
nwritten = fwrite(temp, 1, nread, stdout);
if (nwritten != nread)
	{
	free(temp);
	fclose(fp);
	return (0);
	}
ret = (ssize_t)nread;
free(temp);
fclose(fp);
return (ret);
}
