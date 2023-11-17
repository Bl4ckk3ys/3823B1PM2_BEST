#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    unsigned long long* pNum = arr;
    if (sizeof(unsigned long long) >= sizeof(unsigned char)*size)return *pNum;
    return 0;
}

unsigned char unpack_ull(unsigned long long input){
    unsigned char* pInput = &input;
    return *(pInput+4);
}