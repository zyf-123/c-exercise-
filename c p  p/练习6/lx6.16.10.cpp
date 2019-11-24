#include <stdio.h>
int main(void){
	int i,j,sum;
	sum=0;
	printf("输入下上限：");
	scanf("%d%d",&i,&j);
	for(i;i<=j;i++)
	{
		sum=sum+i*i;
	} 
		printf("%d",sum); 
	return 0;
} 

