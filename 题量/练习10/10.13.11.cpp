#include<stdio.h>
void arr_x2(int arr[][5], int rows);
void printyuanshi(int arr[][5], int rows);
int main(void)
{
    int source[3][5] =
    {
        { 12, 32, 31, 677, 325 },
        { 23, 568, 23, 32, 88 },
        { 235, 64, 645, 2, 23 },
    };
    printyuanshi(source,3);
    arr_x2(source, 3);


    return 0;

}
void arr_x2(int arr[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            arr[i][j] = arr[i][j] * 2;
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
void printyuanshi(int arr[][5], int rows)
{
    for (int i = 0; i < rows; i++)
    {
        for (int  j = 0; j < 5; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}
