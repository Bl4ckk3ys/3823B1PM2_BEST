#include <math.h>
int num_invers(int num){
    int ans = 0,i = 0;
    while(num>0){
        ans = ans*10+ num%10;
        i++;
        num/=10;
    }
    if (ans == 0) return 0;
    else return ans;
}