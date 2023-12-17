#include <math.h>
double recurs(int n){
    if(n == 1) return n;
    return (double)1/n + (double)recurs(n-1);
}
double sum_series(int n){
    double k;
    k = recurs(n);
    return(k);
}
