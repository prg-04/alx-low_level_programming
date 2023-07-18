#include <stdio.h>
/**
 *main - Entry point
 *print_alphabet - Function to print alphabets
 *Decription: 'Prints alphabets in lowercase
 *Return: always 0
 */

void print_alphabet(void);

int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	int n = 97;
	
	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
}
