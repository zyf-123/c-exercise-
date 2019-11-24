#include <stdio.h>
void enter_arr(double arr[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%lf", &arr[i][j]);
        }
    }
}
double cal_avg_1d(double arr[], int cols)
{
    double sum = 0.0;
    for (int i = 0; i < cols; i++)
    {
        sum += arr[i];
    }

    return (sum / cols);
}
double cal_avg_2d(double arr[][5], int rows)
{
    double sum = 0.0;
    
        for (int j = 0; j < 5; j++)
        {
            sum += arr[rows][j];
        }
    
    return (sum / 5);
}
double arr_max_element(double arr[][5], int rows)
{
    double max = 0.0;
    for (int  i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int main(void)
{
    double arr[3][5];
    printf("Enter 15 double number:");
    enter_arr(arr, 3);
    printf("average of row %d is %lf\n", 0, cal_avg_1d(arr[0], 5));
    for (int i = 1; i < 3; i++)
    {
       printf("average %d row number is %lf\n",i, cal_avg_2d(arr, i)); 
    }
    
    printf("The max element of array is %lf\n", arr_max_element(arr, 3));
}

