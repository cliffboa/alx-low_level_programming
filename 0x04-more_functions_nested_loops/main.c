#include "main.h"

int main(void)
{
    print_numbers();
    print_line(0);
    return 0;
}

void print_numbers(void)
{
    int i;
    for (i = 0; i < 10; i++)
    {
        _putchar(i + '0');
    }
    _putchar('\n');
}

void print_line(int n)
{
    int i;
    if (n > 0)
    {
        for (i = 0; i < n; i++)
        {
            _putchar('_');
        }
    }
    _putchar('\n');
}

