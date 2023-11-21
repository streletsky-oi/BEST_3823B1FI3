#include <math.h>

int calcsize(void* memory){
    char* f = memory;
    int i = 0;
    int j = 0;
    while(f[i]!= 47){
        if (f[i] == 11){
            j = i;
        }
        i+= 1;
    }
    int d = i - j;
    

    return i + d;
}
