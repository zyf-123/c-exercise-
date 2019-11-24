//插入排序的复杂度为n2 每次都移动了数值 寻找一个插入点进行插入，并且插入一般是第一个值开始往左寻找。 
#include <stdio.h>
int main(void){ 
	int a[6]={5,2,4,6,1,3};
	int i,j,key;
	for(i=1;i<6;i++)
	{	
		key=a[i];  //第一位开始作为关键词 
		j=i-1;     //左边的一位 
		while(a[j]>key&&j>=0)  
		{
			a[j+1]=a[j];   //左边值往右移动 
			j--;
		}
		a[j+1]=key;// 迭代结束 寻找到合适的位置了。插入关键词 
	}
			
	
	for(i=0;i<6;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
