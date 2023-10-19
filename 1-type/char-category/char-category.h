#include <stdbool.h>


bool is_digit(char x) {
    int tmp = (int)x; 
    if (tmp >= 48 && tmp <= 57) return true; 
    else return false;
}

bool is_letter(char x) {
    int tmp = (int)x; 
    if ((tmp >= 65 && tmp <= 90)||(tmp >= 97 && tmp<= 122)) return true; 
    else return false;
}

bool is_punctuation(char x) {
    int tmp = (int)x; 
    if ((tmp >= 33 && tmp <= 47)||(tmp >= 58 && tmp<= 64)||(tmp >= 91 && tmp<= 96)||(tmp >= 123 && tmp<= 126)) return true; 
    else return false;
}

int get_ascii_code(char first, char second, char third) {
    int tmpf = first, tmps = second, tmpth = third;
    return tmpf*1000000+tmps*1000+tmpth;
}

