#include "main.h"

/**
 *_isupper - V�rifie si un caract�re est en majusce
 * @c: le caract�re a verifir
 *
 * Return: 1 si le caract�re est en majuscule, 0 sinon
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
