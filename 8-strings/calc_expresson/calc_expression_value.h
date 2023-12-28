#include <math.h>
#include <string.h>
#include <ctype.h>

int evaluateExpression(char *expression) {
    int result = 0;
    int length = strlen(expression);
    int number = 0;
    int sign = 1; // 1 для сложения, -1 для вычитания
    int i;

    for (i = 0; i < length; i++) {
        char currentChar = expression[i];
        if (isdigit(currentChar)) {
            number = number * 10 + (currentChar - '0');
        } else if ((currentChar == '+' || currentChar == '-') && expression[i+1] !='-'  && expression[i+1] !='+') {
            result += sign * number;
            number = 0;
            if (i > 0 && expression[i-1] == '+' && expression[i-1] == '-') {
                return -1; // Ошибка в выражении
            }
            if (currentChar == '+') {
                sign = 1;
            } else {
                sign = -1;
            }
        } else {
            return -1;  // Ошибка в выражении
        }
    }

    result += sign * number; // Добавляем последнее число

    return result;
}
int calculate_expression(char expression[]){
    
    int result = evaluateExpression(expression);
    if (result != -1) {
        return result;
    } else {
        return -1;
    }


    
}

