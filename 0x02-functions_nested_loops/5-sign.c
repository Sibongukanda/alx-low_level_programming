#include "main.h"

/**
 * print_sign - Check main
 * @n: An input character
 * Description: function returns 1 if the character is a
 * letter, lowercase or uppercase.
 * Returns 1 and prints + if n is greater than zero
 * Returns 0 and prints 0 if n is zero
 * Returns -1 and prints - if n is less than zero
 */
int print_sign(int n);
{

int value;
char sign;

if (n > 0)
{
value = 1;
sign = '+';

}
if (n == 0)
{
value = 0;
sign = '0';
}

if (n < 0)
{
value = -1;
sign = '-';
}

return (value);
}
