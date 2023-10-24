#include <stdbool.h>
int chess_rook(char a, int b, char c, int d){
    char arr[] = {'A','B','C','D','E','F','G','H'};
    bool flagA = false, flagC = false;
    for(int i = 0;i<(sizeof(arr)/sizeof(char));i++){
        if (a == arr[i]) flagA=true;
        if (c == arr[i]) flagC=true;
    }
    if((b>=1 && b<=8) && (d>=1 && d<=8) && flagA && flagC){
        if (a==c && b==d) return 0;
        else if (a==c || b==d) return 1;
        else return 0;
        }
    return 0;
}