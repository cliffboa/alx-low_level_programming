#include "main.h"

int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1;  /* Lowercase letter */
    else
        return 0;  /* Not a lowercase letter */
}

