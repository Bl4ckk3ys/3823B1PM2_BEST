long long change(int a, int b, int c, int d){
    long long int ch = (((long long int)c*100+d)-((long long int)a*100+b));
    if (ch>=0) return ch;
    else return -1;
}