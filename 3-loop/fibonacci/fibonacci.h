long fib(int m){
    int f1 = 0, f2 = 1,tmp;
    long s = 0;
    while(f2<=m){
        tmp = f1+f2;
        s += f2;
        f1 = f2;
        f2 = tmp;     
    }
    if (s==0) return -1;
    else return s;
}