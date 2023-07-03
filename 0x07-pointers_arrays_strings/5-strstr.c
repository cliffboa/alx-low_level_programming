#include "main.h"
#include <stddef.h>

char *_strstr(char *haystack, char *needle)
{
    if (haystack == NULL || needle == NULL)
        return NULL;

    if (*needle == '\0')
        return haystack;

    while (*haystack != '\0')
    {
        char *start = haystack;
        char *sub = needle;

        while (*sub != '\0' && *haystack == *sub)
        {
            haystack++;
            sub++;
        }

        if (*sub == '\0')
            return start;

        haystack = start + 1;
    }

    return NULL;
}

