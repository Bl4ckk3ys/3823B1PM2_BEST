#include <math.h>
int reverse(int number) {
    int ans = 0;
    while (number>0){
        ans = ans*10 + (number%10);
        number /= 10;
    }
    return ans;
}

double decomposition(int number) {
    int i = 0;
    double ans = 0;
    while (number>0){
        ans +=  1/((number%10)*pow(10,i));
        number /= 10;
        i+=1;
    }
    return 4/ans;
}

int append(int number, int start, int end) {
    int tmp = number, lengthOfNumber = 0, lengthOfEnd = 0;
    while (tmp > 0){
        lengthOfNumber+=1;
        tmp /= 10;
    }
    tmp = end;
    while (tmp > 0){
            lengthOfEnd+=1;
            tmp /= 10;  
    }
    if (lengthOfEnd == 0)lengthOfEnd+=1;
    if (start<0) return (-1)*(abs(start)*pow(10,lengthOfNumber + lengthOfEnd) + number*pow(10,lengthOfEnd)+end);
    else return start*pow(10,lengthOfNumber + lengthOfEnd) + number*pow(10,lengthOfEnd)+end;
}
