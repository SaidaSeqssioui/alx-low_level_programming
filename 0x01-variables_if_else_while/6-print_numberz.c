#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 10, starting from 0
 * followed by a new line
 * not allowed to use any variable of type char.
 * only use `putchar` to print to console.
 * only use `putchar` twice.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');

	return (0);
}
