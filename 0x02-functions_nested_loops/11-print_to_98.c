#include "main.h"

#include <stdio.h>

/**
 * print_to_98 - function that prints all natural numbers from n to 98
 * @n: The number to start printing the from
 * Return: always 0
 */

void print_to_98(int n)
{
        if (n <= 0 && n <= 98)
        {
                for (i = n ; i <= 98; i++)
                {
                        printf("%d. ", i);
                }
                printf("\n");
        }
        else if (n < 0)
        {
                for (i = n ; i <= 98 ; i++)
                {
                        printf("%d. ", i);
                }
                printf("\n");
        }
        else if (n > 98)
        {
                for (i = n ; i >= 98 ; i ==)
                {
                        printf("%d. ", i);
                }
                prinf("\n");
        }
        else if (n == 98)
		printf("%d. ", n);
}
