/* 在相应位数上保持排序正确；
	梳排序的就是尽量把小的数字往前移动并保证此次间隔内的组是有序的。
例如：当间隔为6时，保证间隔为6的数字之间是有序的，
当间隔为4时，保证间隔为4的数字之间是有序的，
当间隔为3时，保证间隔为3的数字之间是有序的，
当间隔为2时，保证间隔为2的数字之间是有序的，
当间隔为1时，为冒泡排序，调整最后顺序使两两之间有序。

*/ 
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

void combsort(int *a, int size) 
{
 
  float shrink_factor = 1.3;   //设置递减率
  int gap = size, i;
  bool swapped = true;
 
  while ((gap > 1) || swapped) {  //当gap=1时，已经基本有序, swapped最后一次遍历排序
    if (gap > 1) gap = gap / shrink_factor;//7.5.3.2.1 
    swapped = false; 
    i = 0;
    while ((gap + i) < size) {
      if (a[i] > a[i + gap]) {
        swap(&a[i],&a[i + gap]);
        swapped = true;
      }
      ++i;
    }
  }
}

int main(void)   
{
    int a[]={3, 5, 4, 6, 9, 7, 8, 0, 1};
    int n=sizeof(a)/sizeof(*a);
    printArray(a,n);
    combsort(a,n);
    printArray(a,n);
    return 0;
}
/* 
梳排序还是基于冒泡排序,与冒泡不同的是,梳排序比较的是固定距离处的数的比较和交换,类似希尔那样

这个固定距离是待排数组长度除以1.3得到近似值,下次则以上次得到的近似值再除以1.3,直到距离小至3时,以1递减

不太好描述,还是看例子吧

假设待数组[8 4 3 7 6 5 2 1]

待排数组长度为8,而8÷1.3=6,则比较8和2,4和1,并做交换

[8 4 3 7 6 5 2 1]

[8 4 3 7 6 5 2 1]

交换后的结果为

[2 1 3 7 6 5 8 4]

第二次循环,更新间距为6÷1.3=4,比较2和6,1和5,3和8,7和4

[2 1 3 7 6 5 8 4]

[2 1 3 7 6 5 8 4]

[2 1 3 7 6 5 8 4]

[2 1 3 7 6 5 8 4]

只有7和4需要交换,交换后的结果为

[2 1 3 4 6 5 8 7]

第三次循环,更新距离为3,没有交换

第四次循环,更新距离为2,没有交换

第五次循环,更新距离为1,三处交换

[2 1 3 4 6 5 8 7]

[2 1 3 4 6 5 8 7]

[2 1 3 4 6 5 8 7]

三处交换后的结果为[1 2 3 4 5 6 7 8]

交换后排序结束,顺序输出即可得到[1 2 3 4 5 6 7 8]
*/ 

