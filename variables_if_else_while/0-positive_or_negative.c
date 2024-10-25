#include <stdlib.h>
#include <time.h>

/**
 * main - Génère un nombre aléatoire et indique s'il est positif,
 * négatif ou nul.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n;

    srand(time(0));
    n = rand() - RAND_MAX / 2;
	
    printf("%d ", n); 

    if (n > 0)
    {
        printf("is positive\n");
    }
    else if (n == 0)
    {
        printf("is zero\n");
    }
    else
    {
        printf("is negative\n");
    }

    return (0);
}
