#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"

/**
* puts2 - puts
* @str: ptr to string
* Return: Always 0.
*/
void puts2(char *str)
{
	char *EXCEPTION_ERR = "NULL_POINTER_EXCEPTION";
	char *half_reg = NULL;

	if (str != NULL)
	{
		int reg_size = strlen(str);
		int half_size = 0;
		int index_0 = 0;
		int index_1 = 0;

		if ((reg_size % 2) != 0)
		{
			half_size = (reg_size / 2) + 1;
		}
		else
		{
			half_size = reg_size / 2;
		}	
		half_reg = (char *) malloc(half_size);

		while ((index_0 < reg_size) && (index_1 < half_size))
		{
			*(half_reg + index_1) = *(str + index_0);
			index_0 += 2;
			index_1 += 1;
		}

		puts(half_reg);
		free(half_reg);
	}
	else
	{
		puts(EXCEPTION_ERR);
		exit(0);
	}
}
