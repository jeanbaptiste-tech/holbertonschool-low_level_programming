#include <stdio.h>

/**
 * main - prints all single-digit numbers of base 10 starting from 0,
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
    int num;

    /* Loop through numbers 0 to 9 */
    for (num = 0; num < 10; num++)
    {
        putchar(num + '0'); /* Convert integer to ASCII character */
    }
    putchar('\n'); /* Print newline */

    return (0);
}
