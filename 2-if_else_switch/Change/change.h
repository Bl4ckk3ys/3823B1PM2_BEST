long long change(int a, int b, int c, int d){
    long long ch = ((c*100+d)-(a*100+b));
    if (ch<0) return -1;
    else if (ch==0) return 0;
    else if (ch>0) return ch;
}