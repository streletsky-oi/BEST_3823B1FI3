#include <stdio.h>
#include <ctype.h>

void lower(char* str)
{
    for (; *str != '\0'; str++) {
        *str = tolower((unsigned char) *str);
    }
}
