#include <stdio.h>
/**
 * main - main block
 * Description: Print all numbers of base 16 in lowercase
 * followed by a new line
 * only use `putchar`, and only three times.
 * Return: 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');

	return (0);
}
