#include "main.h"
#include
#include

/**
* main - check the code
*
* Return: Always 0.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
int a, b;
char *str;
unsigned int temp = 0;
int stock = 0;
if (s1 == NULL)
	{
	return (NULL);
	}
for (a = 0; s1[a] != '\0'; a++)
	{
	stock++;
	}
if (s2 == NULL)
	{
	return (NULL);
	}
for (b = 0; s2[b] != '\0'; b++)
	{
	stock++;
	temp[b];
 	}
str = malloc( (stock + 1) * sizeof(char));
if ( str == NULL)
	{
	return (NULL);
	}
if (n >= temp)
	{
	return (temp);
	}
return (str);
