int fibonaci(long long k){
    long long int f0 = 0, f1 = 1, fk = 0, sum = 0;
    if (k < 0){
        return -1;
    }
    else{
        while(fk < k){
            fk = f0 + f1;
            if (fk > k){
                break;
            }
            sum += fk;
            f0 = f1;
            f1 = fk;
        }
        return sum + 1;

    }
    
}


long fib(int m){
    fibonaci(m);
    
}