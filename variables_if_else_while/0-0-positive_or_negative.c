#include <stdlib.h>
#include <time.h>

/**
 * main - Génère un nombre aléatoire et indique s'il est positif,
 * négatif ou nul
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("est positif\n");
	else if (n == 0)
		printf("vaut zéro\n");
	else
		printf("est négatif\n");
	return (0);
}
