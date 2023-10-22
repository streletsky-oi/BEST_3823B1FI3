int reverse(int number) {
    int reversedNumber = 0;
    int remainder;

    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number = number / 10;
    }

    return reversedNumber;
}

double decomposition(int number) {
    int thousands = number / 1000 * 1000;
    int hundreds = (number % 1000) / 100 * 100;
    int tens = (number % 100) / 10 * 10;
    int units = number % 10;

    double harmonicMean = 4.0 / ((1.0 / thousands) + (1.0 / hundreds) + (1.0 / tens) + (1.0 / units));

    return harmonicMean;
}

int append(int number, int start, int end) {
    
    int new;
    if (start > 0){
        new = (number* 10 + start * 100000) + end;
        return new;
    }
    else{
        new = (number* -10 + start * 100000) + -end;
        return new;
    }
}
