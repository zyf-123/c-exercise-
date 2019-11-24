#include <stdio.h>
int main(void){
	int a[]={4,2,3,6,11,16,9,2,14}; 
	int j=sizeof(a)/sizeof(a[0]);
	int i,k;
	for(i=1;i<j;i++)
	{
		for(k=i;k>=0&&a[k]<a[k-1];k--) 
			{
			
				int temp;
				temp=a[k-1];
				a[k-1]=a[k];
				a[k]=temp;
		}
	}
		for(i=0;i<j;i++)
	{
	printf("%3d",a[i]);
	}
}

