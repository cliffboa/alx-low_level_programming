#include "main.h"
#include <unistd.h>  /* Required for the write function */

int _putchar(char c)
{
    return write(1, &c, 1);
}

