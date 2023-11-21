#include <math.h>

int get_index(int i, int j, int colnum){
    return i * colnum + j;

}

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    int *matrix = malloc(aM* bM * sizeof(int));
    for (int i = 0; i < aM; i++){
        for (int j = 0; j < bN; j++){
            int sum = 0;
            for (int k = 0; k < aN; k++){
                sum += A[get_index(i, k, aN)]  * B[get_index(k, j, bN)];
            }
            matrix[get_index(i, j, bN)] = sum;
        }
    }
    return matrix;
}
