#include<stdio.h>

/**
 * Write a program that prints _putchar,
 * followed by a new line.
 * 
 * The program should return 0
 * */

int main()
{
char name[] = "_putchar";
for (int i = 0; i < 8; ++i)
{
putchar(name[i]);
}
printf("\n\n");
return 0;
}
