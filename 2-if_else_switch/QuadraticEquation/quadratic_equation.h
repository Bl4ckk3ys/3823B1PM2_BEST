#include <math.h>
int QuadraticEquation(double a, double b, double c){
    double x1,x2,d;
    d = fabs(pow(b,2)-4*a*c);
    x1 = ((-1)*b + sqrt(d))/(2*a);
    x2 = ((-1)*b - sqrt(d))/(2*a);
    return x1+x2;
}