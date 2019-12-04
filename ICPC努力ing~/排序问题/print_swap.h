#include<stdio.h>    
#include<string.h>   
#include<math.h>   
#include<ctype.h>   
#include<stdbool.h>  

void swap(int *a, int *b)   //交换两元素的值
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void printArray(int a[], int count)   //打印数组元素
{
    int i;
    for(i=0; i<count; i++)
        printf("%d ",a[i]);
    printf("\n");
}


