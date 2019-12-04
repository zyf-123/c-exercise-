#include <stdio.h>
void swap(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main(void)
{
	int a[100001];
	int n,i,j;
	scanf("%d",&n); 
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i;j++)
		{
			if(a[j]>a[j+1])
			{
				swap(&a[j],&a[j+1]);
				
			 } 
		} 
	}
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
 	return 0;
}

