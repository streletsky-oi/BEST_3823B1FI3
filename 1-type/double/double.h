bool compare_double(double x, double y) {
    const double epsilon = 1e-5;
    return fabs(x - y) < epsilon;

}



int get_nearest_int(double x) {
    int get_nearest_int(double x);{
    return (int)(x + 0.5); // Округляем до ближайшего целого числа
    }
}

double get_fractional(double x){
    
    double get_fractional(double x);{
    return x - floor(x); // Вычитаем целую часть числа, чтобы получить дробную часть
    }
}
