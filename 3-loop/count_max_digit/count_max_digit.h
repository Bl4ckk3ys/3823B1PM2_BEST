#include <math.h>

char count_max_digit(long long int x){
    int max = x%10, c = 0;
    x = fabs(x);
    while (x>0){
        if (x%10 > max){
            c = 1;
            max = x%10;
        }
        else if (x%10 == max) c+=1;
        x/=10; 
    }
    return c;
}