#include <math.h>

char find_bin_pattern(int number){
    int i=0,c = 0;
    long long int x=0;
    while (number>0){
        x += number%2*pow(10,i);
        number/=2;
        i++;
    }
    while (x>0){
        if (x%1000 == 101){
            c+=1;
            x/=100;
        }
        else x/=10;
    }   
    return c;
}