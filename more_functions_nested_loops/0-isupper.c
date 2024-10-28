#include "main.h"
#include <stdio.h>

int main(void)
{
	char c = 'G';
    if (_isupper(c))
    {
	    printf("%c est en majuscule.\n", c);
    }
    else
    {
	    printf("%c n'est pas en majuscule.\n", c);
    }
    return (0);
}
