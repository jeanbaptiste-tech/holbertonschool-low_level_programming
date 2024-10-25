#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
    char ch;

    /* Print lowercase alphabet */
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        putchar(ch);
    }

    /* Print uppercase alphabet */
    for (ch = 'A'; ch <= 'Z'; ch++)
    {
        putchar(ch);
    }

    /* Print newline */
    putchar('\n');

    return (0);
}
