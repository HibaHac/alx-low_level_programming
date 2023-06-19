#include<stdio.h>
#include<stdlib.h>
#include<time.h>
/**
 * main - Entry point
 * Description: 'prints the alphabet in lowercase'
 * Return: always 0
 */
int main(void)
{
	char lower, e, q;

	e = 'e';
	q = 'q';

	for (lower = 'a'; lower <= 'b'; lower++)
	{
	if (lower != e && lower != q)
		putchar(lower);
	}
	putchar('\n');
	return (0);
}
