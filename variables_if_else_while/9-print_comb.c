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
        putchar(num + '0'); // Print the current number

        // Check if it's not the last number to print the comma and space
        if (num != 9)
        {
            putchar(','); // Print comma
            putchar(' '); // Print space
        }
    }
    putchar('\n'); // Print newline

    return (0);
}
