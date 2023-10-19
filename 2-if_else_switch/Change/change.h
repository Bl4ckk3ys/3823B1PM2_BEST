long long change(int a, int b, int c, int d){
    long  price = a*100+b, payment = c*100+d;
    if (price > payment) return -1;
    else if (price == payment) return 0;
    else if (price < payment) {
        long tmp = payment - price;
        return tmp;
        }
}   