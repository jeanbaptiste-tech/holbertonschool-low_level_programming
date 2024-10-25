#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse,
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
    char ch;

    /* Loop from 'z' down to 'a' */
    for (ch = 'z'; ch >= 'a'; ch--)
    {
        putchar(ch);
    }
    putchar('\n'); /* Print newline */

    return (0);
}
