#include "main.h"

char *_strncpy(char *dest, const char *src, size_t n)
{
    char *start = dest;
    while (n-- && (*dest++ = *src++) != '\0');
    while (n-- > 0)
        *dest++ = '\0';
    return start;
}
