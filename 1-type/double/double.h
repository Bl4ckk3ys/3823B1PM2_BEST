bool compare_double(double x, double y) {
    
    if (fabs(x - y)<0.00000001) return true;
    else return false;
}

int get_nearest_int(double x) {
    #include <math.h>
    return x-=floor(x);
    
}

double get_fractional(double x) {
    return 0.1; // Not implementation
}
