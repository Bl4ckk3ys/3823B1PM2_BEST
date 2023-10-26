char left_more(double input[], unsigned int size){
    int c=0;
    for(int i = 0; i<size-1; i++){
        if (input[i]<input[i+1]) c++;
    }
    return c;
}