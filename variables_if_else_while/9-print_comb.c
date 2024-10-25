#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers,
 * separated by a comma and a space
 * Return: 0 on success
 */
int main(void)
{
    int num;

    for (num = 0; num < 10; num++)
    {
        putchar(num + '0'); 

        if (num != 9)
        {
            putchar(',');
            putchar(' ');
        }
    }
    putchar('\n');
    
    return (0);
}
