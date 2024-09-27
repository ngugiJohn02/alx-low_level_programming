#include "main.h"

char *_strstr(const char *haystack, const char *needle)
{
    const char *h, *n;
    while (*haystack) {
        h = haystack;
        n = needle;
        while (*n && *h == *n) {
            h++;
            n++;
        }
        if (!*n)
            return (char *)haystack;
        haystack++;
    }
    return NULL;
}
