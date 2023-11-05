#include <math.h>

char count_max_digit(long long int n){
    
    
    
    if (n < 0){
        n = n * -1;
    }
    long long int cnt = 1; //забыл как тру делать
    int N = 0; //счетчик для подсчитывания кол-во цфир в числе
    long long tt, mn = 10;
    while(cnt != 0){ //делим постоянно на 10, 100, 1000 и тд пока не получим ноль
        tt = n / mn;
        if (tt == 0){
            break;
        }
        mn *= 10;
        N += 1;
    }
    N = N +1;
    
    long long int max;
    max = 0;
    long long int t; // цифра 
    long long int del = 10; // для деления - отбросить числа справа
    long long int ch = 1; // для остатка - отбрсоить числа слева
    for (int i = 1; i <= N; i++){
        t = (n % del) / ch; //выделяем цифру путем откидывания чисел справа/слева 
        if (t > max){
            max = t;
        }
        
        del = del * 10;
        ch = ch * 10;
    }
    
    
    char cntt = 0; //еще один счетчик макс цифер
    del = 10;
    ch = 1;
    for (int i = 1; i <= N; i++){
        t = (n % del) / ch;
        
        if (t == max){
            cntt = cntt + 1;
        }
        del = del * 10;
        ch = ch * 10;
    }  
    return cntt;
}