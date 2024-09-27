#include "main.h"

char *_strpbrk(const char *s, const char *accept)
{
    while (*s) {
        if (_strchr(accept, *s))
            return (char *)s;
        s++;
    }
    return NULL;
}
