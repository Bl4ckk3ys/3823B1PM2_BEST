#include <math.h>
long long calc_row(int n, long long k){
    long long s = 0, tmp = 0;
    int fl = 0;
    for(int i = 1; i<n+1; i++){
        tmp = s;
        s+= i*k;
        fl = 1;
        if(fabs(s)<fabs(tmp)){
            fl = 0;
            return 0;
            break;
        }
    }
    if (fl == 1)return s;
    else return 0;
}