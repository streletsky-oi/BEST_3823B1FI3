#include <math.h>

int calc_percent(int matrix[], int size){
    int min = matrix[0], max = matrix[0];
    
    for (int i = 0; i < size; i++){
        if(matrix[i] > max){
            max = matrix[i];
        }
        if(matrix[i] < min){
            min = matrix[i];
        }
            
    }
    int r;
    r = (max - min) / 2;
    float sizef = (float)size;
    float count = 0.0;
    for (int j = 0; j < size; j++){
        if (matrix[j] > r){
            count += 1;
        }
            
    }
    return (count / sizef) * 100;
}