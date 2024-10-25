#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: 0 on success
 */
int main(void)
{
    int num;

    /* Loop through numbers 0 to 15 */
    for (num = 0; num < 16; num++)
    {
        if (num < 10)
        {
            putchar(num + '0'); /* Print digits 0-9 */
        }
        else
        {
            putchar(num - 10 + 'a'); /* Print letters a-f */
        }
    }
    putchar('\n'); /* Print newline */

    return (0);
}
