#include <stdio.h>
/**
 * main - main block
 * Description: Print all possible combinations fo single-digit numbers
 * followed by a new line.
 * Numbers must be separated by commas and a space.
 * only use `putchar` to print to console
 * only use `putchar` up to four times.
 * not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int i = 0;

	while (i < 10)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}
