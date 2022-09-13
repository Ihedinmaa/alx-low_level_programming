#include "main.h"
/**
* print_last_digit - prints last digits of a number
* Description: function prints the last digit of number
*@a: the input integer
* Return: value of last digit of number a.
*/
int print_last_digit(int a)
{
int n;
if (a < 0)
n = -1 * (a % 10);
else
n = a % 10;
_putchar((n % 10) + '0');
return (n % 10);
}