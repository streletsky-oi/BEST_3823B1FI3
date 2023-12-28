#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    
    
    int len;
    len = strlen(str);
    int i = 0;
    char s[1];
    while(*(str + i) != 0){
        
        
        s[0] = *(str + i);
        if(s[0] == sym){
            
            len--; // размер массива
            for(int j = i; j < len; j++){
                *(str + j) = *(str + j + 1);
            }
        }
        
        if(*(str + i) != sym){
            i++;
        }
        
    }

    return(str); // выводит строку прошлого размера
    
}
