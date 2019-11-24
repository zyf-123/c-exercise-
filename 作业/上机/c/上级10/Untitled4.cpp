#include<stdio.h>
#define n 10
int main(void){
	int a[n],i,temp;
	printf("ÇëÊäÈë%d¸öÊı×Ö",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n/2;i++)
	{
		temp=a[i];
		a[i]=a[n-1-i];
		a[n-1-i]=temp;	
			
	}
	
	
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
	
	
}
