#include<stdio.h>
/**
 * main - Entry point
 * Discription: 'prints all the numbers of base 16 in lowercase'
 * Return: always 0
 */
int main(void)
{
	int x;
	int n;

	for (x = 48; x <= 57; x++)
	{
		putchar(x);
	}
	for (n = 97; n <= 102; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
