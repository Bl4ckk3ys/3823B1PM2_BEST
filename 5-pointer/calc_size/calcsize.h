#include <math.h>

int calcsize(void* memory){
    char* tmp = memory;
    int bytes_between = 0, fl = 0, i = 0, count;
    while(1){
        if(tmp[i] == 11) {
            fl = 1;
            count = i;
        }
        if (tmp[i] == 47 && fl) return i + (i - count);
        i++;
    } 
    return 0;
}
