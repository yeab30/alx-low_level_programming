#include "main.h"
/**
 * print_most_numbers - print 0 - 9
 * Description: print the no except 2 and 4 
 * Return: the number 0 - 9
 */
void print_most_numbers(void)
{
	int x = 0;
	for (; x <= 9; x++)
	{
	if (x == 2 || x == 4)
	 {
	continue;
        }
        else
	{
	_putchar(x + '0');
	}
        }
        _putchar('\n');
}		
