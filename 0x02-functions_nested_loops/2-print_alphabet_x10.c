#include "main.h"

/**
 * print_alphabet_x10 - Check description
 * Description: It prints 10 times the alphabet, in lowercase, followed by a new line
 * Return: Nothing.
 */

void print_alphabet(void)
{
char i;
int x;
for(i=0;i < 10 ;i++)
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
