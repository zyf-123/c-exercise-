#include <stdio.h>
int main(void){
	int j,k,a[12],*p;
	p=a;
	for(j=0;j<12;j++)
	{
		scanf("%d",p++);
	}
	p=a;
	for(j=0;j<12;j++)
	{
		if(j%4==0)
		printf("\n");
		printf("%4d",*p++);
	}
	printf("\n");
} 
