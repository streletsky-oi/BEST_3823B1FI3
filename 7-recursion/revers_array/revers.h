#include <math.h>
int rever(int *arr, int size, int n, int temp){
    if(size == 1 || size == -1){
        return(*arr);
    }
    
    if (n == (size / 2)){
        return(*arr);
    }
    temp = *(arr + n);
    *(arr+n) = *(arr + size - 1 - n);
    *(arr + size - 1 - n) = temp;
    n+= 1;
    return(rever(arr, size, n, temp));
}

void reverse_array(int* array, int array_size){
    
    int n = 0;
    int temp;
    
    
    return(rever(array, array_size, n, temp));
}
