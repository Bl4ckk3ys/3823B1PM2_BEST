int chocolate(int n, int m, int k){
    if(n>1 && m>1 && ((k%n==0) && (k/n<=m)) || ((k%m==0) && (k/m<=n))) return 1;
    else return 0;
}