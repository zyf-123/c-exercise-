#include<stdio.h>
int main(void){
	int a[10]={7,9,2};
	int i;
	for(i=5;i<10;i++)
		scanf("%d",&a[i]);
		a[3]=11;
		for(i=0;i<10;i++)
		{
			a[i]=a[i]+1;
		}
		for(i=0;i<10;i++)
		{
			printf("%5d",a[i]);
			
		}
		printf("\n"); 
}
