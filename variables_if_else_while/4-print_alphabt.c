#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, excluding 'q' and 'e',
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
    char ch;

    /* Loop through lowercase letters */
    for (ch = 'a'; ch <= 'z'; ch++)
    {
        if (ch == 'q' || ch == 'e') /* Skip 'q' and 'e' */
            continue;

        putchar(ch);
    }
    putchar('\n'); /* Print newline */

    return (0);
}
