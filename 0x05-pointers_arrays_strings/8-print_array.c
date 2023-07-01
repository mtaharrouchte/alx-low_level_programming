#include <stdio.h>
#include <stdlib.h>
#include "main.h"



/**
 * print_array - prints n elements of an array of integers
 * @a: pointer to array
 * @n: number of elements of the array
 * Return: Always 0.
*/
void print_array(int *a, int n)
{
	const char *err_msg = "NULL_PTR";
	int index = 0;

	if (a != NULL)
	{
		if (n > 0)
		{
			while (index < n)
			{
				if (index != n - 1)
				{
					printf("%d, ", a[index]);
				}	
				else
				{
					printf("%d\n", a[index]);
				}

				index += 1;
			}
		}
		else
		{
			printf("\n");
		}
	}
	else
	{
		puts(err_msg);
		exit(0);
	}
}
