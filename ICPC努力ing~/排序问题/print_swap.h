#include<stdio.h>    
#include<string.h>   
#include<math.h>   
#include<ctype.h>   
#include<stdbool.h>  

void swap(int *a, int *b)   //������Ԫ�ص�ֵ
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}

void printArray(int a[], int count)   //��ӡ����Ԫ��
{
    int i;
    for(i=0; i<count; i++)
        printf("%d ",a[i]);
    printf("\n");
}


