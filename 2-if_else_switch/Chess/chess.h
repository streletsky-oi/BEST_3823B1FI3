int chess_rook(char a, int b, char c, int d){
    int a1, c1;
    a1 = (int)a;
    c1 = (int)c;
    if (((c1 == a1 && b !=d) || (b == d && c1 !=a1)) && (c1 >=65 && c1 <= 72) && (a1 >=65 && a1 <= 72) && (d >= 1 && d <=8) && (b >= 1 && b <=8)){
        return 1;
    }
    else{
        return 0;
    }
}