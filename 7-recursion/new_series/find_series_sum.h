#include <math.h>
double raw(int n){
    if(n == 1 || n == 0){
        
        return 1;
    }
    
    return (raw(n-1) + 1) / (n);

}
double find_sum_elements_series(int k){
    
    double sum = 0;
    
    
    for (int i = 1; i <= k; i++){
        sum += raw(i);
    }
    
    return sum;
}
