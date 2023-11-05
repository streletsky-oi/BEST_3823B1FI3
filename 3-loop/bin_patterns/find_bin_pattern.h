#include <math.h>

char find_bin_pattern(int number){
    int n = number;
    
    int binaryNum[1000]; 
  
    int count = 0;
    int i = 0; 
    while (n > 0) { 
        // storing remainder in binary array 
        binaryNum[i] = n % 2; 
        n = n / 2; 
        i++; 
    }
    
        
    for (int j = i - 1; j >= 2; j--){
        if (binaryNum[j] == 1 && binaryNum[j-1] == 0 && binaryNum[j-2] == 1){
        
            count += 1;
        }
        
    }
    
    return count;
}