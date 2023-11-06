#include <math.h>

unsigned long long calc_e(char order){
    double ans = 1;
    int tmp = 1;
    for(int i = 1;i<order;i++){
        ans+= 1/i;
    }
    return ans;
}