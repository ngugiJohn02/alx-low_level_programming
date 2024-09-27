#include "main.h"

char *_strchr(const char *s, int c)
{
    while (*s != '\0') {
        if (*s == (char)c)
            return (char *)s;
        s++;
    }
    return (c == '\0') ? (char *)s : NULL;
}
