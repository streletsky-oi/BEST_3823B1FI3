#include <math.h>
int minimal(int *arr, int size, int *mn){
    for (int i = 0; i < size; i++){
        if(*(arr + i) < *mn){
            *mn = *(arr + i);
        }
    }
    return(*mn);
}

int maximal(int *arr, int size, int *mx){
    for (int i = 0; i < size; i++){
        if(*(arr + i) > *mx){
            *mx = *(arr + i);
        }
    }
    return(*mx);
}

void get_max_min(int* array, int size, int* pMax, int* pMin){
    *pMin = *array;
    *pMax = *array;
    *pMax = maximal(array, size, pMax);
    *pMin = minimal(array, size, pMin);
    return(pMax);
    return(pMin);
    
    
}
