#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0; //Счётчик итераций
    int dig = number, oper = max_iter;
    int trueleft = left;
    if (dig < left || dig > right){
        return -1;
    }
    while (left <= right && i <=oper){
        i +=1;
        int middle = (left + right) / 2;
        if (dig == middle){
            return i * (middle - trueleft);
            break;
        }
        else if (dig < middle)
            right = middle - 1;
        else 
            left = middle + 1;
    }

    return i; //НЕ МЕНЯТЬ!
}