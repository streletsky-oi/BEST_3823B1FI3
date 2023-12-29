long fib(int m){
    int sum = 1, prev = 1, curr = 1, tmp;

    if (m < 0)
        return -1;
        
    while (curr <= m)
    {
        sum += curr;
        tmp = curr;
        curr += prev;
        prev = tmp;
    }

    return sum;

}
