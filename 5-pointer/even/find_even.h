#include <math.h>

int* find_even(int* arr, int size){
    
    
    
    int i;
    
    for (i = 0; i < size; i++){
        if(*(arr+i) % 2 == 0){
            
           
            return (arr+i);
            
            break;
        }
    }
    if(*(arr + i) % 2 != 0){
        return NULL;
    } //cmm!!
}
