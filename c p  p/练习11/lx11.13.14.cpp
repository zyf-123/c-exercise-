#include<stdio.h>
#include<stdlib.h> 
#include <math.h>
int main(int argc, char **argv)
{
    double base = 0.0;
    int index = 0;
    double result = 0.0;

    base = atof(argv[1]);
    index = atoi(argv[2]);

    result = pow(base, index);

    printf("%d\nbase:%lf, index:%d, result:%lf",argc, base, index, result);
}
