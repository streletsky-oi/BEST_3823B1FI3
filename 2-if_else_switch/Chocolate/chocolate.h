int chocolate(int n, int m, int k){
    if (k > m*n) 
        return 0;
    if (m < 0 || n < 0 || k < 0) 
        return 0;
    if (k%m == 0 || k%n == 0) 
        return 1;
    return 0;
}