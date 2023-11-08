int maxmin(int input[], int size){
   
    int count = 0; // размер используемого хранилища минимумов 
    int locmins[100]; // массив для хранения минимумов, 
    int locmin;
    if (input[0] < input[1]){ //обрабатываем первый член и последний как исключение
        locmin = input[0];
        locmins[count] = locmin;
        count +=1;
    }
    for (int i = 1; i < size-1; i ++){
        if(input[i] < input[i -1] && input[i] < input[i+1]){
            locmin = input[i];
            locmins[count] = locmin;
            count += 1;
        }
    }
    if (input[size -1] < input[size -2]){ //обрабатываем первый член и последний как исключение
        locmin = input[size -1];
        locmins[count] = locmin;
    }
    int max = locmins[0];
    for (int j = 0; j < count; j++){
        if(locmins[j] < locmins[j+1]){
            max = locmins[j+1];
        }
    }
    return max;
}