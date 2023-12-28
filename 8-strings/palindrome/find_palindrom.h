#include <math.h>
#include <string.h>

int is_palindrom(char text[]){
    
    int len;
    len = strlen(text);
    int i = 0;
    char s = ' ';
    
    while(text[i] != 0){ // убираем пробелы
        if(text[i] == s){
            len--;
            for(int j = i; j < len; j++){
                text[j] = text[j+1];
            }
        }
        i++;
        
    }
    
    char t;
    i = 0;
    while(text[i] != 0){ // убрали ковычку
        t = (int)text[i];
        if(t == 39){
            len--;
            for(int j = i; j < len; j++){
                text[j] = text[j+1];
            }
        }
        i++;
    }
    char w;
    i = 0;
    while(i < len){ // убрали заглавные
        w = (int)text[i];
       
        if(w>=65 && w <= 90){
           
            w = (int)w + 32;
            text[i] = (char)w;
            
            
        }
        i++;
    }
    
    
    int count = 0;
    if(len % 2 == 0){
        for(int i = 0; i < (len / 2); i++){
            if(text[i] == text[len - 1 - i]){
                count+=1;
            }
        }
        if(count == (len / 2)){
            return 1;
        }
    }
    if(len % 2 != 0){
        for(int i = 0; i < (len / 2); i++){
            if(text[i] == text[len - 1 - i]){
                count+=1;
            }
        }
        if(count == (len / 2)){
            return 1;
        }
    }
    else{
        return 0;
    }
}
