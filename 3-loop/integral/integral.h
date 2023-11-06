#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double first = ((a*pow(right,3))/3 + (b*pow(right,2))/2 + c*right), second = ((a*pow(left,3))/3 + (b*pow(left,2))/2 + c*left);
    if ((first - second)<0) return -1;
    else return first - second;
}