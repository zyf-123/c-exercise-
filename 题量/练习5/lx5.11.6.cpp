#include <stdio.h>
int main(void){
	int count,sum,i;
	scanf("%d",&i); 
	count=0;
	sum=0;
	while(count++<i)
	{
	sum=count*count; 
	printf("sum=%d\n",sum);
	}
	
	return 0;
} 
