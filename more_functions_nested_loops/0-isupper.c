#include "main.h"

/**
 *_isupper - VÃrifie si un caractÃre est en majusce
 * @c: le caractÃre a verifir
 *
 * Return: 1 si le caractÃre est en majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
