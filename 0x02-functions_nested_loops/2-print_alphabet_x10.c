#include"main.h"
/**
 *print_alphabet_x10 - prints 10 alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)

{
	char x;
	int n = 0;

	while (n <= 0)
	{
		for (x = 'a'; x <= 'z'; x++)
		{
			_putchar(x);
		}
		_putchar('\n');
		n++;
	}
}
