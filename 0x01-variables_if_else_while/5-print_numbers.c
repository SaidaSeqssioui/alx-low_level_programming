#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		printf("%i", a);
	}
	putchar('\n');

	return (0);
}
