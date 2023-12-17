#include <math.h>


//
unsigned int little_big_convert(unsigned int input){ 
    unsigned int a = input;
    //up
    
    int mass[32];
    int t = 0;
    int pos = 0;
    for(int i = 0; i <4; i++){
        int binarynum[8] = {0,0,0,0,0,0,0,0};
        unsigned char b = (unsigned char)a;
        a = a >> 8;
        
        int j = 0; 
        while (b > 0) { 
            binarynum[j] = b % 2; 
            b = b / 2; 
            j++; 
        }
        
        
        for (int w = 7; w >= 0; w--){
            mass[t] = binarynum[w];
            
            t += 1;
        }    
        
    }
    int sum=0; 
    
    int k = 31;
    for (int i = 0;i < 32;i++){
        if (mass[i]==1){
            sum+=pow(2,k);
            
        }
        k = k - 1;
    }
    return sum; //cmm111!!
    
}
