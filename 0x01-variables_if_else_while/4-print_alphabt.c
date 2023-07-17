#include <stdio.h>
/**
 *main - Entry point
 *Description: 'print lowercase alphabet except q and e'
 *Return: always 0
 */
int main(void)
{
	int n = 97;

	while (n <= 122 && n != 101 || n != 113)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
