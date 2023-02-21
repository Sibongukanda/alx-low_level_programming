#include "main.h"

/**
* print_sign - Check main
* @n: An input character
* Description: function returns 1 0 -1 based on the n
* Returns 1 and prints + if n is greater than zero
* Returns 0 and prints 0 if n is zero
* Returns -1 and prints - if n is less than zero.
 */

int print_sign(int n)
{

int num = 0;

if (n > 0)
{
num = 1;
_putchar('+');
}
else if (n == 0)
{
num = 0;
_putchar('0');
}
else
{
num = -1;
_putchar('-');
}

return (num);
}
