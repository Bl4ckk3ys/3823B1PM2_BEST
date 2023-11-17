#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    unsigned long long* pNum = &arr[0];
    if (sizeof(unsigned long long) >= sizeof(arr[0]*size))return *pNum;
    return 0;
}

unsigned char unpack_ull(unsigned long long input){
    return 5;
}