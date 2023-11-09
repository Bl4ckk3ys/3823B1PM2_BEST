#include <math.h>

int calc_percent(int arr[], int size){
    int max=arr[0],min=arr[0],c = 0;
    for(int i = 0;i<size;i++){
        if (max<arr[i]) max = arr[i];
        if (min>arr[i]) min = arr[i];
    }
    double r = (max-min)/2;
    for(int i = 0;i<size;i++){
        if (arr[i]>r) c++;
    }
    return (double)c/size*100;
}