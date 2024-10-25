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

	if (n > 0)
	{
		printf(1, "est positif\n", 12);
	}
	else if (n == 0)
	{
		printf(1, "vaut zéro\n", 11);
	}
	else
	{
		printf(1, "est négatif\n", 12);
	}
	return (0);
}
