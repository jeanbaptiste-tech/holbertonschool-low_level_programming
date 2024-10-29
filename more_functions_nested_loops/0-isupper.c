#include "main.h"

/**
 * _isupper - VÃrifie si un caractÃre est en majuscule 
 * @c: le caractÃre a verifier
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
