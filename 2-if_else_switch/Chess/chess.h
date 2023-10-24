int chess_rook(char a, int b, char c, int d){
    if((b>=1 && b<=8) && (d>=1 && d<=8)){
        if (a==c) return 1;
        else if (b==d)return 1;
        else return 0;
        }
    return 0;
}