#include <math.h>
#include <stddef.h>

int* find_even(int* arr, int size){
    for(int i;i<size;i++){
        if ((int)fabs(arr[i])%2==0) return &arr[i];
    }
    return NULL;
}
