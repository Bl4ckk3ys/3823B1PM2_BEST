long fib(int m){
    int n = 1, s = 0,tmp = 1;
    while(n<m){
        s += n;
        n += tmp; 
        tmp = n;
    }
    return s;
}