#include <math.h>

double limit(double eps, int n_max){
    double ans, ans1, minim;
    if (n_max == 1) return 1 / sqrt(1*1+1);
    else{
        for (int i = 0; i<n_max; i++){
            ans = i / sqrt(i*i+i);
            ans1 = (i+1) / sqrt((i+1)*(i+1)+(i+1));
            if ((ans1 - ans) <= eps)
                    return ans1;
        }
        return ans1;
    }
}