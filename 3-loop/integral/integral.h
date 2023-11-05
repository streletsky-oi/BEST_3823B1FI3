#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double s, s1;
    double k = 1;
    s = (a*pow(right, 3)/3 + b*pow(right, 2)/2 + c*right);
    s1 = (a*pow(left, 3)/3 + b*pow(left, 2)/2 + c*left);
    s = s-s1;
    if (s > 0)
        return s;
    else
        return k;
}