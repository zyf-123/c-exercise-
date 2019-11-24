#include <stdio.h>
int main(void){
	int a[18];
	int i,j;
	int shengyu=18;
	for(i=0;i<18;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<18;i++)
	{
		for(j=0;j<i;j++)
	{
		if(a[i]==a[j]&&a[j]!=0)
		
		{
		shengyu=shengyu-2;
		a[j]=a[i]=0;
	    } 
		
	}
		
	}
	printf("%d",shengyu);
	
}
