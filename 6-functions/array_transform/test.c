#include "transform_array.h"
#include "acutest.h"

int compare_array(double* first, double* second, int size);
int percet_50(double* array, int size);

void test_transform_array() {
    double array1[] = { 16, 44, 0, 18, -46, 48, -49, 2, -3, -32, 14, 41, 39, 35, -24, 14, 50, 10, 8, 50, 25, -10, -18, 48, -15, -18, -31, 41, 38, -42, -13, -7, 26, -19, 25, 26, -38, 40, -11, 3, -44, 44, 18, 15, 20, 37, 50, 26, -27, -14, 20, 45, -6, 30, -21, 33, 25, -11, -35, -21, 16, -43, 21, 0, -35, 38, -9, 31, -38, -8, -50, -50, 4, 39, 6, 43, -5, 44, 2, 24, 47, -33, -29, -22, 21, 11, 0, 46, -33, -8, 49, 6, 29, -3, 16, -49, 9, -42, -44, 17 };
    int comands1[] = {6};

    transform(array1, sizeof(array1)/sizeof(double), comands1, sizeof(comands1)/sizeof(int));
    TEST_ASSERT(percet_50(array1, sizeof(array1)/sizeof(double)) == 1);



    double array2[] = { 16, 44, 0, 18, -46, 48, -49, 2, -3, -32, 14, 41, 39, 35, -24, 14, 50, 10, 8, 50, 25, -10, -18, 48, -15, -18, -31, 41, 38, -42, -13, -7, 26, -19, 25, 26, -38, 40, -11, 3, -44, 44, 18, 15, 20, 37, 50, 26, -27, -14, 20, 45, -6, 30, -21, 33, 25, -11, -35, -21, 16, -43, 21, 0, -35, 38, -9, 31, -38, -8, -50, -50, 4, 39, 6, 43, -5, 44, 2, 24, 47, -33, -29, -22, 21, 11, 0, 46, -33, -8, 49, 6, 29, -3, 16, -49, 9, -42, -44, 17 };
    double res2[] = {917.992063, 9568.094507, 1.000000, 1199.922985, 9568.094507, 11745.713865, 11176.781302, 14.088870, 5.307135, 3900.313158, 679.124348, 8103.563005, 7205.325327, 5590.782658, 1900.858528, 679.124348, 12933.470632, 321.813397, 198.496252, 12933.470632, 2553.650374, 198.496252, 917.992063, 11745.713865, 575.174810, 917.992063, 3604.204716, 8103.563005, 6779.184324, 7646.733364, 396.822651, 74.771536, 2796.587844, 1053.446440, 2553.650374, 2796.587844, 5972.073517, 7646.733364, 255.819294, 28.165684, 8575.966605, 9568.094507, 1199.922985, 793.305742, 1526.918523, 6368.153480, 12933.470632, 2796.587844, 2553.650374, 481.173041, 1526.918523, 10088.113159, 48.202898, 3900.313158, 1357.667572, 4871.907966, 2553.650374, 255.819294, 4871.907966, 1357.667572, 917.992063, 8103.563005, 1707.907201, 1.000000, 4871.907966, 6779.184324, 149.479091, 4210.180810, 5972.073517, 108.377645, 11745.713865, 11745.713865, 48.202898, 7205.325327, 108.377645, 9064.094384, 28.165684, 9568.094507, 14.088870, 2323.519341, 11176.781302, 4210.180810, 3052.530468, 1526.918523, 1707.907201, 396.822651, 1.000000, 10624.294615, 4210.180810, 108.377645, 12331.231225, 108.377645, 3604.204716, 5.307135, 917.992063, 11176.781302, 255.819294, 7646.733364, 8575.966605, 1053.446440};
    int comands2[] = {1, 2, 3};
    transform(array2, sizeof(array2)/sizeof(double), comands2, sizeof(comands2)/sizeof(int));
    TEST_ASSERT(compare_array(array2, res2, sizeof(array2)/sizeof(double)) == 1);



    double array3[] = { 16, 44, 0, 18, -46, 48, -49, 2, -3, -32, 14, 41, 39, 35, -24, 14, 50, 10, 8, 50, 25, -10, -18, 48, -15, -18, -31, 41, 38, -42, -13, -7, 26, -19, 25, 26, -38, 40, -11, 3, -44, 44, 18, 15, 20, 37, 50, 26, -27, -14, 20, 45, -6, 30, -21, 33, 25, -11, -35, -21, 16, -43, 21, 0, -35, 38, -9, 31, -38, -8, -50, -50, 4, 39, 6, 43, -5, 44, 2, 24, 47, -33, -29, -22, 21, 11, 0, 46, -33, -8, 49, 6, 29, -3, 16, -49, 9, -42, -44, 17 };
    int comands3[] = {1, 2, 3, 4, 6};
    transform(array3, sizeof(array3)/sizeof(double), comands3, sizeof(comands3)/sizeof(int));
    TEST_ASSERT(percet_50(array3, sizeof(array3)/sizeof(double)) == 1);

}


TEST_LIST = {
    {"Transform array", test_transform_array},
    {NULL, NULL}
};
























































































int compare_array(double* first, double* second, int size) {
    double eps = 0.0001;
    for (int i = 0; i < size; i++) {
        if (fabs(first[i] - second[i]) > eps) {
            return 0;
        }
    }
    return 1;
}

int percet_50(double* array, int size) {
    int percent = 100;
    int counter = 0;
    for (int j = 0; j < size; j++)
        if (array[j] > 0.0)
            counter++;
    percent = (int)(100 * ((double)counter / size));
    if (percent > 48 && percent < 52)
        return 1;
    return 0;
}