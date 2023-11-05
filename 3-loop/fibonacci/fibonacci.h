long fib(int m){
    long long int f0 = 0, f1 = 1, fk = 0, sum = 0;
    if (m < 0) return -1;
    while(fk < m){
        fk = f0 + f1;
        if (fk > m){
            break;
        }
        sum += fk;
        f0 = f1;
        f1 = fk;
    }
    
    return sum + 1;
}