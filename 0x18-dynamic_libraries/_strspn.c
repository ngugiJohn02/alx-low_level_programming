#include "main.h"

size_t _strspn(const char *s, const char *accept)
{
    size_t count = 0;
    while (*s && _strchr(accept, *s++))
        count++;
    return count;
}
