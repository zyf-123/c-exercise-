#include<stdio.h>
void copy(double target[][5], double source[][5],int rows)
{
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            target[i][j] = source[i][j];
        }
    }
}
void print(double source[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2lf ", source[i][j]);
        }
    }
    printf("\n");
}
int main(void)
{
    double source[3][5] =
    {
        {12.3, 32.1, 31.2, 677.6, 325.6},
        {23.1, 568.2, 23.5, 32.4, 88.67},
        {235.8, 64.5, 645.23, 2.3, 23.5}
    };
    double target[3][5];

    copy(target, source, 3);
    print(source, 3);
    print(target, 3);
}
