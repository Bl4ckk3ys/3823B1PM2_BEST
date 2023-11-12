#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int minHole = pow(10,9), index;
    for(int i = 4;i<length*width-4;i++){
        if (matrix[i]<matrix[i-1] && matrix[i]<matrix[i-2] && matrix[i]<matrix[i-3] && matrix[i]<matrix[i-4] && matrix[i]<matrix[i+1] && matrix[i]<matrix[i+2] && matrix[i]<matrix[i+3] && matrix[i]<matrix[i+4] && matrix[i]<minHole){
            minHole = matrix[i];
            index = i;
        } 
    }
    return ((int)((double)index/width))*100 + (index - (int)((double)index/width)*width)%width;
}
