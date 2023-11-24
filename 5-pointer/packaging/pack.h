#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    

}

unsigned char unpack_ull(unsigned long long input){
    unsigned long long n = input;
    
    
    for (int i = 0; i < 8; i++){
        char a = (char)n;
        n = n >> 8;
        if (i == 4){
            return a;
        }
        
    }
}