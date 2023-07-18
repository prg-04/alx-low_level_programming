#include <stdio.h>
/**
 *main - Entry point
 *Description: 'Print numbers of base 10 from 0'
 *Return: always 0
 */
int main(void)
{
	int n = 48;

	while (n <= 57)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
