#include <stdbool.h>


bool is_digit(char x) {
        int tmp = (int)x; 
        if (tmp >= 48 && tmp<=57) return true; 
        
}

bool is_letter(char x) {
    int tmp = (int)x; 
    if ((tmp >= 65 && tmp<=90)||(tmp >= 97 && tmp<= 122)) return true; 
    
}

bool is_punctuation(char x) {
    int tmp = (int)x; 
    if ((tmp >= 32 && tmp<=47)||(tmp >= 58 && tmp<= 64)||(tmp >= 91 && tmp<= 96)||(tmp >= 123 && tmp<= 126)) return true; 
  
}

int get_ascii_code(char first, char second, char third) {
    return 0; // No implementation
}

