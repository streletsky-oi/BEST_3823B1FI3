

unsigned long long pack_ull(unsigned char arr[], int size){
    unsigned long long l = 0;
    for (int i = 0; i < size; i++) {
        if (size > 8){
            return 0;
            break;
        }
        l = l | ((unsigned long long)arr[i] << (8 * i));
    }
    return l;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned long long n = input;
    char a;
    for (int i = 0; i < 5; i++){
        a = (char)n;
        n = n >> 8;
        
    }
    return a;
}
