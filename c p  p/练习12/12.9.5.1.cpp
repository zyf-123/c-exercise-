#include<stdio.h>
#include"lx5.h"
int rollme (void);
int main(void){
	int a[100];
	for(int i=0;i<100;i++)
	{
		a[i]=rollme();
	}
	for(int i=1;i<100;i++)
	{
		for(int k=i;k>0&&a[k]<a[k-1];k--) 
			{
			
				int temp;
				temp=a[k-1];
				a[k-1]=a[k];
				a[k]=temp;
		}
	}
	for(int i=0;i<100;i++)
	{
		if(i%10==0)
		printf("\n");
		printf("%3d",a[i]);
	}
	return 0;
}

