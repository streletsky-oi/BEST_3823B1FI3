#include <math.h>
int det(int *mtx){ // находим определитель
    int sum;
    sum = 0;
    sum += (*(mtx)) * (*(mtx + 4)) * (*(mtx+8)); // главная диагональ
    sum += (*(mtx+1)) * (*(mtx+5)) * (*(mtx+6)); // triangle
    sum += (*(mtx+2)) * (*(mtx+3)) * (*(mtx+7));// triangle
    sum -= (*(mtx+2)) * (*(mtx+4)) * (*(mtx+6)); //побоачная диагональ
    sum -= (*(mtx)) * (*(mtx+5)) * (*(mtx+7));// triangle
    sum -= (*(mtx+1)) * (*(mtx+3)) * (*(mtx+8));// triangle
    return(sum);
    
}
int mindet(int *mtx){
    int sum;
    sum = 0;
    sum = (*(mtx)) * (*(mtx+3)) - (*(mtx+2)) * (*(mtx+1));
    
    return(sum);
}

double kramer_method(int* matrix, int* vector, int size){
    
    
    //*mtr = * matrix
    
    
    
    
    //int* vc = vector
    
    
    if(size == 4){
        int origdet, det1, det2;
        origdet = mindet(matrix);
        
        int copy1[4];
        for (int i = 0; i < size; i++){
            copy1[i] = *(matrix + i);
        }
        copy1[0] = *vector;
        copy1[2] = *(vector+1);
        int* cp1;
        cp1 = copy1;
        det1 = mindet(cp1);
        
        int copy2[4];
        for (int i = 0; i < size; i++){
            copy2[i] = *(matrix + i);
        }
        copy2[1] = *vector;
        copy2[3] = *(vector+1);
        
        int* cp2;
        cp2 = copy2;
        det2 = mindet(cp2);
        
        float x1, x2;
        x1 = det1 / origdet;
        x2 = det2 / origdet;
        return(x1 + x2);
        
        
    }
    else{
        int origdet, det1, det2, det3;
        origdet = det(matrix);
    
    
        int copy1[9];
        for (int i = 0; i < size; i++){
            copy1[i] = *(matrix + i);
        }
        copy1[0] = *vector;
        copy1[3] = *(vector+1);
        copy1[6] = *(vector+2);
        int* cp1;
        cp1 = copy1;
        det1 = det(cp1);
    
        int copy2[9];
        for (int i = 0; i < size; i++){
            copy2[i] = *(matrix + i);
        }
        copy2[1] = *vector;
        copy2[4] = *(vector+1);
        copy2[7] = *(vector+2);
        int* cp2;
        cp2 = copy2;
        det2 = det(cp2);
    
        int copy3[9];
        for (int i = 0; i < size; i++){
            copy3[i] = *(matrix + i);
        }
        copy3[2] = *vector;
        copy3[5] = *(vector+1);
        copy3[8] = *(vector+2);
        int* cp3;
        cp3 = copy3;
        det3 = det(cp3);
    
        int x1, x2, x3;
        x1 = det1 / origdet;
        x2 = det2 / origdet;
        x3 = det3 / origdet;
        return(x1 + x2 + x3);
    }
    return -1;

}
