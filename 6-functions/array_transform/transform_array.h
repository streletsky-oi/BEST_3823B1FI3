#include <math.h>
#include <stdio.h>
double sum(double *arr, int size1){
    for (int i = 0; i < size1; i++){
        arr[i] += 1;
        printf("%f\n",arr[i]);
    }
}

double sqr(double *arr, int size2){
    for (int i = 0; i < size2; i++){
        arr[i] = arr[i] * arr[i];
        printf("%f\n",arr[i]);
    }
}

double stepen(double *arr, int size3){
    double sum = 0;
    for (int i = 0; i < size3; i++){
        if(arr[i] < 0){
            arr[i] = arr[i] * -1;
        }
        sum += arr[i];
    }
    printf("%f\n", sum);
    double degre;
    degre = sum / size3;
    printf("%f\n", degre);
    for (int i = 0; i < size3; i++){
        arr[i] = pow(arr[i], degre);
        printf("%f\n",arr[i]);
    }
}

double chet(double *arr, int size4){
    for (int i = 0; i < size4; i++){
        int w;
        w = (int)arr[i];
        if (w % 2 == 0){
            arr[i] = w * -1;
        }
        if (w % 2 != 0){
            arr[i] = pow(w, -1);
        }
        printf("%f\n",arr[i]);
    }
}

double nulit(double *arr, int size5){
    for (int i = 0; i < size5; i++){
        int e;
        e = (int)arr[i];
        if (e % 2 == 0 && i % 2 == 0){
            arr[i] = 0;
        }
        printf("%f\n",arr[i]);
    }
    
}

double izmen(double *arr, int size6){
    int pol = size6 / 2;
    for (int i = 0; i < pol; i++){ //первая половина отрциательная
        if (arr[i] > 0){
            arr[i] = arr[i] * -1;
        }
        printf("%f\n",arr[i]);
    }
    for (int i = pol; i < size6; i++){ //первая половина отрциательная
        if (arr[i] < 0){
            arr[i] = arr[i] * -1;
        }
        printf("%f\n",arr[i]);
    }
}

void transform(double* arr, int size, int* comands, int comands_count){
    
    
    
    
    int com;
    for (int i = 0; i < comands_count; i++){
        com = *(comands + i);
        switch(com){
            case 1: printf("%f\n", sum(arr, size)); break;
            case 2: printf("%f\n", sqr(arr, size));break;
            case 3: printf("%f\n", stepen(arr, size));break;
            case 4: printf("%f\n", chet(arr, size));break;
            case 5: printf("%f\n", nulit(arr, size));break;
            case 6: printf("%f\n", izmen(arr, size));break;
        }
    }
    
    
    
}
