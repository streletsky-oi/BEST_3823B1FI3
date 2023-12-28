#include <math.h>
#include <stdio.h>
#include <string.h>
char* floatToString(double number)
{
    char buffer[256];
    snprintf(buffer, sizeof(buffer), "%f", number);
    return buffer;
}

char* convert(double number){
    
    char* string = floatToString(number);

    

    return string;
}
