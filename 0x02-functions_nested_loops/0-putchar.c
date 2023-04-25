#include "main.h"
/**
 * main - prints the string "_putchar" from a character array.
 * Return: 0 on success.
 */
int main(void)
{
char c[9] = "_putchar";
int i = 0;
while (i < 8)
{
_putchar(c[i]);
i++;
}
_putchar('\n');
return (0);
}
