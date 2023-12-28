#include <stdio.h>
#include <stdlib.h>

double convert(char num[]) {
    char *end;
    double number = strtod(num, &end);

    if (end == num) {
        return 0.0;
    }


    printf("%lf", number);
    return number;
}
