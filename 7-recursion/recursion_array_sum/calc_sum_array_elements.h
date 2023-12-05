#include <math.h>
int sum(int *arr, int size, int n, int sum1){
    if(n == size){
        return sum1;
    }
    if (size == -1){
        return -1;
    }
    sum1 += *(arr + n);
    n+=1;
    
    return sum(arr, size, n,sum1);
}
double calc_sum_elements(int* array, int array_size){
    int n = 0, summ = 0;
    return sum(array, array_size, n,summ);
}
