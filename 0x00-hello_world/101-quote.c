#include <unistd.h>

/**
*main - Entry
*
*Discription:  C program with a print a text function
*
*Return: 1 (NOT SUCCESS)
*/

int main(void)
{
    write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
    return (1);
}
