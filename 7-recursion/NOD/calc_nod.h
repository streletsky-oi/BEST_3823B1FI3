#include <math.h>
int nodd(int n, int m){
    if (n < 0 || m < 0 || n == 0 || m == 0){
        return -1;
    }
    if( n > m){
        n = n - m;
    }
    if(m>n){
        m = m - n;
    }
    if (n == m || (n == 0 && m != 0)){
        return(m);
    }    
    if (n == m || (n != 0 && m == 0)){
        return(n);
    }
    return nodd(n, m);
}

int nod(int first, int second){
    return nodd(first, second);
}
