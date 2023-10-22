bool compare_double(double x, double y) {
    int x1 = x * 10000;
    int y1 = y * 10000;
    if (x1 == y1){
        return true;
    }
    else{
        return false;
    }

}



int get_nearest_int(double x) {
    double num = x;
    double ost = num - (int)num;
    if (ost >=0.5){
       return (int)num + 1;
    }
    else{
       return (int)num;
    }
    
}

double get_fractional(double x){
    
    if (x > 0){
        return ".", x - (int)x;
    }
    else{
        return ".", ( x - ((int) x - 1));
    }
    
}
