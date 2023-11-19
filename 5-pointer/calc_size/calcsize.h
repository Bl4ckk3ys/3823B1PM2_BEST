#include <math.h>

int calcsize(void* memory){
    char* tmp = memory;
    int bytes_between = 0, fl = 0, i = 0, ans = 0, len = 0;
    while(1){
        len++;
        if (fl == 1) bytes_between += 1;
        if(tmp[i] == 11) fl = 1;
        if (tmp[i] == 47) break;
        i++;
    }
    if (sizeof(int) == bytes_between+1){
        return len/sizeof(int);
    }
    else if (sizeof(char) == bytes_between+1){
        return len/sizeof(char);
    }
    else if (sizeof(short) == bytes_between+1){
        return len/sizeof(short);
    }
    else if (sizeof(long long) == bytes_between+1){
        return len/sizeof(long long);
    }
    else if (sizeof(unsigned long long) == bytes_between+1){
        return len/sizeof(unsigned long long);
    }
    else if (sizeof(unsigned short) == bytes_between+1){
        return len/sizeof(unsigned short);
    }

    return 0;
}
