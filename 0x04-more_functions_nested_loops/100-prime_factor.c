#include "main.h"
#include <stdio.h>

/**
 * main - prints largest prime factor
 * Return: Always 0
 * allowed to use standard library
 * /

int main(void)
{
	long int n, lf;

	n = 612852475143;
	for (lf = 2; lf <= n; lf++)
	{
		if (n % lf == 0)
		{
			n /= lf;
			lf--;
		}
	}
	printf("%ld\n", lf);
	return (0);
}
