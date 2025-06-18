#include <stdio.h>
#include "main.h"

void print_to_98(int n)
{
	if(n <= 98)
	{
		for(n = 0; n < 98; n++)
		_putchar(n);
	}
	if (n > 98)
	{
	_putchar(n--);
	}

}


