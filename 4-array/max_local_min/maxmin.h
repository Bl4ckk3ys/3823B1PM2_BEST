#include <math.h>
int maxmin(int input[], int size){
    int localMin = pow(-10,7);
    if (input[0]<input[1]) localMin = input[0];
    if (input[size-1]<input[size-2] && localMin<input[size-1]) localMin = input[size-1];
    for (int i=1;i<size-1;i++){
        if(input[i]<input[i-1] && input[i]<input[i+1] && input[i]>localMin) localMin = input[i];
     }
    return localMin;
}