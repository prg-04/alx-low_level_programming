#include <stdio.h>

/**
 *main - Entry point
 *Description: 'prints _putchar'
 *Return: always 0
 */
int main(void)
{
    char n[] = "_putchar";
    int i = 0;

    while (n[i] != '\0') {
        putchar(n[i]);
        i++;
    }

    putchar('\n');
    return 0;
}
