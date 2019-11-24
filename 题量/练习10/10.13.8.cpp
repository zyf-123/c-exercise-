#include <stdio.h>
void copy_ptrs(double *target3,double *sourcebegin,double *sourceend);
int main(void)
{
    double arr[10] = { 1.23, 202.22, 39.1, 92.11, 93.22, 30.2, 333.33, 938.2, 391.1, 2.2 };
    double target[3];

    copy_ptrs(target, arr+2, arr+5);

    for (size_t i = 0; i < 3; i++)
    {
        printf("%.2lf ", target[i]);
    }
}
void copy_ptrs(double *target3,double *sourcebegin,double *sourceend)
{
for(double *i=sourcebegin;i<=sourceend;i++)
{
	*target3++=*i;
	
}
}
