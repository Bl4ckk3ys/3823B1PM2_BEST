int reverse(int number) {
    int ans = 0, tmp = number;
    while (tmp>0){
        ans = ans*10 + (tmp%10);
        tmp /= 10;
    }
    return ans;
}

double decomposition(int number) {
    
    return 0; // Not implementation
}

int append(int number, int start, int end) {
    return 0; // Not implementation
}
